#include <iostream>
using namespace std;
int main()
{
	int p;
	cin >> p;
	if(p==2 || p==3 || p==5 || p==7){
		cout << "prime" << endl;
	}
	else{
		cout << "not prime" << endl;
	}
	return 0;
}
