/*************************************************************************
> File Name: InVertBTree.cpp
> Author: TDX 
> Mail: sa614149@mail.ustc.edu.cn
> Created Time: 2016年05月26日 星期四 10时38分50秒
************************************************************************/

#include<iostream>
using namespace std;


//Definition for a binary tree node

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x), left(NULL),right(NULL){}
};

class Solution
{
    public:
    TreeNode* invertTree(TreeNode* root)
    {
        if(NULL == root)
        {
            return NULL;
        }

        if(NULL != root->left || NULL != root->right)
        {
            TreeNode* left =  invertTree(root->left);
            TreeNode* right =  invertTree(root->right);
            root->left = right;
            root->right = left;
        }
        return root;
    }
};
