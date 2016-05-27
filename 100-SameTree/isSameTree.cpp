/*************************************************************************
> File Name: isSameTree.cpp
> Author: TDX 
> Mail: sa614149@mail.ustc.edu.cn
> Created Time: 2016年05月27日 星期五 16时30分00秒
************************************************************************/

#include<iostream>
using namespace std;

//Definition for a binaryTree node

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x), left(NULL), right(NULL) {}
};

class Solution
{
    public:
    bool isSameTree(TreeNode* p, TreeNode* q)
    {
        //两棵树都为空树,则返回true
        if(NULL == p && NULL == q) return true;

        //当有一棵树为空另一棵树不为空则返回false,主要是防止空树[]和只有一个节点的树[0]
        if((NULL == p && NULL != q) || (NULL != p && NULL == q)) 
        return false;

        if(p->val == q->val)
        {
            return (isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
        }else

        return false;
    }
};
