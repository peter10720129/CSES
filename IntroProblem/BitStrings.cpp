#include<bits/stdc++.h>

using namespace std ;


long long pow(int y) {

    if ( y == 0 ) return 1 ;

    if ( y % 2 ) {
        return (2*( pow(y-1)% 1000000007 ) ) % 1000000007 ;
    }
    else {
        return ((pow(y/2)% 1000000007 )*(pow(y/2)% 1000000007 ) ) % 1000000007 ;
    }
}

int main() {
    long long n ; 
    cin >> n ;
    
    cout << pow(n) ;


    return 0 ;
}