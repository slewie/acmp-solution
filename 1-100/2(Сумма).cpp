#include <iostream>
int main(){
    int a, s = 0;
    std::cin>>a;
    if (a > 0){
        for (int i=1; i <= a; i++)
            s += i;}
    else {
        for (int i=1; i >= a; i--)
            s += i;}
 
    std::cout<<s;
    return 0;
}