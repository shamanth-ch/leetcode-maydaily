#include<bits/stdc++.h>
using namespace std;
void createsubset(vector<int>& vec)
{
    int size=vec.size();
    int subsets=pow(2,size);
    for(int sub=1;sub<subsets;sub++)
    {
        
        for(int j=0,s=sub;j<vec.size();j++,   s>>1)
       {
           
           if(s&1)
             cout<<vec[j]<<" ";

       }
       cout<<"\n";
      
    
    
    }


}
int main()
{
    vector<int>vec={1,2,3};
    createsubset(vec);

}