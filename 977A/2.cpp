#include<bits/stdc++.h>
using namespace std;


void fun()
{
    int n,count=1;
    string s;
    cin>>n;
    cin>>s;
    vector<string>status;
    unordered_map<string,int>hash;
    
    
    for(int i=0;i<s.length()-1;i++)
    {
       string em="";
       em+=s[i];
       em+=s[i+1];
       status.push_back(em);

    }
  for(int i=0;i<status.size();i++)
  {
      hash[status[i]]++;
  }
   int max_count = 0;
   string res = "";
    for (auto i : hash) {
        if (max_count < i.second) {
            res = i.first;
            max_count = i.second;
        }
    }
    cout<<res<<endl;
}

int main(void)
{
int t=1;

while(t--)
{
    fun();
}


return 0;


}