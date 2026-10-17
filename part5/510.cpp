#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, m;
    if (!(cin >> n >> m) || n <= 0 || m <= 0) {
        return 0;
    }

    vector<vector<int>> matrix(n + 2, vector<int>(m + 2, 0));

    for(int i = 1; i < n+1; i++){
        for(int j = 1; j < m+1; j++){
            cin >> matrix[i][j];
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <=m; j++){
            if(matrix[i][j] == 0){
                cout << ' ';
            }
            else if(matrix[i][j-1] == 0 || matrix[i-1][j] == 0 || matrix[i+1][j] == 0 || matrix[i][j+1] == 0){
                cout << '*';
            }
            else{
                cout << ' ';
            }   
        }
        cout << endl; 
    }
}