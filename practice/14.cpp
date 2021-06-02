#include<bits/stdc++.h>
using namespace std;
void func()
{
    int size,c=0;;
    float prod=1;
    cin>>size;
    vector<float>state(size);
    for(int i=0;i<size;i++)
    {
        cin>>state[i];
    }
    for(int i=0;i<size;i++)
    {
    if(sqrt(state[i])-ceil(sqrt(state[i]))!=0)
    {
        c=1;
        break;
    }

    }
    if(c==1)
    {
        cout<<"YES\n";

    }
    else
    {
        cout<<"NO\n";
    }
}
int main()
{
    int tests;
    cin>>tests;
    while(tests--)
    {
        func();
    }
}