#include <iostream>
#include <vector>

using namespace std;

int main(){
    int a1, a2, b1, b2;
    if (!(cin >> a1 >> b1)) return 0;
    vector<vector<int>> matrix_a(a1, vector<int>(b1));
    for(int i = 0; i < a1; i++){
        for(int j = 0; j < b1; j++){
            cin >> matrix_a[i][j];
        }
    }
    if (!(cin >> a2 >> b2)) return 0;
    vector<vector<int>> matrix_b(a2, vector<int>(b2));
    for(int i = 0; i < a2; i++){
        for(int j = 0; j < b2; j++){
            cin >> matrix_b[i][j];
        }
    }
    if(a2 != b1){
        cout << "error" << endl;
        return 0;
    }

    vector<vector<int>> matrix_sum(a1, vector<int>(b2, 0));
    for(int i = 0; i < a1; i++){
        for(int j = 0; j < b2; j++){
            int sum = 0;
            for(int k = 0; k < b1; k++){
                sum += matrix_a[i][k] * matrix_b[k][j];
            }
            matrix_sum[i][j] = sum;
        }
    }
    for(int i = 0; i < a1; i++){
        for(int j = 0; j < b2; j++){
            if(j != 0){
                cout << ' ';
            }
            cout << matrix_sum[i][j];
        }
        cout << endl;
    }
    return 0;
}