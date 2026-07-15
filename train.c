#include <stdio.h>
#include <ctype.h>
int main()
    
{ 
    float moving_speed;//here we are talking about the speed of train
    // by using the speed sensor device,
    printf("\ndected speed:\n");
    scanf("%f",&moving_speed);
      //now we will apply conditions 
      if(moving_speed<0.0)// which is not possible 
      {
        printf("\n[CRITICAL]speed sensor error dected\n");
        printf("\nfor safty precaution gate remain closed\n");
      } 
   //also
   else if(moving_speed>5.0)
   { printf("\n[WARNING]train speed must come down below 5.0 kmph \n");
    printf("\nfor safty precation door will remain closed\n");

   }
   if(moving_speed>=0.0&&moving_speed<=5.0)//safly docking speed
   {
   printf("\ntrain safely docked at the platform\n");
   // time to board the train 
   
   char input1;
   char input2;
   printf("\nplease input the platform authorization code\n");
   scanf(" %c",&input1);
   scanf(" %c",&input2);
   // now we will set the condition
   if (isdigit(input1)||isdigit(input2))
   printf("\ndigits are not allowed.please verify your code\n ");
 else if(input1=='A'&&input2=='B') 
 {printf("\n[SUCCESS] platform gates open.welcoming passenger\n");}
 else{ 
    printf("\naccess denied\n");
 }
} 
   return 0;
   }

   
   
   
   
    