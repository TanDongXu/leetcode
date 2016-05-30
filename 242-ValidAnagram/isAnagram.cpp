/*************************************************************************
	> File Name: isAnagram.cpp
	> Author: TDX 
	> Mail: sa614149@mail.ustc.edu.cn
	> Created Time: 2016年05月27日 星期五 17时25分09秒
 ************************************************************************/

#include<iostream>
using namespace std;

//判断给定的两个字符串是否为相同字母不同排列的单词
class Solution
{
    public:
    bool isAnagram(string s, string t)
    {
        if(s.length() != t.length())  return;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return (s == t);
    }
};
