#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "=== 字串前綴比較工具 ===" << endl;
    
    cout << "請輸入第一個字串：" << endl;
    string str1;
    getline(cin, str1);
    
    cout << "請輸入第二個字串：" << endl;
    string str2;
    getline(cin, str2);
    
    cout << "請輸入要比較前幾個字元：" << endl;
    int n;
    cin >> n;
    
    // 判斷 n 是否超過字串長度
    if (n > str1.length() || n > str2.length()) {
        cout << "錯誤：輸入的字元數超過字串長度！" << endl;
    } else {
        // 擷取前 n 個字元
        string sub1 = str1.substr(0, n);
        string sub2 = str2.substr(0, n);
        
        cout << "\n--- 比較結果 ---" << endl;
        // 比較並輸出結果
        if (sub1 > sub2) {
            cout << str1 << " > " << str2 << endl;
        } else if (sub1 < sub2) {
            cout << str1 << " < " << str2 << endl;
        } else {
            cout << str1 << " = " << str2 << endl;
        }
    }
    
    return 0;
}