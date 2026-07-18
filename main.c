#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <ctype.h>
int main()
{
int random_number;
char input_character;

// now we will set the condition
    srand(time(NULL));
    random_number=(rand() % 10)+1;
   printf("\nplease input the input_character:\n");
   scanf(" %c",&input_character); 
   if( isdigit(input_character))
   {
    //fixed:added  the math conversion line here!
    int input_number=input_character-'0';
    //now compare the converted integer now 
   
    if(random_number==input_number)
    {
        printf("\nyou have gussed the correct input\n");}
        else
        {printf("\nyou gussed the wrong number\n");}
    
    }
    else
    {
        printf("\ncharacters are not allowed\n");
    }
    return 0;
}