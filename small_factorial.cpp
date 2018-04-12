#include <iostream>
using namespace std;
unsigned long int fact(long long int n){
    if(n==1 || n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testCase;
    cin>>testCase;
    while(testCase-->0){
            int num;
            cin>>num;
            cout<<fact(num)<<endl;
    }
    return 0;
}
