#include <iostream>

using namespace std;

int main(){
	int a, b, ans;
	char c;

    cin >> a >> b >> c;
    if(c == '+'){
        ans = a + b;
    }
    else if(c == '-'){
        ans = a - b;
    }
    else if(c == '*'){
        ans = a * b;
    }
    else{
        cout << "error" << endl;
        return 0;
    }
    cout << ans << endl;
    return 0;

    // 備註：若題目要求輸出完整算式格式 (例如 5+3=8)：
    // cout << a << c << b << "=" << ans << endl;
}