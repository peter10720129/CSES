#include<bits/stdc++.h>

using namespace std ;



int main() {
    long long n ; 
    cin >> n ;
    
    vector<long long> v1,v2 ;

    long long sum = ((1+n)*n)/2 ;


    if ( sum % 2 ) {
         cout << "NO\n" ;
    }
    else {
        cout << "YES\n" ;
        

        long long tar = sum/2 ;

        for ( long long i = n ; i > 0 ; i-- ) {
            if ( tar != 0 && tar >= i ) {
                tar -= i ;
                v1.push_back(i) ;
            }
            else {
                v2.push_back(i) ;
            }
        }

        cout << v1.size() << endl ;
        for ( long long i : v1 ) 
            cout << i << ' ' ;

        cout << endl << v2.size() << endl ;
        for ( long long i : v2 ) 
            cout << i << ' ' ;

    }

    return 0 ;
}