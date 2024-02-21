#include<bits/stdc++.h>

using namespace std ;

int main() {
    int n ; 
    cin >> n ;
    
    for ( int i = 0 ; i < n ; i++ ) {
        long long int x,y ;
        cin >> x >> y ;
        long long int c = max(x,y), r = min(x,y) ;
        long long int ans = 0 ;
        if ( r == x ) {
            if ( c % 2 ) {
                ans = c*c-r+1 ;
            }
            else {
                ans = (c-1)*(c-1)+r ;
            }
        }
        else {
            if ( c % 2 ) {
                ans = (c-1)*(c-1)+r ;
            }
            else {
                ans = c*c-r+1 ;
            }
        }

        cout << ans << '\n' ;
    }

    return 0 ;
}