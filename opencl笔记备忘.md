
demo opencl
# OpenCL���������
  ## Widows
  1,��Intel OpenCL��VS2022+OpenCL��Intelƽ̨
     https://blog.csdn.net/Ciellee/article/details/122379217
     ����Intelƽ̨�����׼�
     https://www.intel.com/content/www/us/en/developer/tools/oneapi/iot-toolkit-download.html?operatingsystem=window&distributions=webdownload&options=offline 
     Download>Continue as a Guest (download starts immediately) 
     ��װIntelƽ̨�����׼�
     ���ã�
     ʾ�����룺00_01

  2,��NVIDIA OpenCL��VS2022+OpenCL��NVIDIAƽ̨
     https://blog.csdn.net/yiguagua/article/details/106725586
     ���ذ�װ���Կ��ͺ�����Ӧ���Կ���������װ
     ����CUDA����װ
     ���ã�
     ͷ�ļ�·����C:\Program Files\NVIDIA GPU Computing Toolkit\CUDA\v9.1\include\CL
     ���ļ�·����C:\Program Files\NVIDIA GPU Computing Toolkit\CUDA\v9.1\lib\x64
  3,CMakeLists.txt
     FIND_PACKAGE ( OpenCL )
     MESSAGE(STATUS "OpenCL FOUND: ${OpenCL_FOUND}")
     MESSAGE(STATUS "OpenCL Version: ${OpenCL_VERSION_STRING}")
     MESSAGE(STATUS "OpenCL Include: ${OpenCL_INCLUDE_DIRS}")
     MESSAGE(STATUS "OpenCL Librarys: ${OpenCL_LIBRARIES}")
     INCLUDE_DIRECTORIES(${OpenCL_INCLUDE_DIRS})
     LINK_LIBRARIES(${OpenCL_LIBRARIES})
  ## Linux

# opencl ��̲���
  https://blog.csdn.net/silencez_w/article/details/121761956
  1, ��ȡƽ̨Platform:  clGetPlatformIDs()
  2, ��ȡ�豸Devices: clGetDeviceIDs()
  3, ����������Context: clCreateContext()
  4, �����������Queue: clCreateCommandQueue()
  5, �����豸����(�ڴ����)Buffer: clCreateBuffer()
  6, ���ݰ��˵��豸: clEnqueueWriteBuffer()
  7, ����������������Program:
      clCreateProgramWithSource()
      clBuildProgram()
  8, ����kernel����: clCreateKernel()
  9, ����kernel����: clSetKernelArg()
  10, ����worksize:
  11, ִ��kernel: clEnqueueNDRangeKernel()
  12, ����ȡ�ص�����: clEnqueueReadBuffer()
  13, �ͷ���Դ(�������): clRelease*()

# opencl ͼ������ת
  https://zhuanlan.zhihu.com/p/445939233 

# opencl 

# opencl 

# opencl 

# opencl 

# opencl 

# opencl 

# opencl 

