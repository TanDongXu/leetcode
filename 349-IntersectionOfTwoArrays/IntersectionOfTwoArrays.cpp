/*************************************************************************
> File Name: IntersectionOfTwoArrays.cpp
> Author: TDX 
> Mail: sa614149@mail.ustc.edu.cn
> Created Time: 2016年05月26日 星期四 14时48分14秒
************************************************************************/

#include<iostream>
using namespace std;

//求两个数组的交集

class Solution
{
    public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
    {
        vector<int> nResult;
        if(nums1.empty() || nums2.empty())
        {
            return nResult;
        }

        for(int i = 0; i < nums1.size(); i++)
        {
            if(find(nums2.begin(), nums2.end(), nums1[i]) != nums2.end())
            {
                if(find(nResult.begin(), nResult.end(), nums1[i]) == nResult.end())
                {
                    nResult.push_back(nums1[i]);
                }
            }
        }

        return nResult;
    }
};
