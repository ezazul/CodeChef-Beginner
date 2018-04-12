#include <iostream>
using namespace std;
int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int testCase;
      cin>>testCase;
      while(testCase-->0){
        int num;
        cin>>num;
        if(num<10){
            cout<<"What an obedient servant you are!"<<endl;
        }
        else{
            cout<<-1<<endl;
        }
      }
    return 0;
}
