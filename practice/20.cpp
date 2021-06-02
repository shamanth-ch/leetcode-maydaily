#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tests;
    cin>>tests;
    while(tests--)
   {
       int size;
       cin>>size;
       int arr[size];
       for(int i=0;i<size;i++)
       {
           cin>>arr[i];
       }
       sort(arr,arr+size);
       if(size==1)
       {
           if(arr[0]%2==0)
           {
               cout<<"YES"<<"\n";
           }
           else
           {
               cout<<"NO"<<"\n";
           }
       }
       else if((arr[size-1]-arr[0])%2==0)
       {
           cout<<"YES\n";

       }
       else
       {
           cout<<"NO\n";
       }
   
   
   
   }}
