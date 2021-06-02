/* Bit Manipulation */
#include<iostream>
#include<bitset>
#include<math.h>
using namespace std;
int main()
{
   string str="xywbz";
   string str1="cm";
   int n=0,n1=0;
   cout<<pow(2,23);
   for(char c:str)
   {
       cout<<c-'a'<<" ";
       n|=1<<(c-'a');
       cout<<n<<" ";
   }
    for(char c:str1)
   {
       n1|=1<<(c-'a');
   }
   cout<<n<<" "<<n1<<endl;
  int s= n&n1;
   cout<<s<<" ";
    
    
}
/*

             1000000000110    =cbm
11110000000000000000000010    =xywbz
             1000000000100    =cm
*/