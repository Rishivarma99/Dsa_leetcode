// QUE: 1614 MAXIMUM NESTING DEPTH OF THE PARENTHESIS 

// given a string that contains ((())) and need to find the depth 
// * depth of empty string is 0 

// EX:1 (1+(2*3)+((8)/4))+1 -> DEPTH IS 3 FOR 8 IS INSIDE 3 ()

// APP 1 : USING STACK AND FOR LOOP 
// 1.INTIATE A STACK AND TRAVERSE EACH CHAR OF STRING USING FOR LOOP 
// 2.IF '(' FOUND THEN ADD IT TO STACK
// 3.IF ')' FOUND THEN CHECK THE SIZE OF STACK IF IT IS MORE THAN 
//   PRESENT HIGHEST VALUES OF DEPTH UPDATE DEPTH AND POP '('
// 4. IF OTHER CHAR THAN ABOVE CONTINUE    
// 5.RETURN DEPTH 
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDepth(string s) {
        
        int depth=0;
       stack <int> s1;
        
        for(int i=0;i<s.length();i++){
              
             if(s[i]=='('){

                s1.push(i);
              

             }
             else if (s[i]==')'){
                if (depth<s1.size()){
                    depth=s1.size();
                }   
                s1.pop();
               
             }
        }
        return depth;
    }
};