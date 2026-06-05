#include <iostream>

using namespace std;

// 宣告並定義 compute 函式
int compute(int score) {
    if (score < 0 || score > 100) {
        return -1;
    } else if (score >= 60) {
        return score + 5;
    } else {
        return score + 10;
    }
}

int main() {
    int score;
    if (cin >> score) {
        // 呼叫 compute 函式並輸出回傳值
        cout << compute(score) << endl;
    }
    return 0;
}
