 // QUE: VALID ANAGRAM -> two strings given check whether a second string can be rearanged(using within that chars ) to make it as first string 

// EX-1 : s="anagram" , t = "nagaram" -> true 

// APP 1 : (BY ME)(USING MAP)(find operation) 
// 1. i mapped all elements of s1 with their no of occurences 
// 2.then i checked it with s2 so that no of char in s1 is same in s2  

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
         int n= s.size();
         int m= t.size();
         if(m!=n){
             return false;
         }
        
        // ******************************
        //  APP 1 : USING MAP 
        map<char,int> mp;

        for(int i=0;i<n;i++ ){
            mp[s[i]]++;
        }

        for(int j=0;j<m;j++){
            if(mp.find(t[j])!=mp.end()){
                if(mp[t[j]]<1){
                    return false;
                }
                mp[t[j]]--;
            }
            else{
                return false;
            }

        }
        return true;
        // *********************************
    }
};