#include <iostream>
#include<string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t-->0){
		int sum = 0;
		string s;
		cin>>s;
		for(int i=0; i<s.size(); i++){
			sum = sum + s[i] - '0'; 
		}
		
		cout<<sum<<endl;
	}
	return 0;
}
