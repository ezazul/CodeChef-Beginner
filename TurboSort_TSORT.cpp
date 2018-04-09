#include <vector>
#include <iostream>
#include <algorithm>
 using namespace std;
template<class Iter>
void merge_sort(Iter first, Iter last){
    if (last - first > 1) {
        Iter middle = first + (last - first) / 2;
        merge_sort(first, middle); // [first, middle)
        merge_sort(middle, last);  // [middle, last)
        std::inplace_merge(first, middle, last);
    }
}
 
int main(){
	int a;
    std::vector<int> v;
    for(int i=0; i<5; i++)
    {
    	cin>>a;
    	v.push_back(a);
	}
    merge_sort(v.begin(), v.end());
    
    for(int i=0; i<5; i++)
    {
    	cout<<v[i]<<" ";
	}
    std::cout << '\n';
    return 0;
}
