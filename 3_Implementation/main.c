#include "inc/para.h"
int main()


{
   Welcome_screen();


   login_screen();
   int result, a ,b ,c;

   switch (Parameter_s())

   {

   case 1:
      {
         
      printf("Enter the value of voltage and current: \n");
      scanf("%d %d",&a,&b);
      result = power_input(a,b);
      printf("The Input Power of the machine is : %d", result);
      break;
      }

   case 2:
   {
      
      printf("Enter the value of voltage and current: \n");
      scanf("%d %d",&a,&b);
      result = power_output(a,b);
      printf("The Output Power of the machine is : %d", result);

      break;
   }
   case 3:
   {
      printf("Enter the value of voltage and current: \n");
      scanf("%d %d",&a,&b);
      result = resistance(a,b);
      printf("The Resistance of the machine is : %d", result);

      break;
   }
   case 4:
   {  
      printf("Enter the value of N-turns and current : \n");
      scanf("%d %d",&a,&b);
      result = freq(a,b);
      printf("The Frequency of the machine is : %d", result);

      break;
   }
   case 5:
   {
      printf("\nEnter the value of Freq and Poles :\n");
      scanf("%d %d",&a,&b);
      result = speed(a,b);
      printf("The Speed of the machine is : %d", result);
      break;
   }
   case 6:
   {
       printf("Enter the value of Force and radius :\n");
      scanf("%d %d",&a,&b);
      result = torque(a,b);
      printf("The Torque of the machine is : %d", result);
      break;
   }
   case 7:
   {
        
      printf("Enter the value of Turn_primary, V1 and V2 :\n");
      scanf("%d %d %d",&a,&b,&c);
      result = secondary_turns(a,b,c);
      printf("The Secondary side turn of Transformer : %d", result);
      break;
   }

      default:
      {
      printf("wrong choise : \n");
      break;
      }
   }
   return 0;
}
