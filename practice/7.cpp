#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,k,sub=0;
        cin>>a>>b>>c>>d>>k;
        int ans=abs(c-a)+abs(d-b);
        if(ans==k)
        {
            cout<<"yes"<<"\n";
        }
        else if(ans>k){
            cout<<"No"<<"\n";

        }
        else if((k-ans)%2==0)
        {
            cout<<"Yes"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    
    
    
    
    }
}