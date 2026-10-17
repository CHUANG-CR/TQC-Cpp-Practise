#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n[26] = {0};
    char input[55];

    cin >> input;

    for (int i = 0; i < (int)strlen(input); i++){
        n[input[i] - 'a']++;
    }

    int max = 0, position = 0;
    for (int i = 0; i < 26; i++){
        if (n[i] > max){
            max = n[i];
            position = i;
        }
    }

    cout << static_cast<char>(position + 'a') << endl;
    cout << max << endl;
    return 0;
}