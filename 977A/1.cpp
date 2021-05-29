#include<bits/stdc++.h>
using namespace std;

void fun()
{
    int n,k;
    cin>>n>>k;
    while(k--)
    {
      if(n%10==0)
      {
          n=n/10;

      }
      else
      {
          n=n-1;
      }



    }
    cout<<n<<"\n";

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