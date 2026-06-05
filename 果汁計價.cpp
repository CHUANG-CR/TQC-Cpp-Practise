#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    // 讀取果汁數量
    if (cin >> n) {
        // 單價為 23.34
        double total = n * 23.34;
        
        // 設定輸出至小數點後第二位
        cout << fixed << setprecision(2) << total << endl;
    }
    return 0;
}
