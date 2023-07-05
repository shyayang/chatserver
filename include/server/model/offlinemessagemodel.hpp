#ifndef OFFLINEMESSAGEMODEL_H
#define OFFLINEMESSAGEMODEL_H

#include <vector>
#include <string>
using namespace std;

class OfflineMsgModel
{
public:
    // 存储用户的离线消息
    void insert(int userid, string msg);
    // 删除用户的离线消息
    void remove(int userid);
    // 查询用户的离线消息，用户的消息可能有多个，用容器存储
    vector<string> query(int userid);
};

#endif