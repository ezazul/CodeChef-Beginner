#include<iostream>
#include<map>
using namespace std;
int main()
{
    int r, p1, p2, sum1=0, sum2=0;
    map<int, int> m1;
    cin>>r;
    for(int i=0; i<r; i++){
        cin>>p1>>p2;
        sum1 += p1;
        sum2 += p2;
        int diff = sum1-sum2;
        if(diff > 0)
        {
            m1[diff] = 1;
        }
        else
        {
        	
            diff = -1*diff;
            m1[diff]=2;
        }
    }
    
    
    map<int, int>::iterator p = m1.end();
    p--;
    cout<<p->second<<" "<<p->first<<endl;
    
    return 0;
} 
