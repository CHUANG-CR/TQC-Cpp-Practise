#include <iostream>

using namespace std;

int compute(int array[]){
    int n = 0;
    for (int i = 0; i < 6; i++){
        if (array[i] % 3 == 0){
            n++;
        }
    }
    return n;
}

int main(){
    int array[6];
    for (int i = 0; i < 6; i++){
        cin >> array[i];
    }
    cout << compute(array) << endl;
    return 0;
}