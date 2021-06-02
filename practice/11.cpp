#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s1,s2;
    cin>>n;
    cin>>s1;
    vector<int>status(s1);
     vector<int>final(n+1);
     for(int i=1;i<=s1;i++)
    {
        cin>>status[i];
        final[status[i]]=1;
    }
    cin>>s2;
    vector<int>status1(s2);
    for(int i=1;i<=s2;i++)
    {
        cin>>status1[i];
        final[status1[i]]=1;
    }
   int count=1;
    for(int i=1;i<n+1;i++)
    {
       
       if(final[i]==0)
       {count=0;}
    }
    if(count)
    {
        cout<<"I become the guy."<<"\n";
    }
    else{
        cout<<"Oh, my keyboard!"<<"\n";
    }
   
    
}