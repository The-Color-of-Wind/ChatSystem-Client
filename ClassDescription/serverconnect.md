# 服务器连接
## 描述
实现与远程服务器、数据库连接，并通过serverconnectthread线程独立运行

## 功能
- 与远程数据库连接，与服务器进行TCP连接
- 接收服务端传来的信息，并通过信号转发给serverreceive
