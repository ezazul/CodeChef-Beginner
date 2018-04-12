#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int testCase;
    cin>>testCase;
    while(testCase-- > 0){
        string s;
        cin>>s;

        vector<char> _operators;
        vector<char> _expression;
        for(int i=0; i<s.size(); i++){
            if(  (s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122)  ){
                _expression.push_back(s[i]);
            }
            else{
                if(s[i] == ')'  ){
                    int top = _operators.size()-1;
                    while(_operators[top] != '('){
                            _expression.push_back(_operators[top]);
                            top--;
                            _operators.erase(_operators.end()-1, _operators.end());
                          }

                          _operators.erase(_operators.end()-1, _operators.end());
                }
                else{
                    _operators.push_back(s[i]);
                }
            }

        }

        for(int i=0; i<_expression.size(); i++){
            cout<<_expression[i];
        }
        cout<<endl;
    }
}
