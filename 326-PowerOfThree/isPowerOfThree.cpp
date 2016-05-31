/*************************************************************************
	> File Name: isPowerOfThree.cpp
	> Author: TDX 
	> Mail: sa614149@mail.ustc.edu.cn
	> Created Time: 2016年05月31日 星期二 22时18分11秒
 ************************************************************************/

#include<iostream>
using namespace std;
//求该数是不是3的幂,在这用递归.如果不用递归可以直接调用log函数
class solution
{
    public:
    bool isPowerOfThree(int n)
    {
        if(0 >= n) return false;
        if(1 == n) return true;
        if(0 == n % 3 )
        {
            return isPowerOfThree(n / 3);
        }else
        return false;
    }
};
