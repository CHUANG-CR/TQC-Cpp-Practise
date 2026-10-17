#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char str1[128];
    char str2[128];

    int n;
    cin >> str1 >> str2 >> n;

    int result = strncmp(str1, str2, n); //string number compare

    if (n >= 0 && (size_t)n <= strlen(str1)){
        if (result == 0){
            cout << str1 << '=' << str2 << endl;
        } 
        else if (result > 0){
            cout << str1 << '>' << str2 << endl;
        }
        else{
            cout << str1 << '<' << str2 << endl;
        }
    }
    else{
        cout << "error" << endl;
    }
    return 0;
}