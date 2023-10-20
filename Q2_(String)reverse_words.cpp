// Reverse words of string 
// Ex-1- hello world -> world hello 

// APP-1-(Using 2 strings -word and ans)->(String- word.push_back(),word.clear(),word.length())
//     1. In string ' ' space is denoted like this
//     2.started from last word last letter and added it to the word until a space is found and 
//       when space is found that shows the end of the particular word in the given string then 
//     3.Now add this word from last letter to first into ans string ans also 
//     4.add ' ' to ans and clear the word for new word in given string 

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        string ans;
        string word;

        for(int i=s.length()-1;i>=0;i--){
            if(s[i]!= ' '){
                word.push_back(s[i]);

                if((i>0 && s[i-1]==' ') || (i==0)){
                    for(int j= word.length()-1 ; j>=0 ;j--){
                        ans.push_back(word[j]);
                    }
                    ans.push_back(' ');
                    word="";
                }
            }
        }
        // to clear the last ' ' added extra 
        ans.pop_back();
        return ans;
    }
};