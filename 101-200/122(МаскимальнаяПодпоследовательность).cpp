#include <bits/stdc++.h>
 
#define ll long long
#define foor(i, a, b) for(i = a; i < b; i++)
#define foorb(i, a, b) for(i = a; i > b; i--)
using namespace std;
 
const int MAXN = 1050;
const int MAXVALUE = 1000000001;
 
int a[MAXN], n, d[MAXN], i, j, c = 0;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    foor(i, 0, n)
        cin >> a[i];
    d[0] = -MAXVALUE;
    foor(i, 1, n + 1)
        d[i] = MAXVALUE;
    foor(i, 0, n) {
        j = upper_bound(d, d + n, a[i]) - d;
        if(d[j - 1] < a[i] && a[i] < d[j])
            d[j] = a[i];
    }
    foor(i, 1, n + 1)
        if(d[i] != MAXVALUE)
            c++;
    cout << c;
}