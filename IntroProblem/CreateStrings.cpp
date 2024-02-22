#include<bits/stdc++.h>

using namespace std ;

set<string> string_set ;
vector<string> strings ;



void permute(string str, int l, int r ) {
    if ( l == r ) {
        if ( string_set.find(str) == string_set.end() ) {
            string_set.insert(str) ;
            strings.push_back(str) ;
        }
    }
    else {
        for ( int i = l ; i < r ; i++ ) {
            swap(str[l],str[i]) ;
        
            permute(str,l+1,r) ;
            swap(str[l],str[i]) ;

        }
    }
}

int main() {
    string str ;
    cin >> str ;

    permute(str,0,str.size() ) ;

    cout << strings.size() << '\n' ;

    sort(strings.begin(),strings.end());
    for ( decltype(strings.size()) i = 0 ; i < strings.size() ; i++ ) 
        cout << strings[i] << '\n' ;


    return 0 ;
}