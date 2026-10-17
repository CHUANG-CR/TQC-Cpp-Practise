#include <iostream>
#include <cstring>

using namespace std;

void compute(char n[]);

int main() {
    char str1[50], str2[50], str_com[100];
    cin >> str1 >> str2;

    if (strlen(str1) <= 3 || strlen(str1) > 20 || strlen(str2) <= 3 || strlen(str2) > 20){
        cout << "error" << endl;
    }
    else{
        cout << strlen(str1) << endl << strlen(str2) << endl;
        strcpy(str_com, str1); //string copy
        strcat(str_com, str2); //string concatenate
        compute(str_com);
    }
    return 0;
}

void compute(char n[]){
    int len = strlen(n);
    for(int i = len - 1; i >= 0; i--){
        cout << n[i];
    }
    cout << endl;
}