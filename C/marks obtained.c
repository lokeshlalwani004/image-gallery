#include<stdio.h>
#include<math.h>


int main() {
    int marks;

     printf("enter a marks :>");
     scanf("%d",&marks);
     if(marks >= 80){
        printf("A grade \n");
     }
     else if(marks > 61 && marks < 80){
        printf("B grade \n");
     }
     else{
        printf("fail \n");
     }
       
       return 0;
}



   
