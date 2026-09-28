#include <bits/stdc++.h>
#define int long long 
#define __ThanhKhoa signed main 
#define FOR(i,a,b) for (int i = (a) ; i <= (b) ; i++) 
using namespace std;
 
__ThanhKhoa(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int q;
    cin >> q;
    while  ( q-- ){
        int n;
        char t;
        cin >> n >> t;
        string s = " ";
        string tmp;
        cin >> tmp;
        s += tmp;
        vector <vector <int>> dp( n + 1 , vector <int> (n + 1));
        FOR(i,1,n) {
            dp[i][i] = 0;
            dp[i][i-1] = 0;
        }
        FOR (k , 2 , n) {
            FOR (i , 1 , n - k + 1) {
                int l = i;
                int r = l + k - 1;
                if ( s[l] == s[r] ) dp[l][r] = max (dp[l][r] , dp[l+1][r-1] );
                else if (s[l] == t || s[r] == t) dp[l][r] = max(dp[l][r] , dp[l+1][r-1] + 1);
                else dp[l][r] = max(dp[l][r] , dp[l+1][r -1] + 2);
            }
        }
        cout << dp[1][n] << '
';
    }
}