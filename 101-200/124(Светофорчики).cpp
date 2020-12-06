#include <bits/stdc++.h>
 
using namespace std;
 
#define foor(i, a, b) for(i = a; i < b; i++)
#define ll long long
 
const int MAXN = 5050;
const int MAXVALUE = 10000;
 
 
int n, k, a[MAXN], i, l, r, mid, b[MAXN], c, j;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    foor(i, 0, k)
        cin >> a[i] >> b[i];
    foor(i, 1, n + 1){
        c = 0;
        foor(j, 0, k){
            if(a[j] == i)
                c++;
            if(b[j] == i)
                c++;
        }
        cout << c << " ";
    }
 
}