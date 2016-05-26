/*************************************************************************
> File Name: moveZero.cpp
> Author: TDX 
> Mail: sa614149@mail.ustc.edu.cn
> Created Time: 2016年05月26日 星期四 16时31分43秒
************************************************************************/

#include<iostream>
#include<vector>
using namespace std;


class Solution
{
    public:
    void moveZeroes(vector<int>& nums)
    {
        if(nums.empty()) return;
        if((1 == nums.size()) && 0 == nums[0]) return;

        vector<int>::iterator it;
        int nNumber = 0;

        for(it = nums.begin(); it != nums.end();)
        {
            if(0 == (*it))
            {
                //erase返回下一个迭代器的指针
                it = nums.erase(it);
                ++ nNumber;
            }else
            ++ it;//指向下一个位置
        }

        for(int i = 0; i < nNumber; i++)
        {
            nums.push_back(0);
        }
    }
};
