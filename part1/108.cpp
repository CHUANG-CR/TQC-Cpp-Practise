#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int n;

    cin >> n;
    cout << n << endl;
    cout << setprecision(2) << fixed << n/2.0 << endl;
    cout << setprecision(4) << fixed << (n/2.0)*(n/2.0)*3.1415 << endl;
}