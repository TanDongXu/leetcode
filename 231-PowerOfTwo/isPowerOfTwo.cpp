/*************************************************************************
	> File Name: isPowerOfTwo.cpp
	> Author: TDX 
	> Mail: sa614149@mail.ustc.edu.cn
	> Created Time: 2016年06月01日 星期三 20时29分51秒
 ************************************************************************/

#include<iostream>
using namespace std;


class Solution
{
    public:
    if(0 >= n) return false;
    if(1 == n) return true;

    while(0 == n % 2)
    {
        n /= 2;
    }

    if(1 == n) return true;
    else return false;
};
