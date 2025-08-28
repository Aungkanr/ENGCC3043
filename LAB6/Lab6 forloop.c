#include <stdio.h> 

int main () { 
    int check = 0 ; 
    int i ; 
    int n ; 
    printf (" Enter value \n ") ; 
    
    check = scanf ( "%d" , &n ) ;
    
    if (check == 0 ) {

        printf (" โปรดกรอกเฉพาะตัวเลขเท่านั้น " );
    }
    
    else if ( n % 2 != 0) {                                                                                             
        for(int i = 1 ; i <= n ; i++ ) {

            if ( i % 2 != 0 ) {
                
                printf(" %d " , i ) ;
            }
        } // End for
     } // end else if
    else {
        
        for(int i = n ; i >= 0 ; i-- ) {
            if ( i % 2 == 0 ) {
                printf(" %d " , i ) ;
            }
        } // End for
    } // end else
    
    return 0; 
}