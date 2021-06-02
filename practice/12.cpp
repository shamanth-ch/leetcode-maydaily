#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    float sum=0;
    cin>>t;
    float f=(float)t;
    while(t--)
    {
        float n;
        cin>>n;
        sum+=n/100;


    }
    cout<<'f'-'a'<<"\n";
    cout<<100*(sum/f)<<"\n";
}