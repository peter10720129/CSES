#include<bits/stdc++.h>

using namespace std ;



int main() {
    int n ; 
    cin >> n ;

    vector<string> codes = {"0","1"};
    cout << n ;
    for ( int i = 1 ; i < n ; i++ ) {
        for ( int j = 0 ; j < codes.size() ; j++ ) {
            
            codes.push_back(codes[j]+"1") ;
            codes[j] = codes[j]+"0";
        }
    }

    for ( int i = 0 ; i < codes.size() ; i++ ) 
        cout << codes[i] << "\n" ;


    return 0 ;
}