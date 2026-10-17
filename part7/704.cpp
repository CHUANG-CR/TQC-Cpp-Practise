#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, input, point = 0, mark; //point的作用在於擴充array的範圍
    if (!(cin >> n) || n <= 0) {
        cout << "error" << endl;
        return 0;
    }
    vector<int> num(n, 0), appear(n + 1, 0);

    for(int i = 0; i < n; i++){
        cin >> input;
        mark = 0;
        for(int j = 0; j < point; j++){
            if(num[j] == input){
                appear[j] += 1;
                mark = 1;
                break;
            }
        }
        if(mark == 0){
            num[point] = input;
            appear[point]++;
            point++;
        }
    }
    for(int i = 0; i < point; i++){
        if(appear[i] > n/2){
            cout << num[i] << endl;
            return 0;
        }
    }
    cout << "error" << endl;
    return 0;
}