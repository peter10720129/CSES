#include<bits/stdc++.h>

using namespace std ;


int main() {

    int n ;

    cin >> n ;
    
    vector<int> arr(n) ;

    for ( int i = 0 ; i < n ; i++ ) {
        cin >> arr[i] ;
    }

    
    long long int range = pow(2,n) ;
    long long int res = 1000000001 ;
    for ( long long int i = 0 ; i < range ; i++ ) {
        long long int division = i ;
        long long int g1 = 0, g2 = 0 ;
        for ( int k = 0 ; k < n ; k++ ) {
            if ( division % 2 ) {
                g1 += arr[k] ;
            }
            else {
                g2 += arr[k] ;
            }

            division >>= 1 ;
        }

        res = min(res, abs(g1-g2)) ;
    }

    cout << res ;
    return 0 ;
}