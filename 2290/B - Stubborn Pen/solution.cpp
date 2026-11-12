#include <bits/stdc++.h>
#define int long long
#define __ThanhKhoa signed main  
using namespace std;
 
__ThanhKhoa() {
    cin.tie(0) -> ios::sync_with_stdio(0);
    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        string s = "B";
        string tmp;
        cin >> tmp;
        s += tmp;
        int res = 0;
        for (int i = 1 ; i <= n ; i++ ) {
            if ( s[i] == s[ i- 1]) res++;
                    }
                    cout << res << '
';
    }
}