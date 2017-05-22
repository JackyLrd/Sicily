// Problem#: 4835
// Submission#: 1220223
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include <cstdio>
#include <cstring>
#include <map>
using namespace std;

void upper( char s[] ) {
    for ( int i = 0; s[ i ] != '\0'; i++ ) {
        if ( s[ i ] >= 'a' && s[ i ] <= 'z' )
            s[ i ] -= 32;
    }
}

int main()
{
    int n;
    char s[ 21 ];
    map<char, int> keypad;
    int i, j;

    keypad[ 'A' ] = keypad[ 'B' ] = keypad[ 'C' ] = 2;
    keypad[ 'D' ] = keypad[ 'E' ] = keypad[ 'F' ] = 3;
    keypad[ 'G' ] = keypad[ 'H' ] = keypad[ 'I' ] = 4;
    keypad[ 'J' ] = keypad[ 'K' ] = keypad[ 'L' ] = 5;
    keypad[ 'M' ] = keypad[ 'N' ] = keypad[ 'O' ] = 6;
    keypad[ 'P' ] = keypad[ 'Q' ] = keypad[ 'R' ] = keypad[ 'S' ] = 7;
    keypad[ 'T' ] = keypad[ 'U' ] = keypad[ 'V' ] = 8;
    keypad[ 'W' ] = keypad[ 'X' ] = keypad[ 'Y' ] = keypad[ 'Z' ] = 9;

    scanf( "%d", &n );
    while ( n-- ) {
       scanf( "%s", s );
       upper( s );
       for ( i = 0, j = strlen( s ) - 1; i < j; i++, j-- ) {
           if ( keypad[ s[ i ] ] != keypad[ s[ j ] ] )
               break;
       }
       printf( i < j ? "NO\n": "YES\n" );
    }

    return 0;

}                                 
