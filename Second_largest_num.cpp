#include <iostream>
#include<algorithm>
#include<vector>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	int testCase;
	cin>>testCase;
	while(testCase-- > 0){
		vector<int> v;
		int a;
		for(int i=0; i<3; i++){
			cin>>a;
			v.push_back(a);
		}
		
		sort(v.begin(), v.end());
		
		cout<<v[1]<<endl;
	}
	return 0;
}
