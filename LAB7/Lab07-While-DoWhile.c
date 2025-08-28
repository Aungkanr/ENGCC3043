#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() { 
    srand(time(NULL));
    int decision;
    int condition;
    

    printf("ยินดีต้อนรับเข้าสู่เกมทายตัวเลข\n");
    printf("คะแนนเริ่มต้น 100 คะแนน\n");
    printf("ทายตัวเลข 1-100 มา 1 เลข\n");
    printf("หากทายผิดจะลบคะแนนรอบละ 10 คะแนน\n");

    while ( condition ) {
        printf("Do you want to playgame ( 1 = play -1 = exit ) : \n") ;
        if (scanf("%d",&decision ) != 1 ) {

        while (getchar() != '\n');
        printf("Please enter only 1 or -1 \n ");

        continue;

        }

        if (decision == 1) {
            int score = 100 ;
            int randomnum = rand() % 100 + 1 ;
            int guess;
            int min = 1 , max = 100 ;
            int retry;

            printf(" score = %d \n" , score ) ;

     while ( condition ) {
                printf (" Please enter a number %d - %d : \n " , min , max ) ;
                scanf("%d" , & guess ) ;

                if (guess == randomnum ) {
                    printf( "That is correct The winning number is %d \n ",randomnum ) ;
                    printf("Score this game  %d \n", score) ;
                    break;
                } else { 
                    score -= 10;
                    if (score <= 0) {
                    printf (" Game over %d \n", randomnum);
                    printf ("Do you want to play again ( 1 = yes , -1 = no ) ? \n");
                    while (scanf("%d", &retry) != 1 || (retry != 1 && retry != -1)) {
                        while (getchar() != '\n');
                        printf (" Please enter only 1 or -1 \n");
                    }

                    if (retry == 1) {
                        break;
                    } else {
                        printf ("Thank you for playing the game.");
                        condition = 0;
                        break;
                    }
                        }
                        
                    if (guess < randomnum) { 
                        printf(" Sorry, the winning number is higher than %d ( score=%d ) \n", guess,score) ;
                        if ( guess >= min )  min = guess + 1 ;
            } else {
                         printf(" Sorry, the winning number is low than %d ( score=%d ) \n", guess,score) ;
                        if ( guess <= max ) max = guess - 1 ;
            }

        }
    }
        } else if  ( decision == -1 )  {
                    printf( "See you again \n" ) ;
                    break;
            }

            else {
                printf("Please enter only 1 or -1 \n");
            }
        }

        return 0;
        }       