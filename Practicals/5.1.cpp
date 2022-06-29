#include <bits/stdc++.h>
using namespace std;


int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		char ar[n];
		char ch;
		int freq[26]={0};
		for (int i = 0; i < n; ++i)
		{
			cin >> ar[i];
			int asci=ar[i]-'a';
			++freq[asci];
		}
		char ans;
		int mx=1;
		for(int i=0; i<26; ++i)
			mx=max(freq[i],mx);
		for(int i=0;i <26 && mx!=1; ++i)
			if(freq[i]==mx) 
				{cout <<  ((char)(i+'a')) << "-" << freq[i] << "\n";
			}
		if(mx==1)
			cout << "No Duplicates Present" << "\n";




		


	}
	
}


