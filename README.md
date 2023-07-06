# chatserver集群项目描述
基于muduo网络库的聊天服务器+客户端项目，服务器端引入了redis缓存和nginx/tcp负载均衡集群。其中，nginx负责处理客户端的请求，通过nginx的负载均衡策略，nginx会按权重配比1:1分配服务器，用于处理客户端的请求信息。信息到达服务器后，进入作为缓存队列的redis中，然后通过发布-订阅模式，转发到进行通信的客户端。  
客户端用户注册的账号信息等会保存到MySQL数据库中。

# 环境依赖  
平台工具：VScode远程连接Ubuntu22.04开发  
muduo网络库  
负载均衡器：nginx-1.24.0  
安装redis、mysql，同时启动服务

# 编译方式  
cd build  
rm -rf *  
cmake ..  
make  
