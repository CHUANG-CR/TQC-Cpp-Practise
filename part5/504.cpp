#include <iostream>

using namespace std;

int main(){
    int n,b=0,a;
    cin >> n;
    a = n;

    while(n != 0){
        b = b*10 + n%10;
        n /= 10;
    }

    if(a == b){
        cout << "yes" << endl;
    }
    else{
        cout << "no" << endl;
    }
}