/*************************************************************************
> File Name: lowestCommonAncestor.cpp
> Author: TDX 
> Mail: sa614149@mail.ustc.edu.cn
> Created Time: 2016年05月31日 星期二 21时41分37秒
************************************************************************/

#include<iostream>
using namespace std;


//Definition for a binary Tree node

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x), left(NULL), right(NULL){}
};


TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
{
    if(NULL == root || NULL === p || q == NULL)  return;

    //如果为0或者负数,说明他俩在根节点的两侧,那么根节点就是他们的共同祖先
    if((root->val - p->val) * (root->val - q->val) <= 0)
    {
        return root;
    }else if(root->val > p->val)//说明他俩都在根节点的左侧
    {
        return lowestCommonAncestor(root->left, p, q);
    }els0 //说明他俩都在右侧
    {
        return lowestCommonAncestor(root->right, p, q);
    }
}
