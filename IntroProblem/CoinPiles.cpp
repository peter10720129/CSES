#include<bits/stdc++.h>

using namespace std ;


int main() {
    int t ;
    int a,b ;
    cin >> t ;
    for ( int i = 0 ; i < t ; i++ ) {
        cin >> a >> b ;
        long long  x = max(a,b), y = min(a,b) ;

        if ( x == 0 && y == 0 ) {
            cout << "YES\n" ;
            continue ;
        }

        if ( x== 0 || y == 0 ) {
            cout << "NO\n" ;
            continue ;
        }
        

        if ( x > y*2 ) { 
            cout << "NO\n" ;
        }
        else {
            if ( (x+y) % 3 ) {
                cout << "NO\n" ;
            }
            else {
                cout << "YES\n" ;
            }
        }

    }

    return 0 ;
}