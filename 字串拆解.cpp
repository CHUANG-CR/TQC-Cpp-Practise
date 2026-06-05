#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s;
    if (cin >> s) {
        string upperStr = "";
        string lowerStr = "";
        int upperCount = 0;
        
        // 走訪每個字元判斷大小寫
        for (int i = 0; i < s.length(); i++) {
            if (isupper(s[i])) {
                upperStr += s[i];
                upperCount++;
            } else if (islower(s[i])) {
                lowerStr += s[i];
            }
        }
        
        // 依序輸出大寫字串、小寫字串及大寫字母數量
        cout << upperStr << endl;
        cout << lowerStr << endl;
        cout << upperCount << endl;
    }
    return 0;
}
