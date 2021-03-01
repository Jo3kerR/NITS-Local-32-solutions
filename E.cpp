#include<bits/stdc++.h>
using namespace std;
 
int main() {
 
    ios::sync_with_stdio(0); 
    cin.tie(0); 
 
    int tt; cin >> tt ; 
 
    while(tt--) {
        int n, w;
        cin >> n >> w ;
        vector<long long> v(n) ; 
        for(auto &i : v)
            cin >> i ; 
        vector<long long> dp(n), mx(n) ;
        dp[0] = 0 ; 
        mx[0] = -v[0] ; 
        for(int i = 1 ; i < n ; ++i) {
            if(i-w >= 0) {
                dp[i] = max(dp[i-1], v[i] + mx[i-w]) ;
                mx[i] = max(mx[i-1], dp[i-w] - v[i]) ;  
            }
            else {
                dp[i] = dp[i-1] ; 
                mx[i] = max(mx[i-1], -v[i]) ; 
            }
        }
        cout << dp[n-1] << '\n' ; 
    }
 
    return 0 ; 
}
