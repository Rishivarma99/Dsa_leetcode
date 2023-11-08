//Given a string that contains multiple parenthesis now we should divide the string into any number of valid parenthesis 
// and remove each of their outer parenthesis and print the result 

// Ex-1:(()())(())
// SOL:  -> divide into valid paren.. -> (()()) + (()) -> remove their outer pare... -> ()()+() ->combine -> ()()() 
 

// APP-1- tc: o(n) sc : o(n) using stack ds 
// (USING STACK) (STACK-> st.push(),st.pop(),st.top(),st.size()) 
// (String-> declare,s.push_back(ch),s.length()) (Char -> to store each string )

// APP2 : TC : O(N)  SC: O(N) TO STORE ANS 
//  USING COUNT METHOD 
// 1.WE COUNT NO OF OPENING AND CLOSING PARENTHESIS USING FOR LOOP 
// 2.IF WHENEVER OP AND CL PAREN ARE EQUAL THEN WE EXTRACT THE IN-BETWEEN OUTER PARENTHESIS
// 3. USING SUBSTR FUNCTION START+1, I-(START+1)
// 4.RETURN ANS 

#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    string removeOuterParentheses(string s) {

     // APP 1 : 
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

     // APP 2: USING SUBSTR FUNCTION 

            int op_paren=0;
            int cl_paren=0;
            //Here start always point to the outer opening parenthesis 
            int start =0;
            string ans="";

            for(int i=0;i<s.length();i++){
                if(s[i]=='(' ){
                    op_paren++;
                }
                else if(s[i]==')'){
                    cl_paren++;
                }

                if(op_paren==cl_paren){
                    ans+=s.substr(start+1,i-(start+1));
                    start=i+1;
                }
            }
            return ans;
     
           }

};

