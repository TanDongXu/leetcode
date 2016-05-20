/*************************************************************************
> File Name: ReverseString.cpp
> Author: TDX 
> Mail: sa614149@mail.ustc.edu.cn
> Created Time: 2016年05月20日 星期五 15时32分52秒
************************************************************************/

#include<iostream>
#include<string>
using namespace std;

/*字符串反转
 *
 * 反向遍历字符串把他存在一个临时变量中
 * 再输出临时字符串
 */
class Solution
{
    public:
    string reverseString(string s)
    {
        string szTemp;
        for(int i = s.length() -1; i >= 0; i--)
        {
            szTemp += s[i];
        }

        return szTemp;
    }
}
