/*************************************************************************
> File Name: titleNumber.cpp
> Author: TDX 
> Mail: sa614149@mail.ustc.edu.cn
> Created Time: 2016年05月30日 星期一 15时46分04秒
************************************************************************/

#include<iostream>
using namespace std;


//其实就是十进制转换为26进制,'A'而且是以1开始
class Solution
{
    public:
    int titleToNumber(string s)
    {
        if(" " == s)
        {
            return 0;
        }

        int nResult = 0;
        for(int i = 0; i < s.length(); i++)
        {
            nResult = nResult * 26 + s[i] - 'A' + 1;
        }

        return nResult;
    }
};
