# chatserver
Cluster chat server and client code based on the muduo network library working in an nginx load-balanced mode
编译方式
cd build
rm -rf *
cmake ..
make

#环境依赖
平台工具：VScode远程连接Ubuntu22.04开发  
muduo网络库  
负载均衡器：nginx-1.24.0  
安装redis、mysql，同时启动服务
  


