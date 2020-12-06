#include <bits/stdc++.h>
 
using namespace std;
// ускорение написания кода
#define foor(i, a, b) for(i = a; i < b; i++)
#define ll long long
 
const int MAXN = 100;
const int MAXVALUE = 1000000500;
 
int n, j, i, a[MAXN][MAXN], dp[MAXN][MAXN], m;
ll b;
int main()
{
    // блок ускорения ввода
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    foor(i, 0, n)
        foor(j, 0, m)
            cin >> a[i][j];
    dp[0][0] = a[0][0];
    foor(i, 1, n)
        dp[i][0] = a[i][0] + dp[i - 1][0];
    foor(j, 1, m)
        dp[0][j] = a[0][j] + dp[0][j - 1];
    foor(i, 1, n)
        foor(j, 1, m)
            dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + a[i][j];
    cout << dp[n - 1][m - 1];
}