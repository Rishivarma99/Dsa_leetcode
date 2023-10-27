
// QUE : ROTATE STRING 
// ->GIVEN 2 STRINGS AND CHACK WHETHER S1 CAN BE ROTATED TO MAKE S2 

// EX-1- s="abcde" goal="bcdea"  ->true 

// APP 1 - (EFFICIANT SOL) using sring find operation 
// -> find operation seaches for a substring in given string 
// ->and fint operation returns the starting index of the substring found 
// ->if string not found then it returns a constant string::npos

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool rotateString(string s, string goal) {
        // APP 1 : USING QUES O(N*N)
            int n =s.length();
            queue <char> q1 ; 
            queue <char> q2 ;

            for(int i=0;i<s.length();i++){
                  q1.push(s[i]);
            } 

            for(int i =0 ;i<s.length();i++){
                q2.push(goal[i]);
            }

            int k = goal.size();
            while(k--){
                // front and pop belongs to first element 
                char ch=q2.front();
                q2.pop();
            //   push in queue is to push back 
                q2.push(ch);
                if(q1==q2){
                    return true;
                }
            }
            return false;

        // APP 2 : EFFICIENT USING STRING FIND OPERATION 

        // if(s.length()!=goal.length()){
        //     return false;
        // }

        // string temp = s + s ;

        // if(temp.find(goal)!=string::npos){
        //     return true;
        // }
        // return false;
    }
};






