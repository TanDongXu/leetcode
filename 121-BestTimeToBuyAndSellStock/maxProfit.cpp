/*************************************************************************
> File Name: maxProfit.cpp
> Author:TDX 
> Mail: SA614149@mail.ustc.edu.cn
> Created Time: 2016年06月30日 星期四 17时07分29秒
************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

class Solution
{
    public:
    int maxProfit(vector<int>& prices)
    {
        int length = prices.size();
        if(0 == length) return 0 ;

        int n_MaxNum = 0;
        int low = prices[0];

        for(int i = 1; i < length; i++)
        {
            //当前面的数比前面的数大时候，就可以不考虑前面那个数了
            //所以一次循环就可以搞定
            if(prices[i] < low)
            {
                low = prices[i];
            }else
            {
                if(n_MaxNum < prices[i] - low)
                {
                    n_MaxNum = prices[i] - low;
                }
            }
        }
        return n_MaxNum;
    };
