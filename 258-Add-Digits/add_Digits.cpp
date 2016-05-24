/*************************************************************************
> File Name: add_Digits.cpp
> Author: TDX 
> Mail: sa614149@mail.ustc.edu.cn
> Created Time: 2016年05月24日 星期二 22时10分48秒
************************************************************************/

#include<iostream>
using namespace std;

class Solution
{
    public:
    int addDigits(int num)
    {
        int nSum = 0;
        if(num < 10) return num;

        while(num)
        {
            //加上每一位
            nSum += num % 10;
            num /= 10;
            //该数每位已经相加完毕,如果和比10还大,则继续循环
            if(0 == nSum && nSum >= 10)
            {
                num = nSum;
                nSum = 0;
            }
        }

        return nSum;
    }

};
