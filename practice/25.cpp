#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int num;
    cin>>num;
    if(num%2==0)
    {
        int x=num/2;
        cout<<x<<endl;
        while(x--)
        {
            cout<<2<<" ";
        }
        cout<<"\n";

    }
    else
    {
        num=num-3;
        int x=num/2;
        cout<<x+1<<endl;
        cout<<3<<" ";
        while(x--)
        {
            cout<<2<<" ";
        }
        cout<<"\n";
    }

}