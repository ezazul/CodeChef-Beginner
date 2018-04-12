#include <iostream>
#include<algorithm>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	int testCase;
	cin>>testCase;
	while(testCase-->0){
		int num1, num2;
		cin>>num1>>num2;
		cout<<max(num1, num2)<<" "<<num1+num2<<endl;
	}
	return 0;
}
