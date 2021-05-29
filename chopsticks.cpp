#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,d,f,pair=0;
    cin>>n>>d;
     vector<long long int>v;
     int arr[n]={0};


    for(int i=0;i<n;i++)
    {
        cin>>f;
        v.push_back(f);
}
sort(v.begin(),v.end());
for(int i=0;i<v.size();i++)
{
    for(int j=i+1;j<v.size();j++)
    {
       if(abs(v[j]-v[i])<=d && (arr[i]==0 && arr[j]==0))
       {pair++;
       arr[i]=1;
       arr[j]=1;
       }
    }
}
cout<<pair<<"\n";
}