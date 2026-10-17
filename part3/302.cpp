#include <iostream>

using namespace std;

int compute(int);

int main(){
	int score;

    cin >> score;
    cout << compute(score) << endl;
    return 0;
}

int compute(int score){
    if(score < 0 || score > 100){
        return -1;
    }
    else if(score >= 60){
        score += 5;
    }
    else{
        score += 10;
    }
    return score;
}