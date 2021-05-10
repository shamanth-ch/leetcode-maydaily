#include<bits/stdc++.h>
using namespace std;
int checkpalin(string str,string str1)
{
    if(str.size()==1)
    {
        return 1;
    }
    else
    {
        int i=0;
        while(str[i]!='\0')
        {
            if(str[i]!=str1[i])
                return 0;


        }
        return 1;
    }
}
int main()
{
    int data=00;
    string str=to_string(data);
    string str1=str;
    reverse(str1.begin(),str1.end());
    cout<<str1<<" ";
   cout<<checkpalin(str,str1);
}