#include <iostream>

using namespace std;

int main(){
	int n;
    cin >> n;
    if(n < 0 || n > 100){
        cout << "error" << endl;
    }
    else if(n > 60){
        cout << n + 10 << endl;
    }
    else{
        cout << n + 5 << endl;
    }
    return 0;
}