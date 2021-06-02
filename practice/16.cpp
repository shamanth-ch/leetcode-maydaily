#include<bits/stdc++.h>
using namespace std;
int main()
{
int test;
cin>>test;
while(test--)
{
    int left,right,c=0;
    cin>>left>>right;
    for(int i=left;i<right;i++)
    {
        for(int j=left+1;j<=right;j++)
        {
             if((i*j/__gcd(i,j))>=left &&(i*j/__gcd(i,j))<=right)
             {
                 c=1;
                 cout<<i<<" "<<j<<"\n";
                 break;
             }
        }
        if(c==1)
        {
            break;
        }
    }
    if(c==0)
    {
        cout<<-1<<" "<<-1<<"\n";
    }
}
}