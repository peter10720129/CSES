#include<bits/stdc++.h>

using namespace std ;



int main() {
    int n ; 
    cin >> n ;

    vector<string> codes ;
    codes.push_back("0") ;
    codes.push_back("1") ;
    for ( int i = 1 ; i < n ; i++ ) {
        int size = codes.size();
        codes.resize(size*2) ;
        for ( int j = 0 ; j < size ; j++ ) {
            
            codes[size*2-j-1] = "1"+codes[j] ;
            codes[j] = "0"+codes[j];
        }
    }

    for ( int i = 0 ; i < codes.size() ; i++ ) 
        cout << codes[i] << "\n" ;


    return 0 ;
}