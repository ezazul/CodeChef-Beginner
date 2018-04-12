#include <iostream>
#include<cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int testCase;
	cin>>testCase;
	while(testCase-->0){
		int num;
		cin>>num;
		cout<<int(sqrt(num))<<endl;
	}
	return 0;
}
