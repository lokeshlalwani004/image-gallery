      #include<stdio.h>
#include<math.h>


   int main() {
       
int month;
printf("enter a number (1-12):>");
scanf ("%d", &month);
     switch (month) {
      case 1 : printf("jan \n");
      break;
       case 2 : printf("feb \n");
      break;
       case 3 : printf("march \n");
      break;
       case 4: printf("april \n");
      break;
      case 5 : printf("may \n");
      break; 
      
       case 6 : printf("june \n");
      break;
       case 7 : printf("july \n");
      break;
      
       case 8 : printf("august \n");
      break;
       case 9 : printf("september \n");
      break;
       case 10 : printf("oct \n");
      break;
       case 11 : printf("nov \n");
      break;
       case 12 : printf("dec \n");
      break;
      default : printf("not a valid month!");
     }

     
       
       return 0;
       }
    