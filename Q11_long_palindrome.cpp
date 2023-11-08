// QUE : LONGEST PALINDROME SUBSTRING 
// EX : BABAD -> BAB 

// APP 1 : TC :(O^2),  USING 2 FOR LOOP AND FINDING START AND MAXLENGTH (substr)
// 1.traverse whole string using 2 loop 
// 2.if it is palindrome and length of palindrome is greater 
//   than max len update max lenth 
// 3.at last use substr function to extract substring 
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkpalindrome (string st , int s ,int e){

        while(s<=e){
            if(st[s]!=st[e]){
                return false;
            }
            s++;
            e--;

        }
        return true;
    }
    string getstr(string st , int s ,int e){
        string ans = "";
        for(int i=s ;i<=e ; i++){
            ans+=st[i];
        }
        return ans;
    }
    string longestPalindrome(string s) {
        if(s.length()<=1){
            return s ;
        }
        int maxlen=INT_MIN;
        string ans=""; 
        int start=0;
        int end=0;       
        for(int i=0;i<s.length();i++){
              
              for(int j=i;j<s.length();j++){
                  if(checkpalindrome(s,i,j)){
                      if((j-i+1)>maxlen){
                       maxlen=(j-i+1);
                       start=i;
                       end=j ; 
                       
                      }
                  }
              }
        }
        ans=s.substr(start,maxlen);

        // ans=getstr(s,start,end);
        return ans;

    }
};
