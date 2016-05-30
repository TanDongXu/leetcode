/*************************************************************************
> File Name: majorityElement.cpp
> Author: TDX 
> Mail: sa614149@mail.ustc.edu.cn
> Created Time: 2016年05月30日 星期一 19时24分52秒
************************************************************************/

#include<iostream>
using namespace std;


//不能使用两个for循环,这样时间复杂度比较高
class Solution
{
    public:
    int majorityElement(vector<int>& nums)
    {
        //使用一个map容器保存数据
        map<int, int> mNum;

        for(int i = 0; i < nums.size(); i++)
        {
            mNum[nums[i]]++;
            if(mNum[nums[i]] > nums.size() / 2)
            {
                return nums[i];
            }
        }

        return 0;
    }
};




//还有一种算法:叫Moore's Voting Algorithm ,是线性复杂度
//

int majorityElememt(vector<int>& nums)
{
    int majority;
    int nCounter = 0;
    for(int i = 0; i < nums.size(); i++)
    {
        if(0 == nCounter)
        {
            majority = nums[i];
            nCounter ++;
        }else
        {
            majority == nums[i] ? nCounter ++ : nCounter--;
            if(nCounter > nums.size() / 2) return majority;
        }
    }

    return majority;
}
