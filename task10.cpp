#include <iostream>
#include <cmath>
using namespace std;
bool is_prime(int x)
{
    if(x==1){
        return false;
    }
    for(int i=2; i<=sqrt(x); i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}

int main()
{
    int x;
    cin >> x;
    if(is_prime(x)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
