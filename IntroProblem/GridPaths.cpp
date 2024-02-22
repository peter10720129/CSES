#include<bits/stdc++.h>

using namespace std ;
int res = 0 ;
string maze ; 
vector< vector<int> > visited(7, vector<int>(7,0)) ;

bool is_valid(int x, int y ) {
    if ( x < 0 || x >= 7 || y < 0 || y >= 7 || visited[x][y] ) return 0 ;
    return 1 ;
}

void search(int x, int y, int step ) {
    if ( step == 48 ){
        if ( x == 6 && y == 0 )
            res++ ;
        return ;
    } 

    if ( x == 6 && y == 0 ) return ;

    // cut when the unvisited maze being seperte into two part 
    
    if ( !is_valid(x,y+1)&& !is_valid(x,y-1) && is_valid(x+1,y) && is_valid(x-1,y) ) return ;
    
    if ( is_valid(x,y+1)&& is_valid(x,y-1) && !is_valid(x+1,y) && !is_valid(x-1,y) ) return ;

    visited[x][y] = 1 ;
    

    if ( maze[step] == 'U' ) {
        if ( is_valid(x-1,y) ) search(x-1,y,step+1) ;
    }
    else if ( maze[step] == 'D' ) {
        if ( is_valid(x+1,y) ) search(x+1,y,step+1) ;
    }
    else if ( maze[step] == 'L' ) {
        if ( is_valid(x,y-1) ) search(x,y-1,step+1) ;
    }
    else if ( maze[step] == 'R' ) {
        if ( is_valid(x,y+1) ) search(x,y+1,step+1) ;
    }
    else {
        if ( is_valid(x-1,y) ) search(x-1,y,step+1) ;    
        if ( is_valid(x+1,y) ) search(x+1,y,step+1) ;
        if ( is_valid(x,y+1) ) search(x,y+1,step+1) ;
        if ( is_valid(x,y-1) ) search(x,y-1,step+1) ;
    }
        
    visited[x][y] = 0 ;
}


int main() {
    cin >> maze ;
    
    search(0,0,0) ;

    cout << res ;

    return 0 ;
}