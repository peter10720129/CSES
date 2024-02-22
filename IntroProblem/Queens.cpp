#include<bits/stdc++.h>

using namespace std ;

long long int res = 0 ;
vector< vector<char> > board(8, vector<char>(8)) ;


bool IsSafe(int x, int y ) {

    // 8 directions 
    // horizontal : y+- 1
    // vertical : x+-1
    // up-left to down-right : x+-1 y+-1

    vector< vector<int> > dirs = { {0,-1},{-1,-1},{1,-1} } ;

    for ( vector<int> dir : dirs ) {
        int dir_x = dir[0],dir_y = dir[1] ;

        int dx = x+dir_x, dy = y+dir_y ;
        while ( dx >= 0 && dx < 8 && dy >= 0 && dy < 8 ){
            if ( board[dx][dy] == '1' ) return 0 ;
            dx += dir_x, dy+= dir_y ;
        }
        
    }

    return 1 ;


}

void Place( int n ) {

    if ( n >= 8 ) {
        res++ ;
        return ;
    }

    
    for ( int i = 0 ; i < 8 ; i++ ) {
        
        if ( board[i][n] == '.' && IsSafe(i,n) ) {
            board[i][n] = '1' ;
            Place(n+1) ;
            board[i][n] = '.';
        
        }
        
    }


} 

int main() {

    for ( int i = 0 ; i < 8 ; i++ ) {
        for ( int j = 0 ; j < 8 ; j++ ) {
            cin >> board[i][j] ;
        }
    }

    Place(0) ;
    cout << res ;
    return 0 ;
}