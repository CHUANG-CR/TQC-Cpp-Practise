#include <iostream>

using namespace std;

int compute(int n){
    if (n <= 2){
        return 1;
    }
    else{
        return compute(n-1) + compute(n-2);
    }
}

int main(){
    int n;
    if (!(cin >> n)) return 0;

    for (int i = n; i >= 1; i--){
        cout << "fib(" << i << ")=" << compute(i) << endl; 
    }
    return 0;
}