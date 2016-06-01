/*************************************************************************
	> File Name: deleteDuplicates.cpp
	> Author: TDX 
	> Mail: sa614149@mail.ustc.edu.cn
	> Created Time: 2016年06月01日 星期三 20时46分56秒
 ************************************************************************/

#include<iostream>
using namespace std;

//Definition for singly-linked link

struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x): val(x), next(NULL){}
};


//删除链表中重复的节点
class Solution
{
    public:
    ListNode* deleteDuplicates(ListNode* head)
    {
        if(NULL == head) return NULL;
        //定义三个指针:一个指向删除的节点,另一个指向当前节点,再另一个指向下一个节点
        ListNode* pDeleteNode = NULL;
        ListNode* pNode = head;
        ListNode* pNextNode = head->next;

        while(NULL != pNextNode)
        {
            if(pNode->val == pNextNode->val)
            {
                pDeleteNode = pNextNode;
                pNode->next = pNextNode->next;
                pNextNode = pNextNode->next;
                delete pDeleteNode;
            }else
            {
                pNode = pNextNode;
                pNextNode = pNextNode->next;
            }
        }

        return head;
    }
};
