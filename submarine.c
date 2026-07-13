#include <stdio.h>
#include <ctype.h>
int main(){
   float water_pressure=0.0;
   float critical_maximum_water_pressure=150.0;
   // if pressure is 150.0 submarine should not go below that level of see 
   float critical_minimum_water_pressure=1.0;
   // it represent that pressure measuring device is giving a false reading 
   //which is not possible inside the sea 
   printf("\nreading of water_pressure\n");
   scanf("%f",&water_pressure) ;
   if(water_pressure<1.0)
   { 
    printf("\n[CRITICAL] a problem is dected in pressure reading device\n");
    printf("\n it is not safe to open the hull\n");

    }
    else if (water_pressure>150.0)
    {
        printf("[CRITICAL] Pressure exceeds hull structural limits!");
        printf("\n it is not safe to open the hull\n");
     }

    if (water_pressure>=1.0&&water_pressure<=150.0)
    {
        printf("\n[SYSTEM] External pressure stable. Safe to proceed.\n");
        char command1;
        char command2;
        // now it is time to enter the command 
        printf("\nplease input the command\n");
        scanf(" %c",&command1);
        scanf(" %c",&command2);
       //using a simple if .(it is odd but i will change it latter)
       if(isdigit(command1)||isdigit(command2))
       {
        printf("\n[error] system malfunction:digits are not accepted as security keys");
            printf("\n[denied]hatch remains locked\n");
       }
       //now i will apply condition 
       else if (command1=='X'&&command2=='Y')
        {printf("[SUCCESS] Hatch unlocked. Welcome aboard, Captain!"); }
else
{printf("[DENIED] Security violation. Hatch remains locked");} 
 }
return 0;

}