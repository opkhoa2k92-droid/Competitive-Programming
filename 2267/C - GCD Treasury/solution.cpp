#include <bits/stdc++.h>
#define int long long 
#define __ThanhKhoa signed main 
#define FOR(i,a,b) for (int i = (a) ; i <= (b) ; i++) 
#define pb push_back
using namespace std;
int MX = 3e5 + 5;
vector <int> prime;
void setup() {
    vector <bool> check (MX + 1 , true);
    for (int i = 2 ; i * i <= MX ; i++)
      if (check[i]) {
        for (int j = i * i ; j <= MX ; j += i) check[j] = false;
      }
    for (int i = 2 ; i <= MX ; i++)
      if (check[i]) prime.pb(i);
}
void seive ( int u , vector <int> & gcd ) {
    gcd.pb(0);
    FOR (i ,0, prime.size() - 1) {
        if ( prime[i] > u ) break;
        if ( u % prime[i] == 0 ) gcd.pb(prime[i]);
    }
}
__ThanhKhoa() {
    cin.tie(0) -> sync_with_stdio(0);
    int q;
    cin >> q;
    setup();
    while ( q-- ){
        int n , m;
        cin >> n >> m;
        vector <int> a ( n + 1) ;
        FOR(i,1,n) cin >> a[i];
        vector <int> gcd;
        seive (m , gcd);
        //FOR ( i , 1 , gcd.size() - 1) cout << gcd[i] << " ";
        if (gcd.size() == 1) cout << 0 << '
';
        else {
            int mx = 0;
            int sz = gcd.size() - 1;
            vector <int> dp ( sz + 1 , 0 );
            FOR(i , 1, n)
               FOR (j , 1, sz ) if ( a[i] % gcd[j] == 0) {
                dp[j] += a[i];
                mx = max(mx , dp[j]);
               }
               cout << mx << '
';
    }
    }
}