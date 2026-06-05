#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2;
    int n;
    
    // 讀取包含空白的字串
    getline(cin, str1);
    getline(cin, str2);
    cin >> n;
    
    // 判斷 n 是否超過字串長度
    if (n > str1.length() || n > str2.length()) {
        cout << "error" << endl;
    } else {
        // 擷取前 n 個字元
        string sub1 = str1.substr(0, n);
        string sub2 = str2.substr(0, n);
        
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
