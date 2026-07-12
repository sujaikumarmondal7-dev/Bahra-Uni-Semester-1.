#include <stdio.h>

int main()
{ 
  
  float chamber_pressure =0.00 ;// current engine chamber pressure
  float critical_limit_of_pressure = 4000.00 ;// maximum safe pressure limit

  printf("\nmeasuring the chamber pressure:\n");
  scanf("%f",&chamber_pressure); 
if(chamber_pressure <=4000.00 )
{
  printf("\nready for engine ignition\n");
char command ='a' ;//'s'=command for stage 1ignisation,'a'=abort/standby
printf("\nplease enter the command:\n");
scanf(" %c",&command);
if(command=='s')
{printf("\n[SYSTEM] MAIN ENGINE IGNITION SUCCESSFUL.\n");
printf("[SYSTEM] THRUST AT 100%%. WE HAVE LIFTOFF!\n");
    
}}
else
{ printf("critical warning pressure exceeds safty limit\n");
printf("[ACTION] engaging emergency fuel purge immediately\n");
}
return 0;
}
