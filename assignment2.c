   

                //  ASSIGNMENT 2 



//  Q1. Write a program to print unit digit of a given number

// #include<stdio.h>
// int main()
// {
//   int x, num;
//   printf( " ENTER THE GIVEN NUMBER TO FIND THE UNIT DIGIT OF IT \t");
//   scanf("%d",&num);
//   x=num%10;
//   printf(" UNIT DIGIT OF THE GIVEN NUMBER IS %d",x);
//   return 0;

// }


// Q2. Write a program to print a given number without its last digit.


// #include<stdio.h>
// int main()
// {
//   int x, num;
//   printf( " ENTER THE GIVEN NUMBER  \t");
//   scanf("%d",&num);
//   x=num/10;
//   printf(" REST  DIGIT OF THE GIVEN NUMBER(EXCEPT UNIT) IS %d",x);
//   return 0;

// }


// Q3. Write a program to swap values of two int variables

// #include<stdio.h>
// int main()
// {
//     int a,b,temp;

// printf(" ENTER THE TWO NUMBERS \t ");
// scanf(" %d%d",&a,&b);
// temp=a;
// a=b;
// b=temp;
// printf(" VALUES AFTER SWAPPING IS %d %d",a,b);
// return 0;

// }


// Q4. Write a program to swap values of two int variables without using a third variable

// #include<stdio.h>
// int main()
// {
//     int a,b;
//     printf(" ENTER THE TWO NUMBER \t ");
//     scanf(" %d%d",&a,&b);
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf(" THE VALUES AFTER SWAPPING IS %d  %d",a,b);
//     return 0;

// }



// Q5. Write a program to input a three-digit number and display the sum of the digits.


// #include<stdio.h>
// int main()
// {
//    int num,sum=0,rem   ;
//     printf(" ENTER THE 3 DIGIT NUMBER NON NEGATIVE NUMBER ");
//     scanf(" %d",&num);
//     while(num!=0){
//     rem=num%10;
//     sum=sum+rem;
//     num/=10;

//     }

//     printf("THE SUM IS  %d ",sum);
//     return 0;

// }


//  Q6 .Write a program which takes a character as an input and displays its ASCII code 


// #include<stdio.h>
// int main()
// {
//     char input;
//     printf("WRITE ANY CHARACTER WHICH YOU WANT ITS ASCII \t");
//     scanf("%c",&input );
//     printf("THE ASCII VALUE OF %c IS %d ",input,input);
//     return 0;
// }



// Q7.  Write a program to find the position of first 1 in LSB



// #include<stdio.h>
// int main()
// {
//   int num,count=0,result=0 ;
//   printf("ENTER THE NUMBER YOU WANT TO CHECK THE POSITION OF BIT 1 \t ");
//   scanf("%d",&num);

//   while(num!=0){
//      result=num&1;
//      count++;
//      if(result==1){
//       printf(" THE POSITION OF BIT IS %d ",count);
//       break;
//      }
//      num=num >> 1;
//        }
//     return 0;
// }






/* Q8. Write a program to check whether the given number is even or odd using a bitwise 
     operator.*/

// #include<stdio.h>
// int main()
// {
//     int num ;
//     printf(" ENTER THE NUMBER TO BE CHECK \t");
//     scanf(" %d",&num);
//     if(num&1)
//      printf("ODD");
//     else
//      printf("EVEN ");

//     return 0;
// }




/* Q9. Write a program to print size of an int, a float, a char and a double type variable.*/



// #include<stdio.h>
// int main()
// {
//     int x;
//     char a;
//     float y;
//     double d;
//     printf(" sizeof(int)is %d ",sizeof(x));
//     printf(" sizeof(char)is %ld ",sizeof(a));
//     printf(" sizeof(float)is %ld ",sizeof(y));
//     printf(" sizeof(double)is %ld ",sizeof(d));


//     return 0;
// }



/* Q10. Write a program to make the last digit of a number stored in a variable as zero. 
(Example - if x=2345 then make it x=2340)*/


// #include<stdio.h>
// int main()
// {
//  int x,rem;
//  printf(" ENTER THE NUMBER YOU WANT TO STORE ZERO AFTER THAT \t");
//  scanf("%d",&x);
//  rem=x/10;
//  x=rem*10;
//  printf(" THE NUMBER AFTER ADDING ZERO IS %d",x);

//  return 0;
// }



/*Q11. Write a program to input a number from the user and also input a digit. Append a 
digit in the number and print the resulting number. (Example - number=234 and 
digit=9 then the resulting number is 2349)*/


// #include<stdio.h>
// int main()
// {
//   int num,digit;
//   printf(" ENTER THE NUMBER & DIGIT YOU WANT TO APPEND IN IT \t");
//   scanf(" %d %d",&num,&digit);
//   num=num*10+digit; 
//   printf(" NUMBER AFTER APPENDING IS %d ",num);
//     return 0;
// }



// /*Q12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and 
// convert it into USD */


// #include<stdio.h>
// int main()
// {
//     double INR;
//     double USD ;
//     printf(" TYPE THE AMOUNT IN INR : \t");
//     scanf("%lf",&INR);
//     USD=INR/76.23;
//     printf("AMOUNT IN USD IS %lf ",USD);
//     return 0;

// }

// /* Q13.  Write a program to take a three-digit number from the user and rotate its digits by 
// one position towards the right */


// #include<stdio.h>
// int main()
// {
//     int num,rest,rem ;
//     printf(" ENTER THE NUMBER YOU WANT TO ROTATE IT \t");
//     scanf("%d",&num);
//     rem=num%10;
//     rest=num/10;
//     num=rem*100+rest;
//     printf(" THE NUMBER AFTER ROTATING IS %d ",num);
//     return 0;
// }































           