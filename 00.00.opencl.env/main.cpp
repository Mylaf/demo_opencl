// author: pingo

#include <stdio.h>
#include <stdlib.h>
#include <CL/cl.h>

int main(int argc, const char** argv)
{
	// 获取可用的平台数量
	cl_uint num_entries;
	clGetPlatformIDs(0, NULL, &num_entries);

	// 获取可用的平台
	cl_platform_id* platforms = new cl_platform_id[num_entries];
	clGetPlatformIDs(num_entries, platforms, NULL);

	// 输出平台名称
	char param_value[512];
	for (cl_uint i = 0; i < num_entries; i++) {
		size_t param_value_size_ret;
		//获取某个平台信息
		clGetPlatformInfo(platforms[i], CL_PLATFORM_NAME, 0, NULL, &param_value_size_ret);
		clGetPlatformInfo(platforms[i], CL_PLATFORM_NAME, param_value_size_ret, param_value, NULL);
		printf("platfrom %d name is %s\n", i + 1, param_value);
	}

	// 释放资源
	delete[] platforms;

	return 0;
}
