/*************************************************************************
	> File Name: MaximumDepthBTree.cpp
	> Author: TDX 
	> Mail: sa614149@mail.ustc.edu.cn
	> Created Time: 2016年05月25日 星期三 16时27分31秒
 ************************************************************************/

#include<iostream>
using namespace std;

//Definition for a binary tree node

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x),left(NULL),right(NULL){}
};


class Solution
{
    public:
    int maxDepth(TreeNode* root)
    {
        int nLDepth, nRDepth;

        if(NULL == root) 
            return 0;//如果树是空树,则返回0
        else
        {
            nLDepth = maxDepth(root->left);//求左子树深度
            nRDepth = maxDepth(root->right);//求右子树深度
        }
        //返回左右子树深度的最大值加1
        return (nLDepth > nRDepth ? nLDepth : nRDepth) + 1;
    }
};
