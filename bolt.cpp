#include<bits/stdc++.h>
using namespace std;
int main(void)
{
int t;
cin>>t;
while(t--)
{
    float k1,k2,k3,speed;
    cin>>k1>>k2>>k3>>speed;
    float with_loss=k1*k2*k3*speed;
    cout<<round(100/with_loss);
    if(100/with_loss<9.58)
    {cout<<"YES"<<"\n";}
    else
    {cout<<"NO"<<"\n";}


}






}
