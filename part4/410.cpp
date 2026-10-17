#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cctype>

using namespace std;

int main(){
    ifstream read_file("read.txt");
    ofstream write_file("write.txt");
 
    char s[100];
    while(read_file.getline(s,100)){
        if (s[0] != '\0') {
            s[0] = toupper(s[0]);
        }
        for(int i = 1; i < (int)strlen(s); i++){
            if(s[i-1] == ' '){
                s[i] = toupper(s[i]);
            }
        }
        cout << s << endl;
        write_file << s << endl;
    }
    read_file.close();
    write_file.close();

}