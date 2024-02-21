#include<bits/stdc++.h>

using namespace std ;

int main() {
    int n ; 
    cin >> n ;
    vector<long long int>arr(n) ;
    
    for ( int i = 0 ; i < n ; i++ )
        cin >> arr[i] ;


    long long int cur = arr[0] ;
    long long int moves= 0 ;
    for ( int i = 0 ; i < n ; i++ ) {
        if ( arr[i] < cur )
            moves += cur-arr[i] ;
        cur = max(cur,arr[i]) ;
    }

    cout << moves ;
    return 0 ;
}