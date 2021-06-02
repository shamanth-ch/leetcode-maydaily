#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tests;
    cin>>tests;
    while(tests--)
    {
        int n;
        cin>>n;
        if(n==2)
        {
            cout<<1<<" "<<1<<endl;
        }
       else if(n%2==0)
        {
            cout<<n-2<<" "<<2<<"\n";

        }
        else
        {
            cout<<n-1<<" "<<1<<"\n";
        }
    }
}