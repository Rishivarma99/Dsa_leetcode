// QUE - ISOMORPHIC STRINGS -> S AND T STRINGS GIVEN 
// ->CHECK WHETHER S CAN BE REPLACED WITH T 

// Ex - 1 - foo and bar -> FALSE as here o need to mapped with a and r which is not possiible 

// APP 1 - (NAIVE ) GFG TC : O(N) SC : TAKING 2 ARRAYS EXTRA SPACE 
    // 1.Need to traverse both strings with one loop and 
    // 2. every time we pick a char in s we need to check if it is not already
    //  replaced/mapped with any other char from t
    // 3.if not also check the char in t is not used already 
    // 4.both satisfy then map s char to t char and mark true as we used a char in t 

    // 5.now if char in s[i] is alredy mapped with any other string and now it should 
    // be replaced with another string then it is false 

    // 6.if this all condition pass then it is true isomorphic 
#include <bits/stdc++.h>
using namespace std;

#define MAX_CHARS 256

class Solution {

public:
    bool isIsomorphic(string s, string t) {

      int m = s.length();
      int n = t.length();   
  
  if(m!=n){
      return false;
  }
     bool marked[MAX_CHARS] = {false};

     int map[MAX_CHARS] ;
     memset(map, -1, sizeof(map));
    
    for(int i=0; i < m ;i++){

        if(map[s[i]]==-1){
          
          
            if(marked[t[i]]==true){
              return false; 
            }

            marked[t[i]]=true;

            map[s[i]]=t[i];
        }
        else if (map[s[i]]!=t[i]){
              return false;
        }
    }
    return true;


    }
};