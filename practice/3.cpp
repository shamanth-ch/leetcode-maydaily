#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,s1;

        cin>>s;
        int strlen=s.length();
        if(strlen>10)
        {
         s1+=s[0]+to_string(strlen-2)+s[s.length()-1];
         cout<<s1<<"\n";
        }
        else
        {
            cout<<s<<"\n";
        }

    }
}