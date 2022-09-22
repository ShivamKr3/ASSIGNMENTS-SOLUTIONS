

                 //  ASSIGNMENT 13

    
// Q1. Write a recursive function to calculate sum of first N natural numbers.


#include<stdio.h>
int sum_natural(int);
int main()
{
    int num, number;

    printf("ENTER THE NUMBER UPTO YOU WANT TO CALCULATE FIRST N NATURAL NUMBER \t");
    scanf("%d",&num);

    number=sum_natural(num);
    printf("THE SUM IS %d \t",number);

    return 0;
}
// int sum=0;

int sum_natural(int n){
   
   if(n==0){
    return 0;
   }
   else
    return n+sum_natural(n-1);
}


// Q2. Write a recursive function to calculate sum of first N odd natural numbers.
 
#include<stdio.h>
int sum_odd_natural(int);
int main(){

    int num,number;

    printf("ENTER THE NUMBER ,TO BE FIND SUM OF ODD NATURAL NUMBER \t");
    scanf("%d",&num);

    number=sum_odd_natural(num);
    printf("THE SUM OF FIRST %d ODD NATURAL NUMBER IS %d ",num,number);
    return 0;
}

int sum_odd_natural(int n){

 int oddsum;
    if(n==0){
        return 0;
    }
    else{
    oddsum= 2*n-1 +sum_odd_natural(n-1);
    return oddsum;
    }
}


// Q3. Write a recursive function to calculate sum of first N even natural numbers.


#include<stdio.h>
int sum_even_natural(int);
int main()
{
    int num,number;
    printf("ENTER THE NUMBER UPTO YOU WANT TO SUM OF FIRST N EVEN NATURAL NUMBER \t");
    scanf("%d",&num);

    number=sum_even_natural(num);
    printf("THE SUM OF NUMBER IS %d",number);
    return 0;
}

int sum_even_natural(int n){

 int evensum=0;
    if(n==0){
        return 0;
    }
    else {
        evensum= 2*n +sum_even_natural(n-1);
     return evensum;
    }
}


// Q4. Write a recursive function to calculate sum of squares of first n natural numbers


#include<stdio.h>
int sum_square_natural(int);
int main()
{
    int num,number;
    printf("ENTER THE NUMBER UPTO YOU WANT TO SUM OF SQUARE OF FIRST N NATURAL NUMBER \t");
    scanf("%d",&num);

    number=sum_square_natural(num);
    printf("THE SUM OF NUMBER IS %d",number);
    return 0;
}

int sum_square_natural(int n){

 int squaresum;
    if(n==0){
        return 0;
    }
    else {
        squaresum= n*n +sum_square_natural(n-1);
     return squaresum;
    }
}


// Q5. Write a recursive function to calculate sum of digits of a given number.


#include<stdio.h>
int sum_of_digits(int);
int main()
{
    int num,number;
    printf("ENTER THE NUMBER YOU WANT TO SUM OF DIGITS OF IT \t");
    scanf("%d",&num);

    number=sum_of_digits(num);
    printf("THE SUM OF DIGITS OF A NUMBER IS %d",number);
    return 0;
}


int sum_of_digits(int n){

  if(n==0){
    return 0;
  }
  else
   return (n%10 + sum_of_digits(n/10));
 
}


// Q6. Write a recursive function to calculate factorial of a given number.

#include<stdio.h>
int factorial(int);
int main()
{
    int num,number;

    printf("ENTER THE NUMBER YOU WANT TO FACTORIAL OF IT \t");
    scanf("%d",&num);

    number=factorial(num);
    printf("THE FACTORIAL OF THE GIVEN NUMBER IS %d ",number);

    return 0;
}

int factorial(int n){

    if(n==0){
        return 1;
    }
    else 
    return (n*factorial(n-1));
}


// Q7. Write a recursive function to calculate HCF of two numbers.

#include<stdio.h>
int hcf(int,int);
int main()
{
    int a,b,number;

    printf("ENTER THE TWO NUMBER YOU WANT TO HCF OF IT, ENTER THE VALUE BY SEPARATING SPACE BETWEEN THEM \t");
    scanf("%d %d",&a,&b);

    number=hcf(a,b);
    printf("THE HCF OF TWO NUMBER IS %d",number);

    return 0;

}

int hcf(int m, int n)
{
   if(m==n)
    return m;
   if(m%n==0)
    return n;
   if(n%m==0)
    return m;
    if(m>n)
     return hcf(m%n,n);
    else
     return hcf(n%m,m);

}

// Q8. Write a recursive function to print first N terms of Fibonacci series.

#include<stdio.h>
int fibonacci(int);
int main()
{
    int num,i;

    printf("ENTER THE NUMBER OF TERMS UPTO YOU WANT TO PRINT FIBONACCI SERIES \t");
    scanf("%d",&num);
    for(i=0;i<=num;i++){
    printf("%d\t",fibonacci(i));
    }
    return 0;
}

int fibonacci(int n){
    if(n==0 || n==1){
        return 1;
    }
    else 
    return fibonacci(n-1)+fibonacci(n-2);

}


// Q9. Write a program in C to count the digits of a given number using recursion.


#include<stdio.h>
int count_no(int);
int main()
{
    int num;

    printf("ENTER THE NUMBER YOU WANT TO COUNT THE DIGIT OF IT \t");
    scanf("%d",&num);

    printf(" THE NUMBER OF DIGITS IN THE NUMBER IS %d",count_no(num));

    return 0;
}

int count_no(int n){

    if(n<10){
      return 1;
    }
    else
    return 1+count_no(n/10);

}


// Q10.  Write a program in C to calculate the power of any number using recursion.

#include<stdio.h>
double num_power(int,int);
int main()
{
    double base,index;
    double result;

    printf("ENTER THE BASE & INDEX OF THE NUMBER , USING SPACE SEPARATED BETWEEN THEM \t");
    scanf("%lf %lf",&base,&index);

    result=num_power(base,index);
    printf("THE POWER IS %lf ",result);
}

double num_power(int a,int b){

    if(b==0)
     return 1;
    else
     return a*num_power(a,b-1);
}




