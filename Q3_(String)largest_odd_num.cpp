// 1903.Largest odd number in string -> return the lasgest odd number in a given string 
// https://leetcode.com/problems/largest-odd-number-in-string/description/
// EX: 35427 -> 35427 


// APP-1 : TC: o(n) SC:O(1) ->(USING substr)-> (ch.substr(idx(i)_where_to_start_from, num_of_characters_to_take_starting_from_ith_idx)-
//  give a new string extracted from ch) 
//       1.I will traverse from last word of given string and see if its a odd number 
//       2.if No i will traverse until first word of string 
//       3.if Yes we will return the total string from 0 to i+1(len_to_betaken) using substr funtion   

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    string largestOddNumber(string num) {

       for(int i=num.length()-1;i>=0;i--){
           if((num[i]-'0')% 2 != 0 ){
               return num.substr(0,i+1);
           }
       }
       return "";

    }
};
