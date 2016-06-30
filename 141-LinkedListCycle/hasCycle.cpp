/*************************************************************************
	> File Name: hasCycle.cpp
	> Author:TDX 
	> Mail: SA614149@mail.ustc.edu.cn
	> Created Time: 2016年06月30日 星期四 15时59分20秒
 ************************************************************************/

#include<iostream>
using namespace std;


/*Definetion for single-linked list*/

struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x):val(x), next(NULL){}
};


class Solution
{
    public:
    bool hasCycle(ListNode* head)
    {
        if(NULL == head) return false;
        if(head == head->next) return true;

        ListNode* pFast = head;
        ListNode* pSlow = head;

        do{
            
            if(NULL != pFast) pFast = pFast->next;
            if(NULL != pFast) pFast = pFast->next;
            if(NULL == pFast) return false;
            pSlow = pSlow->next;
        }while(pSlow != pFast);

        return true;
};
