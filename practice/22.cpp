#include<bits/stdc++.h>
using namespace std;
int fact(int fac)
{
    if(fac==0)
    {return 1;}
    else
    return fac*fact(fac-1);
}
int main()
{
   int a,b;
   cin>>a>>b;
   cout<<fact(min(a,b))<<endl;
}