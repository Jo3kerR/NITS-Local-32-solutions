// Time complexity - O(nm) 

#include<bits/stdc++.h>
using namespace std;

const int N = 1010 ; 
int a[N][N] ; 
 
int main() {
 
    int n, m; cin >> n >> m; 
    if(n-1 > m or (n == 3 and m == 2)) {
        return cout <<"NO", 0 ; 
    }
 
    for(int i = 0 ; i < m; ++i) a[0][i] = i ; 
 
    for(int i = 1 ; i < n ; ++i) {
        for(int j = i-1 ; j < m ; ++j) a[i][j] = j ; 
        for(int j = 0 ; j < i-2 ; ++j) a[i][j] = j+1;
        if(i-2 >= 0) a[i][i-2] = 0 ;  
    }
 
    a[2][0] = 2, a[2][2] = 0 ; 
 
    cout << "YES\n" ; 
    for(int i = 0 ; i < n ; ++i) {
        for(int j = 0 ; j < m ; ++j) 
            cout << a[i][j]+1 << " " ; 
        cout << '\n' ;
    }
 
    return 0 ; 
}
