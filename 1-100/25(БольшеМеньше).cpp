#include <iostream>
#include <string>
using namespace std;
int main(){
    int b, a;
    cin>> a >> b;
    if (a > b)
        cout<< ">";
    else if(a < b)
        cout<<"<";
    else
        cout<<"=";
      
    return 0;
}