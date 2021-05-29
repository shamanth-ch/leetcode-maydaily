#include<bits/stdc++.h>
using namespace std;
void evalprn(vector<string>& v)
{
stack<int>status;
for(int i=0;i<v.size();i++)
{
    
    if(v[i]!="+" && v[i]!="-" && v[i]!="*" && v[i]!="/")
    { 
        //cout<<v[i]<<" ";
         int m=stoi(v[i]);
        status.push(m);}
    else{
        int a=status.top();status.pop();
        int b=status.top();status.pop();
        if(v[i]=="+")
          { int c= a+b;status.push(c);}
        else if(v[i]=="-")
        { int c=b-a;status.push(c);}
        else if(v[i]=="*")
        {int c=a*b;status.push(c);}
        else if(v[i]=="/")
        {int c =b/a;status.push(c);}

    }
   // cout<<status.top()<<" ";
}

cout<<status.top()<<"\n";

}




int main()
{
    vector<string>v={"4","13","5","/","+"};
 //   int m=stoi(v[1]);
    evalprn(v);
}