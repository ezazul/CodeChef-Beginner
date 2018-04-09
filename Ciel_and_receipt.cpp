#include <iostream>
#include<cmath>
using namespace std;
int main() {
	//cin and cout are slower than scanf and printf, altough you can use these in c++
	//however if you set these cin and cout will be fast
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t-->0){
		int n, index, sum, count=1;
		cin>>n;
		index = log(n)/log(2);
		if(index >= 11){
			index = 11;
		}
		sum = pow(2,index);
		if(sum != n){
			while(sum != n){
				while(sum != n){
					int a = sum+pow(2,index); 
					if(a > n){
						index--;
						break;
					}
					else if(a == n){
						count++;
						sum = a;
					}
					else{
						count++;
						sum = a;
					}
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
} 
