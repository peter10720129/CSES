#include<bits/stdc++.h>

using namespace std ;

int main() {
    long long int n ; 
    cin >> n ;

    int counter = 1 ;
    map<int,int> m ;
    int num ; 
    for ( int i = 0 ; i < n-1 ; i++ ) {
        cin >> num ;
        m[num] = 1 ;
        if ( num == counter ) {
            while ( m.find(counter) != m.end() ) {
                counter++ ;
            }
        }
    }

    cout << counter ;
    return 0 ;
}