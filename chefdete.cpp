#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,z;
    cin>>n;
   int in[n + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> z;
        in[z]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (in[i] == 0)
            cout << i << " ";
    }
}
