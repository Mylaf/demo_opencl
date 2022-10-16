
demo opencl
# OpenCL开发环境搭建
  ## Widows
  1,【Intel OpenCL】VS2022+OpenCL：Intel平台
     https://blog.csdn.net/Ciellee/article/details/122379217
     下载Intel平台工具套件
     https://www.intel.com/content/www/us/en/developer/tools/oneapi/iot-toolkit-download.html?operatingsystem=window&distributions=webdownload&options=offline 
     Download>Continue as a Guest (download starts immediately) 
     安装Intel平台工具套件
     配置：
     示例代码：00_01

  2,【NVIDIA OpenCL】VS2022+OpenCL：NVIDIA平台
     https://blog.csdn.net/yiguagua/article/details/106725586
     下载安装与显卡型号相适应的显卡驱动并安装
     下载CUDA并安装
     配置：
     头文件路径：C:\Program Files\NVIDIA GPU Computing Toolkit\CUDA\v9.1\include\CL
     库文件路径：C:\Program Files\NVIDIA GPU Computing Toolkit\CUDA\v9.1\lib\x64
  3,CMakeLists.txt
     FIND_PACKAGE ( OpenCL )
     MESSAGE(STATUS "OpenCL FOUND: ${OpenCL_FOUND}")
     MESSAGE(STATUS "OpenCL Version: ${OpenCL_VERSION_STRING}")
     MESSAGE(STATUS "OpenCL Include: ${OpenCL_INCLUDE_DIRS}")
     MESSAGE(STATUS "OpenCL Librarys: ${OpenCL_LIBRARIES}")
     INCLUDE_DIRECTORIES(${OpenCL_INCLUDE_DIRS})
     LINK_LIBRARIES(${OpenCL_LIBRARIES})
  ## Linux

# opencl 编程步骤
  https://blog.csdn.net/silencez_w/article/details/121761956
  1, 获取平台Platform:  clGetPlatformIDs()
  2, 获取设备Devices: clGetDeviceIDs()
  3, 创建上下文Context: clCreateContext()
  4, 创建命令队列Queue: clCreateCommandQueue()
  5, 创建设备缓存(内存对象)Buffer: clCreateBuffer()
  6, 数据搬运到设备: clEnqueueWriteBuffer()
  7, 创建并编译程序对象Program:
      clCreateProgramWithSource()
      clBuildProgram()
  8, 创建kernel对象: clCreateKernel()
  9, 设置kernel参数: clSetKernelArg()
  10, 配置worksize:
  11, 执行kernel: clEnqueueNDRangeKernel()
  12, 数据取回到主机: clEnqueueReadBuffer()
  13, 释放资源(程序结束): clRelease*()

# opencl 图像处理：旋转
  https://zhuanlan.zhihu.com/p/445939233 

# opencl 

# opencl 

# opencl 

# opencl 

# opencl 

# opencl 

# opencl 

