#include <bits/stdc++.h>
 
using namespace std;
 
#define foor(i, a, b) for(i = a; i < b; i++)
#define ll long long
 
const int MAXN = 105;
const int MAXVALUE = 10000;
 
int n, j, i, a[MAXN], dp[MAXN], m, c = 0;
ll b;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    foor(i, 0, n)
        cin >> a[i];
    sort(&a[0], &a[n]);
    dp[0] = 0;
    dp[1] = MAXVALUE;
    foor(i, 2, n + 1){
        dp[i] = min(dp[i - 1], dp[i - 2]) + a[i - 1] - a[i - 2];
    }
    cout << dp[n];
 
}