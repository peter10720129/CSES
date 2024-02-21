#include<bits/stdc++.h>

using namespace std ;

int main() {
    string str ;
    cin >> str ;

    int len = 1, maxlen = 1 ;
    char cur = str[0];
    for ( int i = 1 ; i < str.size() ; i++ ) {
        if ( cur == str[i] ) {
            len++ ;
        }
        else {
            len = 1 ;
            cur = str[i] ;
        }
        maxlen = max(len,maxlen) ;
    }


    cout << maxlen ;

    return 0 ;
}