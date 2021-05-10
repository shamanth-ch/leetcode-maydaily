#include<bits/stdc++.h>
using namespace std;
int checkpalin(double data)
{
    int num=data;
    string str,str1;
    if(data-num>0)
    {
        str=to_string(data);
        str1=str;
     
    }
    else{
    str=to_string(num);
    str1=str;
    }
   
    reverse(str1.begin(),str1.end());
        int i=0;
        while(str[i]!='\0')
        {
            if(str[i]!=str1[i])
                return 0;

          i++;
        }
        return 1;
    
}
int main()
{
string left,right;
    cin>>left>>right;
   long long  int left_lim=stoll(left);
    cout<<left_lim<<endl;
    int right_lim=stoi(right);
    string str,str1;
    int count=0;
    for(int i=left_lim;i<=right_lim;i++)
    {

        
      if( checkpalin(i)&&checkpalin(sqrt(i)))
      {
          count++;
      } 

     
         

     }
    
    
    cout<<count<<"\n";
    




}