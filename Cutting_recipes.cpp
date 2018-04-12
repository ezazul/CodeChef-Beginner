#include <iostream>
#include<set>
#include<vector>
#include<algorithm>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int testCase;
	cin>>testCase;
	while(testCase-->0){
		int numIngredient, ing, flag = 1;
		//cout<<"Enter the number of ingredient : ";
		cin>>numIngredient;
		vector<int> sample_ingredient_vector;
		multiset<int> ingredientSet;
		vector<int> ingredient_vector;
		//cout<<"Enter the ingredient :"<<endl;
		for(int i=0; i<numIngredient; i++){
			cin>>ing;
			ingredient_vector.push_back(ing);
			ingredientSet.insert(ing);
		}
		//cout<<"The required : "<<endl;
		
		vector<int>::iterator v_itr;
		for( v_itr = ingredient_vector.begin(); v_itr!=ingredient_vector.end(); v_itr++ ){
			if( (*v_itr)%(*ingredientSet.begin()) == 0 ){
				sample_ingredient_vector.push_back( (*v_itr)/(*ingredientSet.begin()) );
			}
			else{
				flag = 0;
				break;
			}
		}
		
		
		if(flag == 0){
			for( v_itr=ingredient_vector.begin(); v_itr!=ingredient_vector.end(); v_itr++ ){
				cout<<(*v_itr)<<" ";
			}	
		}
		else{
			for( v_itr=sample_ingredient_vector.begin(); v_itr!=sample_ingredient_vector.end(); v_itr++ ){
				cout<<(*v_itr)<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
