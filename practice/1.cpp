#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
   unordered_map<int,int>m;
   for(int i=0;i<n;i++)
   {
       int x;
       cin>>x;
       m.insert(pair<int,int>(x,i));


   }
    for (auto itr =m.begin(); itr != m.end(); itr++)
    {
       
        cout << itr->first << "  " << itr->second << endl;
     }

}