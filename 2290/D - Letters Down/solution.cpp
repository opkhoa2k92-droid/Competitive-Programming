#include <bits/stdc++.h>
#define int long long
#define __ThanhKhoa signed main 
#define pb push_back
using namespace std;
 
int cv ( char a ) {
    return a - 'a';
}
 
int find ( int u , vector <int>& par ) {
    if ( u == par[u] ) return u;
    return u = find(par[u] , par);
}
 
void uni ( int u , int v , int &res , vector <int>& par) {
      int a = find(u,par);
      int b = find(v,par);
      while ( a > b ) {
        res += 1;
        par[a] = find(par[a-1] , par);
        a = par[a];
      }
}
 
__ThanhKhoa() {
    cin.tie(0) -> ios::sync_with_stdio(0);
    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        vector <int> a ( n + 1 );
        for (int i = 1 ; i <= n ; i ++) {
            char c;
            cin >> c;
            a[i] = cv(c);
        }
        vector <int> par (26);
        for (int i = 0 ;  i <= 25 ; i++) par[i] = i;
        int l,r;
        l = n / 2;
        if ( n % 2 == 0) r = l + 1;
        else r = l + 2;
        int res = 0;
       while ( l >= 1 && r <= n ) {
        int u = max (a[l],a[r]);
        int v = min (a[l],a[r]);
        uni(u,v,res,par);
        l--;
        r++;
       }
        cout << res << '
';
    }
}