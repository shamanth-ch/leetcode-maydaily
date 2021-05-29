#include<bits/stdc++.h>
using namespace std;
void kmp(string s,string p,vector<int>&pi)
{
    int patlength=p.length();
    int txtlength=s.length();
    int i=0,j=0;
    while(i<txtlength)
    {
        if(s[i]==p[j])
        {i++;j++;}
        if(j==patlength)
        {
            cout<<"YES"<<"\n";
            return;
        }
         else if (i < txtlength && p[j] != s[i]) {
          
            if (j != 0)
                j = pi[j - 1];
            else
                i = i + 1;
        }
    }
    cout<<"NO"<<"\n";
    return;
}
  void prefix(string s,vector<int>&pi)
  {
     for(int i=1;i<s.length();i++)
     {
       
        int j=pi[i-1];
        while(j>0 && s[i]!=s[j] )
        {
             j = pi[j-1];
        }
        if (s[i] == s[j])
            {j++;}
        pi[i]=j;
        
        

     }




  }

  
int main(void)
{
    
    
string s="abcababd";
string p="adaada";
vector<int>pi(p.length());
prefix(p,pi);
//kmp(s,p,pi);
for(int i=0;i<pi.size();i++)
{
 cout<<pi[i]<<" ";
}


}