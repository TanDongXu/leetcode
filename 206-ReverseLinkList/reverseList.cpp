/*************************************************************************
> File Name: reverseList.cpp
> Author: TDX 
> Mail: sa614149@mail.ustc.edu.cn
> Created Time: 2016年05月30日 星期一 22时05分14秒
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

class Solution
{
    public:
    ListNode* reverseList(ListNode* head)
    {
        ListNode* pNewNode = NULL;
        //定义三个指针分别指向当前遍历的节点,他的前一个节点,和后一个节点
        ListNode* pPreNode = NULL;
        ListNode* pNode = head;
        ListNode* pNextNode = NULL;

        while(NULL != pNode)
        {
            if(NULL == pNode->next)
            {
                pNewNode = pNode;
            }

            pNextNode = pNode->next;
            pNode->next = pPreNode;
            pPreNode = pNode;
            pNode = pNextNode;
        }

        return pNewNode;
    }
};
