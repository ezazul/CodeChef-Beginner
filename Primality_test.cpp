#include <iostream>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testCase;
    cin>>testCase;
    while(testCase-- > 0){
            ll num, start=2, inc=1;
            cin>>num;

            if(num == 2 || num == 3){
                cout<<"yes\n";
            }
            else{
                    int flag =1;
                if(num%2 != 0){
                    start = 3;
                    inc = 2;
                }
                for(; start<=num/2; start+=inc){
                    if(num%start==0){
                        cout<<"no\n";
                        flag = 0;
                        break;
                    }
                }

                if(flag == 1){
                    cout<<"yes\n";
                }
            }
    }
    return 0;
}
