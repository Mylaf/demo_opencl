// author: pingo

#include <stdio.h>
#include <stdlib.h>
#include <CL/cl.h>

int main(void){
    cl_int status;

    cl_uint numPlatforms = 0;
    status = clGetPlatformIDs(0, NULL, &numPlatforms);

    cl_platform_id *platforms = NULL;
    platforms = (cl_platform_id *)malloc(numPlatforms * sizeof(cl_platform_id));
    status = clGetPlatformIDs(numPlatforms, platforms, NULL);

    for(cl_uint i=0; i<numPlatforms; ++i){
        char sz[1024];
        size_t size;
        status = clGetPlatformInfo(platforms[i], CL_DEVICE_NAME, 0, NULL, &size);
        printf("platform name: %s\n", sz);
    }


    return 0;
}
