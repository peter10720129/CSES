#include<bits/stdc++.h>

using namespace std ;

int main() {

    
    int freq[26] = {0} ;
    string str ;

    cin >> str ;

    bool odd = false ;

    for ( int i = 0 ; i < str.size() ; i++ ) {
        freq[str[i]-'A']++ ;
    }

    string front = "", rear = "", mid ="" ;

    for ( int i = 0 ; i < 26 ; i++ ) {

        if ( freq[i] != 0 ) {
            if ( freq[i] % 2 ) {
                if ( ! odd ) {
                    odd = true ;
                    mid = string(freq[i],'A'+i) ;
                }
                else {
                    cout << "NO SOLUTION" ;
                    return 0 ;
                }
            }
            else {
                string par = string(freq[i]/2, 'A'+i) ;
    
                front += par ;
                rear = par + rear ;
            }
        }
    }

    cout << front+mid+rear ;
    return 0 ;
}