/*************************************************************************
> File Name: DeleteNodeInList.cpp
> Author: TDX 
> Mail: sa614149@mail.ustc.edu.cn
> Created Time: 2016年05月27日 星期五 16时12分26秒
************************************************************************/

#include<iostream>
using namespace std;


//Definition for singly-linked list
struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x): val(x), next(NULL) {}
};
//node为要删除的节点
class Solution
{
    public:
    void deleteNode(ListNode* node)
    {
        if(NULL == node) return;

        node->val = node->next->val;
        node->next = node->next->next;
    }
};
