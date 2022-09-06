

            /* ASSIGNMENT 9 */


/* Q1.Write a program which takes the month number as an input and display
number of days in that month. */

 

#include<stdio.h>
int main()
{
  int num;
  printf(" ENTER YOUR MONTH NUMBER TO SEE YOUR NUMBER OF DAYS IN THAT MONTH \t");
  scanf("%d",&num);

  switch(num){

    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
            
             printf(" NUBER OF DAYS IN THE %d MONTH IS 31 days",num);
              break;
    case 4:
    case 6:
    case 9:
    case 11:
             
             printf(" NUMBER OF DAYS IN THE %d MONTH IS 30 days",num);
              break;

    case 2:
            printf(" NUMBER OF DAYS IN THE %d MONTH IS 28/29 days ",num);
             break;

    default:
            printf(" INVALID CHOICE , PLEASE CHOOSE NUMBER BETWEEN 1-12 . TO PROCESS RIGHT OUTPUT ");

  }


return 0;

}






 /*  Q2.Write a menu driven program with the following options:
   a. Addition
   b. Subtraction
   c. Multiplication
   d. Division
   e. Exit   
*/





#include<stdio.h>
#include<stdlib.h>
int main()
{
  char ch ;
  int x,y,z;
  while(1){

      printf(" \n FOLLOWING OF THE SOME OPERATIONS ARE LISTED BELOW , PLEASE SELECT YOUR CHOICE \n");
      printf(" a. Addition\n");
      printf(" b. Subtraction\n");
      printf(" c. Multiplication\n");
      printf(" d. Division \n");
      printf(" e. Exit\n");

      scanf("%c",&ch);

      switch(ch){

        case 'a':
                printf("PLEASE ENTER TWO NUMBER BY SEPARATED VALUE  \n");
                scanf("%d %d",&x,&y);
                z=x+y;
                printf("Addition of number is %d",z);
                break;
      
        case 'b':
                printf("PLEASE ENTER TWO NUMBER BY SEPARATED VALUE \n");
                scanf("%d %d",&x,&y);
                z=x-y;
                printf("Subtraction  of number is %d",z);
                break;

        case 'c':
                printf("PLEASE ENTER TWO NUMBER BY SEPARATED VALUE \n");
                scanf("%d %d",&x,&y);
                z=x*y;
                printf("Multiplication of number is %d",z);
                break;
        case 'd': 
                printf("PLEASE ENTER TWO NUMBER BY SEPARATED VALUE \n");
                scanf("%d %d",&x,&y);
                z=x/y;
                printf("Division  of number is %d",z);
                break;

        case 'e':
                exit(0);

        default : 
                 printf(" INVALID CHOICE ");
   

      }

  
  }

 return 0;

}




  /* Q3.Write a program which takes the day number of a week and displays a
unique greeting message for the day.       */



#include<stdio.h>
int main(){
   
   int ch;

   printf(" FOLLOWING ARE THE DAYS OF WEEK LISTED DOWN HERE \n");
   printf("1. MONDAY\n");
   printf("2. TUESDAY \n");
   printf("3. WEDNESDAY\n");
   printf("4. THURSDAY \n");
   printf("5. FRIDAY\n");
   printf("6. SATURDAY\n");
   printf("7. SUNDAY\n");

   scanf("%d",&ch);

   switch(ch){


    case 1:
           printf(" MONDAY IS THE FIRST DAY OF WEEK ALSO CALLED STARTING DAY");
           break;
    
    case 2:
           printf(" TUESDAY IS MOST PLEASANT DAY ");
           break;

    case 3: 
           printf(" WEDNESDAY IS THE WORKING DAY OF WEEK ");
           break;

    case 4:
           printf(" THURSDAY IS MIDDLE  DAY OF WEEK ");
           break;
      
    case 5:
           printf(" FRIDAY IS AMAZED DAY OF WEEK ");
           break;

    case 6:
           printf(" SATURDAY IS WEEEKEND DAY OF WEEK");
           break;

    case 7:
           printf(" SUNDAY IS HOLIDAY OF WEEK ");
           break;

    default:
            printf(" INVALID CHOICE ");
               break;
   }
}






/* Q4.Write a menu driven program with the following options:

a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit
    */




#include<stdio.h>
#include<stdlib.h>

int main(){
  
  char ch;
  int num1,num2,num3;
  
  while(1)
  {
    printf("          '''''''''''''''''''''''''''''''''        ");
    printf("\n\n");
    printf("a. ISOSCELES \n");
    printf("b. RIGHT ANGLED TRIANGLE \n");
    printf("c. EQUILATERAL TRIANGLE \n");
    printf("d. EXIT \n");
    
    scanf("%c",&ch);
    switch(ch){

      case 'a':
               printf(" ENTER THE THREE SIDES OF TRIANGLE \n");
               scanf("%d %d %d",&num1,&num2,&num3);
               if(num1==num2 || num2==num3 || num3==num1){
                printf(" ISOSCELES\n");
               }
               else{
                printf("NOT ISOSCELES\n");
               }
               break;
      case 'b':
               printf(" ENTER THE THREE SIDES OF TRIANGLE \n");
               scanf("%d %d %d",&num1,&num2,&num3);
               if(((num1*num1) == (num2*num2)+(num3*num3)) || ((num2*num2) == (num1*num1)+(num3*num3)) || ((num3*num3) == (num2*num2)+(num1*num1)))
               {
                  printf(" RIGHT ANGLED TRIANGLE \n");
               }  
               else {
                printf(" NOT A RIGHT ANGLED TRIANGLE\n");
               }    
               break;
      
      case 'c': 
               printf(" ENTER THE THREE SIDES OF TRIANGLE \n");
               scanf("%d %d %d",&num1,&num2,&num3);
               if(num1 == num2 == num3)
               {
                printf(" EQUILATERAL TRIANGLE \n ");
               }
               else{
                printf(" NOT EQUILATERAL TRIANGLE \n");
               }
               break;

      case 'd':
               exit(0);

      default : 
               printf(" \n WRONG INPUT \n");
                break;
    }

  }
 return 0;
}






 /* Q5.Convert the following if-else-if construct into switch case:
if(var == 1)
System.out.println("good");
else if(var == 2)
System.out.println("better");
else if(var == 3)
System.out.println("best");
else
System.out.println("invalid");

*/




