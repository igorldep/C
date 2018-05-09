#include <stdio.h>
#include <stdlib.h>

float max ( float v[], int n ){
    int i;
    float max = v[0];

    for ( i = 1; i < n; i++ ){
        if ( v[i] > max )
            max = v[i];
    }
    
    return ( max );
}
