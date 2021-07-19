#include <stdio.h> 

        int main( void ) {
            
            int i, number[ 20 ];
            
            number[ 0 ] = 0;
            number[ 1 ] = 1;
            
            for( i = 2; i < 20; i++ )
               number[ i ] = number[ i - 2 ] + number[ i - 1 ];
                
            for( i = 0; i < 20; i++ )
                printf( "Number[ %d ] = %f\n", i, number[ i ] );
            
        }