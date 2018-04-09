#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k, count=0;
	cin>>n>>k;
	while(n-->0)
	{
		int a;
		cin>>a;
		if(a%k==0)
		{
			count++;
		}
	}
	
	cout<<count<<endl;
	return 0;
}
