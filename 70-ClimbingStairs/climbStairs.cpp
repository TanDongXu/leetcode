/*************************************************************************
	> File Name: climbStairs.cpp
	> Author: TDX 
	> Mail: sa614149@mail.ustc.edu.cn
	> Created Time: 2016年06月01日 星期三 21时29分24秒
 ************************************************************************/

#include<iostream>
using namespace std;

//这一道题不能用递归,其实这一道题是斐波那契数列
//先算出f(1)和f(2)然后再很据f(1),f(n)算出f(3)
class Solution
{
    public:
    int climbStairs(int n)
    {
        int result[2] = {1,2};
        if(3 > n)
        {
            return result[n - 1];
        }

        int fibNMinusOne = 1;
        int fibNMinusTwo = 2;
        int fibN = 0;

        for(unsigned int i = 3; i <= n; i++)
        {
            fibN = fibNMinusOne + fibNMinusTwo;
            fibNMinusOne = fibNMinusTwo;
            fibNMinusTwo = fibN;
        }

        return fibN;
    }
};
