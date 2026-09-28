#include <bits/stdc++.h>
#define int long long 
#define __ThanhKhoa signed main 
#define FOR(i,a,b) for (int i = (a) ; i <= (b) ; i++) 
using namespace std;
 
void pb (int u, int sl , vector <int> & res){
    FOR(i,1,sl) res.push_back(u);
}
 
__ThanhKhoa(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int q;
    cin >> q;
    while  ( q-- ){
        int n;
        cin >> n;
        vector <int> a(101);
        FOR(i , 1 , n) {
            int tmp;
            cin >> tmp;
            a[tmp]++;
        }
        vector <int> res;
        for (int i = 100; i >= 1; --i) {
            if (a[i] == 0) continue;
            int maxn = a[i];
            for (int j = i; j >= 1; --j) {
                int cnt = min(a[j], maxn);
                pb(j, cnt, res);
                a[j] -= cnt;
            }
        }
        for (int x : res) cout << x << " ";
    cout << '
';
 }
}