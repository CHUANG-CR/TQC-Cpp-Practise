#include <iostream>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;

int main(){
    char num[35];
    int sum = 0;

    cin >> num;
    for(int i = 0; i < (int)strlen(num); i++){
        if(num[i] == '1'){
            sum += pow(2, strlen(num) - 1 -i);
        }
    }
    cout << sum << endl;
    return 0;
}