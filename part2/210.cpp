#include <iostream>

using namespace std;

int main(){
	int a, b, c;
    int copy_a, copy_b;

    cin >> a >> b;
    copy_a = a, copy_b = b;

    while(b != 0){
        c = a%b;
        a = b;
        b = c;
    }
    cout << a << endl;
    cout << (copy_a * copy_b) / a << endl;

}