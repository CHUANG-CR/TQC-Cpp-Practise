#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	cout <<　"<-----果汁計價小工具----->"<< endl;
	cout << "果汁價錢為23.34元"<<endl;
	cout <<　"請輸入果汁數量" << endl;
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
