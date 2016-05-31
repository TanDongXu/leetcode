/*************************************************************************
	> File Name: hammingWeight.cpp
	> Author: TDX 
	> Mail: sa614149@mail.ustc.edu.cn
	> Created Time: 2016年05月31日 星期二 20时32分16秒
 ************************************************************************/

#include<iostream>
using namespace std;


class Solution
{
    //求1的个数
    public:
    int hammingWeight(uint32_t n)
    {
        int nCounter = 0;

        while(0 != n)
        {
            if(n & 0x1)
            {
                nCounter ++;
            }
            n = n >> 1;
        }

        return nCounter;
    }
};
