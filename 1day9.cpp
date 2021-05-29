#include<bits/stdc++.h>
using namespace std;
bool compare(string &s1,string &s2)
{
  return s1.size()<s2.size();
}
class Solution {
public:
    int Compare(string s1,string s2)
    {
        cout<<s1<<" "<<s2<<"\n";

    for(int i=0;i<s1.length();i++)
        {
        for(int j=0;j<s2.length();j++)
        {
          //  cout<<s1[i]<<" "<<s2[j]<<"\n";
            if(s1[i]==s2[j])
            { cout<<"-1";
                return 0;}
           
        
        }
        


     }
        
    return 1;
    }
    int maxProduct(vector<string>& words) {
        sort(words.begin(),words.end(),compare);
       int max=0;
        for(int i=0;i<words.size();)
        {
          if(words[i].length()==words[i+1].length())          {
              
              if(max<words[i].length()  && Compare(words[i],words[i+1]))
              {
                  
                  max=words[i].length();
                  cout<<max;
                  i+=2;
                  
              }
              else
              {
i++;}
          }
            else
            {
                i++;
            }
        
        
        }
        return max*max;
    }
};
int main()
{ Solution obj;

    vector<string>status={"a","aa","aaa","aaaa"};
    cout<<obj.
}