#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    while(n--)
    {
        int x1,x2,x3,y1,y2,y3,a,b,c;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
      a=pow((x2-x1),2)+pow((y2-y1),2);
      b=pow((x2-x3),2)+pow((y2-y3),2);
      c=pow((x3-x1),2)+pow((y3-y1),2);
    if(a>b && a>c)
    { if(a==b+c)
          count++;
    
    }
    else if(b>a && b>c){
      if(b==a+c)
          count++;
    }
    else if(c>a && c>b){

      if(c==a+b)
         count++;
    }

    }

   cout<<count<<"\n";
}