#include<bits/stdc++.h>
using namespace std;
int main()
{
int k,w,n,sum=0;
cin>>k>>n>>w;
int i=1;
while(i<=w)
{
    sum+=i*k;
    i++;
}
if(n>=sum)
{
    cout<<0<<"\n";
}
else{
cout<<sum-n<<"\n";
}
}