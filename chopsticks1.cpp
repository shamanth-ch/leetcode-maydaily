#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,f,pair=0;
    cin>>n>>d;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>f;
        v.push_back(f);
        
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;)
    {
        if(v[i+1]-v[i]<=d)
        {
            pair++;
            i=i+2;
        }
        else
        {
            /* code */
            i++;
        }
        
    }
    cout<<pair<<"\n";
}