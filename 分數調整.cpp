#include <iostream>

using namespace std;

int main() {
	cout << "<-----分數調整工具----->" << endl;
	cout << "請輸入分數" << endl;
    int score;
    if (cin >> score) {
        // 判斷是否在 0~100 的合理範圍內
        if (score < 0 || score > 100) {
            cout << "error" << endl;
        } else {
            // 依據分數區間進行加分
            if (score > 60) {
                score += 10;
            } else {
                score += 5;
            }
            cout << score << endl;
        }
    }
    return 0;
}
