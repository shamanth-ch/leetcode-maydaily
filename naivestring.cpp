// C++ program for Naive Pattern
// Searching algorithm
#include <bits/stdc++.h>
using namespace std;

int search(string pat, string txt)
{
	int M = pat.length();
	int N = txt.length();

	/* A loop to slide pat[] one by one */
	for (int i = 0; i <= N - M; i++) {
		int j;

	
		for (j = 0; j < M; j++)
			if (txt[i + j] != pat[j])
				break;

		if (j == M) 
			{return i;}
	}
    return -1;
}

int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        int l,s;
        cin>>l>>s;
        string pat="",txt;
        cin>>txt;
        for(int i=0;i<s;i++)
        {
pat+="*";
        }
	if(search(pat, txt)>=0)
    {
      cout<<"YES"<<"\n";
    }
    else
    {
        cout<<"NO"<<"\n";
    }
    }
}

