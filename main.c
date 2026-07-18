#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
int main()
   {
    int die1;
    int die2;
    int totalsum;
    //now we will add the process of generating the random outcome
    printf("\nplease ROLL the dies\n");
    srand(time(NULL));
    die1=(rand()%6)+1;
    die2=(rand()%6)+1;
    //now it is the time for total sum 
    totalsum=die1+die2;
    if((totalsum==7)||(totalsum==11))
    {
        printf("\nplayer win\n");
    }
    else
    {
        printf("\nthe sum of the two dice is %d . Thank you for playing !\n",totalsum);
    }
    return 0;
   }