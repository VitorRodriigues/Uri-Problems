#include <bits/stdc++.h>
  
int main ( int argc, char *argv ) {
  
    int Q, D, P;
    int x, res;
  
    while ( 1 ) {
        scanf ( "%d", &Q );
        if ( Q==0 ) return 0;
        scanf ( "%d %d", &D, &P );
 
        x = (double) (Q*D)/(P-Q)*P;
        res = floor(x);
 
        if ( res == 1 ) printf ( "%d pagina\n", res );
        else printf ( "%d paginas\n", res );
    }
    return 0;
}