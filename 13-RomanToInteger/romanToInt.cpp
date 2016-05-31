/*************************************************************************
> File Name: romanToInt.cpp
> Author: TDX 
> Mail: sa614149@mail.ustc.edu.cn
> Created Time: 2016年05月31日 星期二 20时05分33秒
************************************************************************/

#include<iostream>
using namespace std;

class Solution {

    public:

    int romanToInt(string s) {

        if(" " == s) return 0;
        int sum = 0;  
        int start = 0;  
        char char_arr[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};  
        int int_arr[] = {1, 5, 10, 50, 100, 500, 1000};  
        std::map<char, int> roman_map;  
        int map_len = sizeof(char_arr)/sizeof(char);   
        for (int i = 0; i< map_len; ++i)   
        roman_map.insert(std::pair<char, int> (char_arr[i], int_arr[i]));  
        for (int i = 0; i < s.length() - 1; ++i) {  
            if (roman_map[s[i]]>=roman_map[s[i + 1]])  
            sum += roman_map[s[i]];  
            else  
            sum -= roman_map[s[i]];  
        }  
        sum += roman_map[s[s.length()-1]];  
        return sum;  
    }
};
