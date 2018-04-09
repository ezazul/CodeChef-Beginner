#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float x,y;
	cin>>x>>y;
	if(int(x)%5== 0 && x+0.50<=y)
	{
			printf("%.2f", y-x-0.50);
	}
	else
	{
		printf("%.2f", y);
	}
	return 0;
}
