#include <iostream>
using namespace std;
int square(int x)
{
	int value =0;
	if(x<0)
        x=-x;
	for(int i=0;i<x;i++){
	value += x;
	}
	return value;
}
int main()
{
	int x;
	cin >> x;
	cout << square(x) << endl;
	return 0;
}
