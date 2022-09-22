

             // ASSIGNMENT 12





// Q1. Write a recursive function to print first N natural numbers.


#include<stdio.h>
void print_natural(int);
int main()
{
    int num;

    printf("ENTER THE NUMBER , UPTO YOU WANT TO PRINT THE NATURAL \t");
    scanf("%d",&num);
    print_natural(num);
    return 0;
}

void print_natural(int n){


    if(n==0){
     return;
    }
    print_natural(n-1);
    printf("%d\t",n);

}


// Q2. Write a recursive function to print first N natural numbers in reverse order.

#include<stdio.h>
void print_natural(int);
int main()
{
    int num;

    printf("ENTER THE NUMBER , UPTO YOU WANT TO PRINT THE NATURAL IN THE REVERSE ORDER  \t");
    scanf("%d",&num);
    print_natural(num);
    return 0;
}

void print_natural(int n){


    if(n==0){
     return;
    }
    printf("%d\t",n);
    print_natural(n-1);
    

}


// Q3. Write a recursive function to print first N odd natural numbers.

#include<stdio.h>
void print_odd(int);
int main()
{
    int num;
    printf("ENTER THE NUMBER , UPTO YOU WANT TO PRINT ODD \t");
    scanf("%d",&num);

    print_odd(num);
    return 0;
}

void print_odd(int n)
{

  if(n==0){
    return;
  }
  print_odd(n-1);
  printf("%d \t",2*n-1);

}


// Q4. Write a recursive function to print first N odd natural numbers in reverse order.


#include<stdio.h>
void print_odd(int);
int main()
{
    int num;
    printf("ENTER THE NUMBER , UPTO YOU WANT TO PRINT ODD IN THE REVERSE ORDER  \t");
    scanf("%d",&num);

    print_odd(num);
    return 0;
}

void print_odd(int n)
{

  if(n==0){
    return;
  }
  printf("%d \t",2*n-1);
  print_odd(n-1);
  

}


// Q5. Write a recursive function to print first N even natural numbers.


#include<stdio.h>
void even_natural(int);
int main()
{
    int num;

    printf("ENTER THE NUMBER UPTO YOU PRINT FIRST EVEN NATURAL NUMBER.\t");
    scanf("%d",&num);

    even_natural(num);

    return 0;
}

void even_natural(int n){

    if(n==0){
        return;
    }
 
     even_natural(n-1);
     printf("%d \t",2*n);

}


// Q6. Write a recursive function to print first N even natural numbers in reverse order.


#include<stdio.h>
void even_natural(int);
int main()
{
    int num;

    printf("ENTER THE NUMBER UPTO YOU PRINT FIRST EVEN NATURAL NUMBER IN THE REVERSE ORDER.\t");
    scanf("%d",&num);

    even_natural(num);

    return 0;
}

void even_natural(int n){

    if(n==0){
        return;
    }
     
     printf("%d \t",2*n);
     even_natural(n-1);
     

}



// Q7. Write a recursive function to print squares of first N natural numbers.

#include<stdio.h>
void print_squares(int);
int main()
{
    int num;

    printf("ENTER THE NUMBER UPTO YOU PRINT SQUARE OF GIVRN NUMBER \t");
    scanf("%d",&num);

    print_squares(num);
    
   return 0;
}

void print_squares(int n){

  if(n==0){
    return;
  }

   print_squares(n-1);
   printf("%d \t",n*n);

}



// Q8. Write a recursive function to print binary of a given decimal number.

#include<stdio.h>
void d_to_b(int);
int main()
{
   
   int num;
   printf("ENTER THE NUMBER YOU WANT TO CONVERT INTO BINARY \t");
   scanf("%d",&num);

   d_to_b(num);
    return 0;
}

void d_to_b(int n){

    if(n==0){
        return;
    }
    d_to_b(n/2);
    printf("%d ",n%2);

    
}


// Q9. Write a recursive function to print octal of a given decimal number.



#include<stdio.h>
void d_to_b(int);
int main()
{
   
   int num;
   printf("ENTER THE NUMBER YOU WANT TO CONVERT INTO BINARY \t");
   scanf("%d",&num);

   d_to_b(num);
    return 0;
}

void d_to_b(int n){
    
    if(n==0){
        return;
    }
    d_to_b(n/8);
    printf("%d",n%8);

    
}


// Q10. Write a recursive function to print reverse of a given number.


#include<stdio.h>
int reverse_no(int);
// int r,rev=0;
int main()
{
    int num,number;

    printf("ENTER THE NUMBER \t");
    scanf("%d",&num);
    
    number=reverse_no(num);
    printf("THE REVERSE OF THE NUMBER IS %d ",number);

    return 0;
}
int r,rev=0;
int reverse_no(int n){

    if(n){
      r=n%10;
      rev=rev*10+r;
      reverse_no(n/10); 
    }
    else 
      return rev;
  return rev;
}




