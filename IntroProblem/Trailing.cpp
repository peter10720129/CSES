#include<bits/stdc++.h>

using namespace std ;

int main() {
    int n ; 
    cin >> n ;

    int ans = 0 ;

    int pow = 5 ;

    while ( pow <= n ) {
        ans += n/pow ;
        pow *= 5 ;
    }

    cout << ans ;

    return 0 ;
}