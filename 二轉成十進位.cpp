#include <iostream>
#include <string>

using namespace std;

int main() {
	cout << "<-----二進制轉十進制小工具----->" << endl;
	cout << "請輸入二進位碼:" << endl;
    string binStr;
    if (cin >> binStr) {
        int decValue = 0;
        
        // 利用迴圈手動將二進位轉十進位
        for (int i = 0; i < binStr.length(); i++) {
            // 每次向左移一位 (乘2)，再加上當前位數的值 (0或1)
            decValue = decValue * 2 + (binStr[i] - '0');
        }
        
        cout << decValue << endl;
        
        /* // 也可以使用 C++ 內建函式 stoi 直接轉換 (更為簡潔)：
        // int decValue = stoi(binStr, nullptr, 2);
        // cout << decValue << endl;
        */
    }
    return 0;
}
