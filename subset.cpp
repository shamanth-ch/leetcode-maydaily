#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
  int size=nums.size();
        int subsets=pow(2,size);
        int result=0;
    for(int sub=1;sub<subsets;sub++)
    {
        int running=0;
      for(int j=0,bits=sub;j<nums.size();j++,bits>>=1)
      {
          if(bits & 1){
              
              running^=nums[j];
               
          }
      
      
      }
        result+=running;
    
    }
        return result;
        
    }
};