#include <iostream>
using namespace std;
int main(){
    int s = 0, a;
    cin >> a;
    for(int i = 1; i <= a;i++){
        if (a % i == 0){
            s += i;}
    }
    cout << s;
    return 0;
}