#include<bits/stdc++.h>

using namespace std ;


void Hanoi(int n, int src, int dst, int mid ) {
    if ( n < 0 ) return ;
    if ( n == 1 ) {
        cout << src << ' ' << dst << '\n' ;
        return ;
    }

    Hanoi(n-1,src,mid,dst) ;
    cout << src << ' ' << dst << '\n';
    Hanoi(n-1,mid,dst,src) ;
}

int main() {
    int n ; 
    cin >> n ;

    cout << pow(2,n)-1 << '\n';
    Hanoi(n,1,3,2) ;


    return 0 ;
}