#include <iostream>
#include <string>

using namespace std;

int main() {
    string numStr;
    if (cin >> numStr) {
        long long total = 1;
        
        // 走訪字串中的每個字元
        for (int i = 0; i < numStr.length(); i++) {
            // 輸出當前數字
            cout << numStr[i];
            
            // 如果不是最後一個數字，印出乘號 '*'
            if (i != numStr.length() - 1) {
                cout << "*";
            }
            
            // 將字元轉為整數並相乘
            total *= (numStr[i] - '0');
        }
        
        // 輸出等號與最終結果
        cout << "=" << total << endl;
    }
    return 0;
}
