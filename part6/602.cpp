#include <iostream>
#include <string>
#include <cstring>
#include <cctype>

using namespace std;

int main(){
    char a[20];
    int count = 0; 

    cin >> a; 

    for(int i = 0; i < (int)strlen(a); i++){
        if(isupper(a[i])){
            cout << a[i];
            count ++;
        }
    }
    cout << endl;
    for(int i = 0; i < (int)strlen(a); i++){
        if(islower(a[i])){
            cout << a[i];
        }
    }
    cout << endl << count << endl;
    return 0;
}