/*************************************************************************
> File Name: containDuplicate.cpp
> Author: TDX 
> Mail: sa614149@mail.ustc.edu.cn
> Created Time: 2016年05月30日 星期一 19时56分52秒
************************************************************************/

#include<iostream>
using namespace std;


class Solution
{
    public:
    bool containDuplicate(vector<int>& nums)
    {
        map<int , int>mNumber;
        for(int i = 0; i < nums.size(); i++)
        {
            mNumber[nums[i]]++;
            if(mNumber[nums[i]] >= 2)
            return true;
        }

        return false;
    }
};
