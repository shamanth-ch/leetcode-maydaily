#include<bits/stdc++.h>
using namespace std;
void search(string pat, string txt)
{
    int M = pat.length();
    int N = txt.length();
    cout<<pat<<" "<<txt<<" ";
 
    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) {
        cout<<"did i enter"<<"\n";
        int j;
 
        /* For current index i, check for pattern match */
        for (j = 0; j < M; j++)
            if (txt[i + j] != pat[j])
                break;
 
        if (j == M) 
        {cout<<"wait"<<"\n";// if pat[0...M-1] = txt[i, i+1, ...i+M-1]
           cout<<j<<"\n";}
    }
}
int main()
{
int t;
cin>>t;
while(t--)
{

int stel,star;
string s;
cin>>stel>>star;
cin>>s;
string pattern=" ";
for(int i=0;i<star;i++)
{

    pattern.append("*");
}
//cout<<pattern<<" "<<pattern.length()<<"\n";
search(pattern,s);


}
return 0;
}

 











