# chatserver
Cluster chat server and client code based on the muduo network library working in an nginx load-balanced mode
编译方式
cd build
rm -rf *
cmake ..
make

需要配置nginx的负载均衡
需要启动redis、mysql服务
