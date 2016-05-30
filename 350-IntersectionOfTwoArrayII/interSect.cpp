/*************************************************************************
> File Name: interSect.cpp
> Author: TDX 
> Mail: sa614149@mail.ustc.edu.cn
> Created Time: 2016年05月30日 星期一 20时44分34秒
************************************************************************/

#include<iostream>
using namespace std;

class Solution
{
    public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
    {
        vector<int> vResult;
        if(0 == nums1.size() || 0 == nums2.size()) return vector<int>();
        for(int i = 0; i = nums1.size(); i++)
        {
            for(int j = 0; j = nums2.size(); j++)
            {
                if(nums1[i] == nums2[j])
                {
                    vResult.push_back(nums2[j]);
                    nums2.erase(nums2.begin() + j);
                    break;
                }
            }
        }

        return vResult;
    }
};
