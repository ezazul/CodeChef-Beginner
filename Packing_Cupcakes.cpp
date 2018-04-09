#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	while(n--){
		int a, s;
		cin>>a;
		s = a/2 + 1;
		if(s%a == 0)
		{
			cout<<a<<endl;
		}
		else{
			cout<<s<<endl;
		}
	}
	return 0;
}
