// given a string that contains mutiple paranthesis now we shoud divide the string into any no of valid paranthesis 
// and remove each of their outer paranthsis and prind the result 

// Ex-1:(()())(())
// SOL:  -> divide into valid paren.. -> (()()) + (()) -> remove their outer pare... -> ()()+() ->combine -> ()()() 
 

// APP-1- tc: o(n) sc : o(n) using stack ds 
// (USING STACK) (STACK-> st.push(),st.pop(),st.top(),st.size()) 
// (String-> declare,s.push_back(ch),s.length()) (Char -> to store each string )

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
      stack <char> st;
      string ans="";

      for(int i=0;i<s.length();i++)
      {
           char ch=s[i];

           if(ch =='(')
           {   if(st.size()>0)
               {
               ans.push_back(ch);
               }
               st.push(ch);
            }
                   
           else{
                 st.pop();
                 if(st.size()>0)
                 {
                  ans.push_back(ch);
                 }
             }
              
     }
           return ans;
           }


         
    
};

