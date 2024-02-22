#include<bits/stdc++.h>

using namespace std ;

// 9, 90, 900, 9000, 90000

long long int pow_10[20], digit_num[20] ;

void init() {
    pow_10[0] = 1 ;
    for ( int i = 1 ; i < 20 ; i++ ) {
        pow_10[i] = pow_10[i-1]*10 ;
    }

    for ( int i = 1 ; i < 20 ; i++ ) {
        digit_num[i] = pow_10[i-1]*9*i ;
    }
}

int main() {
    int q ;
    long long int k ;
    cin >> q ;


    init() ;
    for ( int i = 0 ; i < q ; i++ ) {
        cin >> k ;
        int digit = 1 ;
        while ( k > digit_num[digit] ) {
            k -= digit_num[digit++] ;
        }

        k-- ;

        long long int exact_num = k/digit+pow_10[digit-1] ;
        int digit_loc = k%digit ; 
        string num_str = to_string(exact_num) ;
        cout << num_str[digit_loc] << '\n' ;
    }




    return 0 ;
}