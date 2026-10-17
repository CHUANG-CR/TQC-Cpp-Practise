#include <iostream>  
#include <vector>

using namespace std;

int main() {  
    int n;
    if (!(cin >> n) || n <= 2) {
        return 0;
    }

    vector<bool> prime(n, true);
    prime[0] = false;
    prime[1] = false;

    for(int i = 2; i < n; i++){
        if(prime[i]){
            for(int j = i * 2; j < n; j += i ){
                prime[j] = false;
            }
        }
    }
    for(int i = 2; i < n; i++){
        if(prime[i]){
            cout << i << ' ';
        }
    }
    cout << endl;
    return 0;
}