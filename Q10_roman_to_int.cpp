// QUE : 13. ROMAN TO INTEGERS 
// EXPLAIN: WE NEED TO CONVERT A GIVEN ROMAN NUM INTO NUMERICAL VALUE
//  IMP: A ROMAN NUM VALUE IS SUM OF ITS EACH CHAR 

//  EX : XII -> X=10 I=1 + I=1 -> 10+2=12
//  EX: IX -> 5-1 = 4 ->KNOWN AS SUBSTRACTION NOTATION 
//       HERE IF VAL(i) < VAL(i+1) THEN SUBSTARCTION OCCURS 

// L = 50 ,C = 100 , D= 500 , M=1000

// EX : 1 - MCMXCIV -> 1994

// APP 1 : USING FOR LOOP -> TC: O(n) SC: O(1)
// 1.TRAVERSE EACH CHAR IN GIVEN ROMAN NUM USING FOR LOOP
// 2.CHECK IF VAL(i) > VAL(i+1) THAN JUST ADD THE VALUE OF S[i] TO ANS 
// 3.      ELSE WE NEED TO SUBSTRACT THE TWO VALUES AND THEN ADD IT TO ANS AND 
//         WE NEED TO SKIP THE i+1 CHAR AS IT IS ALREADY CALCULATED IN SUBSTRACTION    
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
     
     int value(char ch){
         if(ch=='I'){
             return 1;
         }
         else if (ch=='V'){
             return 5;
         }
         else if (ch=='X'){
             return 10;
         }
         else if (ch=='L'){
             return 50 ;
         }
         else if (ch=='C'){
             return 100 ;
         }
         else if (ch=='D'){
             return 500 ;
         }
         else if (ch=='M'){
             return 1000 ;
         }
         return 0;
         

     }

    int romanToInt(string s) {
      int ans=0;
     for(int i=0;i<s.length();i++){
         char ch= s[i];
        //  int val = value(ch);

         if(value(s[i])>=value(s[i+1])){
             ans+=value(s[i]);
         }
         else{
             ans+=value(s[i+1])-value(s[i]);
             i++;
         }
     }
     return ans;



       

         
    }
};