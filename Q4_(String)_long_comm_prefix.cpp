// IMP : prefix of string : it is the strating letters or substring that are in common 

// Q.14:LONGEST COMMON PREFIX ->
//   given a vectio of strings and find the common
//   starting substring of letter between them if not found return empty string 

// EX-1 : flower , flow , flight -> "fl" is a common prefix 

// APP-1 : BRUT FORCE 
// 1.TAKING FIRST WORD AN S 
// 2.checking all other words by using 2 loops 

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
           


        //    APP 1 : *******************
             string s=strs[0];
           if(strs.size()<2){
                return s;
           }
           
            string ans ="";
         for(int i=0;i<s.length();i++){
               char ch = s[i];
               bool val=false;
               for(int j=1;j<strs.size();j++){
                 string temp_str=strs[j];
                 char temp_ch=temp_str[i];
                 if(temp_ch==ch){
                    val=true;
                  
                 }
                 else{
                     return ans;
                 }
               }
               if(val){
                   ans+=ch;
               }             
             
         }
         return ans;

        //*****************************  

    }
};