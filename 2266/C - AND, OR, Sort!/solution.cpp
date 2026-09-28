#include <bits/stdc++.h>
#define int long long 
#define __ThanhKhoa signed main 
using namespace std;
 
__ThanhKhoa (){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int q;
    cin >> q;
    while (q--){
    int n;
    cin >> n;
    string s = " ";
    string tmp;
    cin >> tmp;
    s += tmp;
    vector <vector <int>> dp (n + 1 , vector <int> (2 , 1e18));
    if ( s[1] == '1' ) dp[1][1] = 0;
    else dp[1][0] = 0;
    for (int i = 2 ; i <= n ; i++) {
        if ( s[i] == '0' ) {
            dp[i][0] = dp[i-1][0];
            dp[i][1] = min(dp[i-1][0] + 1, dp[i-1][1] + 1);
        }
        if ( s[i] == '1') {
            dp[i][1] = min (dp[i-1][0] , dp[i-1][1]);
            dp[i][0] = dp[i-1][0] + 1;
        }
    }
    cout << min(dp[n][0] , dp[n][1]) << '
';
    }
}