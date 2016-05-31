/*************************************************************************
	> File Name: isUgly.cpp
	> Author: TDX 
	> Mail: sa614149@mail.ustc.edu.cn
	> Created Time: 2016年05月31日 星期二 22时39分51秒
 ************************************************************************/

#include<iostream>
using namespace std;

//这一道题要弄清楚什么是丑数:丑数就是可以表示为有限个2,3,5的乘积,所有试着用
//2,3,5不断整除n,当n不能再被2,3,5整除时候,判断n是否等于1,等于1就是丑数,否则不是

class Solution
{
    public:
    bool isUgly(int num)
    {
        if(0 == num) return false;

        while(0 == n % 2) n /= 2;
        while(0 == n % 3) n /= 3;
        while(0 == n % 5) n /= 5;

        if(1 == n) return true;
        else return false;
    }
};