#include<stdio.h>

int main()
{
  int var;
  printf("ENTER YOUR CHOICE TO SHOW OUTPUT \n");
  scanf("%d",&var);

  switch(var)
  {
    case 1: 
           printf("good");
           break;
    case 2:
           printf("better");
           break;
    case 3: 
          printf("best");
          break;
    default :
            printf("invalid");
            break;

  }
  return 0;

}








 /* Q6. Program to check whether a year is a leap year or not. Using switch
statement. */




#include<stdio.h>
int main()
{ 
  int year,rem;

  printf(" ENTER THE YEAR YOU WANT TO CHECK FOR \t");
  scanf("%d",&year);

  rem= (((year%400==0)||(year%100!=0))&& (year%4==0));

  switch(rem){

    case 1:
           printf(" YEAR IS LEAP");
           break;


    case 2: 
           printf(" YEAR IS NOT LEAP");
           break;         

    default :
            printf(" INVALID CHOICE ");
            break;

    }

  return 0;
 
}







 /* Q7. Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.

  */


 

#include<stdio.h>
int main(){

  float unit,cost=0,total=0;

  printf(" ENTER THE UNIT TO BE CONSUMED BY YOU \t");
  scanf("%f",&unit);

  switch(unit<=50){
    case 1 : cost= 0.5*unit;
             break;
    case 0 : switch(unit<=150){
                   case 1 : cost= 25+(unit-50)*0.75;
                            break;
                   case 0 : switch(unit<=250){
                                  
                                  case 1 :  cost = 100+(unit-150)*1.20;
                                            break;
                                  case 0 :  cost = 220+(unit-250)*1.50;
                                            break;

                               
                   }break;
    }break;
            
          
  }
  total=cost+cost*0.20;
   printf(" TOTAL AMOUNT IS %f",total);

  return 0;
}


 





/* Q8. Program to convert a positive number into a negative number and negative
number into a positive number using a switch statement.  */


#include<stdio.h>
int main()
{
  int num,ch;
  printf(" ENTER THE CHOICE \n");
  printf(" 1. FOR POSITIVE NUMBER\n");
  printf(" 2. FOR NEGATIVE NUMBER\n");
  scanf("%d",&ch);

  switch(ch)
  {

    case 1: 
           printf(" ENTER THE POSITIVE NUMBER YOU WANT TO CHANGE TO NEGATIVE \n");
           scanf("%d",&num);
           num=(num*(-1));
           printf(" THE NEGATIVE  NUMBER IS %d",num);
           break;

    case 2:
           printf(" ENTER THE NEGATIVE NUMBER YOU WANT TO CHANGE TO POSITIVE \n");
           scanf("%d",&num);
           num=(num*(-1));
           printf("THE POSITIVE NUMBER IS %d",num);
           break;

    default :
            printf(" INVALID CHOICE ");
            break;

  }
 return 0;

}







/* Q9. Program to Convert even number into its upper nearest odd number
Switch Statement. */



#include<stdio.h>
int main()
{
  int num;

  printf(" ENTER THE NUMBER YOU WANT TO BE CONVERT INTO ODD \t ");
  scanf("%d",&num);
  switch(num%2==0){

    case 1 :
            printf(" %d ",num+1);
            break;
    case 0 :
            printf(" %d ",num);
            break;
  }


  return 0;
}





 /*  Q10. C program to find all roots of a quadratic equation using switch case.*/





#include <stdio.h>
#include <math.h> 

int main()
{
    float a, b, c;
    float r1, r2, imaginary;
    float d;

    printf("Enter values of a, b, c of quadratic equation (aX^2 + bX + c):, provide value by separate space between them  ");
    scanf("%f %f %f", &a, &b, &c);

    
    d= (b * b) - (4 * a * c);

    switch(d > 0)
    {
        case 1:
            
            r1 = (-b + sqrt(d)) / (2 * a);
            r2 = (-b - sqrt(d)) / (2 * a);

            printf("Two distinct and real roots exists: %.2f and %.2f", 
                    r1, r2);
            break;

        case 0:

            switch(d < 0)
            {
                case 1:
                    
                    r1 = r2 = -b / (2 * a);
                    imaginary = sqrt(-d) / (2 * a);

                    printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f", 
                            r1, imaginary, r2, imaginary);
                    break;

                case 0:
                   
                    r1 = r2 = -b / (2 * a);

                    printf("Two equal and real roots exists: %.2f and %.2f", r1, r2);

                    break;
            }
    }

    return 0;
}






















































































































