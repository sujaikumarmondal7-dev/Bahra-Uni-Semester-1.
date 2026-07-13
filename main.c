#include <stdio.h>

int main()
{
  //<-- start main 
  float chamber_pressure = 0.00;
  float critical_maximum_limit_of_pressure=5000.00;
  float critical_minimum_limit_of_pressure=900.00;
  //machine measuring the chamber pressure 
  printf("\nbreading of chamber pressure :\n");
  scanf("%f",&chamber_pressure);

  if (chamber_pressure<900.00)  
  {
  printf("\nchamber pressure is below the minimum critical limit \n");
 printf("\nit is very risky to ignite the engine\n");
}
  else if(chamber_pressure>5000.00)
  {printf("\n chamber pressure exceeds the maximum critical limit\n");
  printf("\nit is very risky to ignite the engine\n");
}
  if ( chamber_pressure<=5000.00&&chamber_pressure>=900.00)
  { 
    // here i add && because both the state ment above need to be true  to ignite the engine 
    printf("chamber pressure is in suitable range \n");
   
    char command1 ;
    char command2 ;
    printf("\nplease input the commands\n");
    scanf(" %c",&command1);
    scanf(" %c",&command2);
    // now i will apply condition here 
    if(command1=='A'&&command2=='B')
    //here i put && operator because both the input need to correct 
    { 
      printf("\n[SYSTEM] ALL CONDITIONS MET. LIFTOFF!\n"); 
    }
    else
   {
    printf("\n[SYSTEM] Launch aborted .check command inputs.\n");
   }}
   return 0;
  }