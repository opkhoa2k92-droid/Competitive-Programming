#include <bits/stdc++.h>
#define int long long 
#define __ThanhKhoa signed main 
using namespace std;
 
__ThanhKhoa (){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while (n--){
        int mx;
        cin >> mx;
        int a , b , c;
        cin >> a >> b >> c;
        cout << mx - min({a,b,c}) << '
';
    }
}