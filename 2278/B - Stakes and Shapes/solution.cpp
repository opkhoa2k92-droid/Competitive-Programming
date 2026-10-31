#include <bits/stdc++.h>
#define int long long 
#define __ThanhKhoa signed main 
 
using namespace std;
 
__ThanhKhoa () {
    cin.tie (0) -> ios::sync_with_stdio(0);
    int q;
    cin >> q;
    while (q--) {
        int r , s , p;
        cin >> r >> s >> p;
        int maxn = max ({r,s,p});
        string res;
        if ( r == maxn ) res = "P";
        if ( s == maxn ) res = "R";
        if ( p == maxn ) res = "S";
        for (int i = 1 ; i <= (r + s + p) ; i++) cout << res;
        cout << '
';
    }
}