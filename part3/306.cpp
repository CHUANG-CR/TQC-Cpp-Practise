#include <iostream>
using namespace std;

int compute(int n){
    int final = 1;
    while (n != 0){
        final *= n;
        n -= 1;
    }
    return final;
}

int main(){
	int n;

	cin >> n;
    cout << compute(n) << endl;

} 