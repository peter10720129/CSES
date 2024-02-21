#include<bits/stdc++.h>

using namespace std ;

int checker_column(int x, int y, int n ) {
    int cnt = 0 ;
    if ( x-2 >= 0 && y-1 >= 0 ) cnt++ ;
    if ( x-1 >= 0 && y-2 >= 0 ) cnt++ ;
    if ( x+2 <= n && y-1 >= 0 ) cnt++ ;
    if ( x+1 <= n && y-2 >= 0 ) cnt++ ;
    return cnt ;
}

int checker_row(int x, int y, int n ) {
    int cnt = 0 ;
    if ( x-2 >= 0 && y-1 >= 0 ) cnt++ ;
    if ( x-1 >= 0 && y-2 >= 0 ) cnt++ ;
    if ( x-1 >= 0 && y+2 <= n ) cnt++ ;
    if ( x-2 >= 0 && y+1 <= n ) cnt++ ;
    return cnt ;
}

int main() {
    int n ; 
    cin >> n ;
    long long int squares = 0 ;
    long long int total = 0 ;
    long long int violate = 0 ;
    for ( int i = 0 ; i < n ; i++ ) {
        squares += 2*i+1 ;
        total = squares ;
        total = total*(total-1)/2 ;


        // x-2,y-1 , x-1,y-2, x+2,y-1, x+1,y-2
        for ( int x = 0 ; x <= i ; x++ ) {
            violate += checker_column(x,i,i) ;
            violate += checker_row(i,x,i) ;
        }

        if ( i >= 2 ) 
            violate -= 4 ;

      
        cout << total-violate << endl ;
    }


    return 0 ;
}