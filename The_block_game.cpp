#include <iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testCase;
    cin>>testCase;
    while(testCase-->0){
        string s;
        cin>>s;
        ll left, right;
        if(s.size()%2 == 0){
                left = s.size()/2-1;
                right = left+1;
        }
        else{
            left = s.size()/2-1;
            right = left + 2;
        }

        for(;left>=0; left--, right++){
            if(s[left] != s[right]){
                cout<<"losses\n";
                goto end;
            }
        }

        cout<<"wins\n";
        end:;
    }
    return 0;
}
