#include <iostream>

using namespace std;

int main(){
	int a, b, ans=0;

    cin >> a >> b;
    if(a % 2 == 0){
        for(int i = a + 1; i <= b; i += 2){
            ans += i;
        }
    }
    else{
        for(int i = a; i <= b; i += 2){
            ans += i;
        }
    }
    cout << ans << endl;
}