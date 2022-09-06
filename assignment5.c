

            /*  ASSIGNMENT 5 */



// Q1.Write a program to print MySirG N times on the screen.

#include<stdio.h>
int main()
{
    int i,n;

    printf("ENTER THE NUMBER , YOU WANT TO PRINT THAT TIMES THE MESSAGES \t");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    printf(" MYSIRG \n");

    return 0;
}



// Q2.  Write a program to print the first N natural numbers.


#include<stdio.h>
int main()
{
    int i,n;

    printf(" ENTER THE NUMBER OF TIMES YOU PRINT \t");
    scanf(" %d",&n);
    for(i=1;i<=n;i++)
    printf(" %d \t ",i);

    return 0;
}



// Q3. Write a program to print the first N natural numbers in reverse order


#include<stdio.h>
int main()
{
    int i,n;

    printf(" ENTER THE NUMBER OF TIMES YOU PRINT IN REVERSE ORDER \t");
    scanf(" %d",&n);
    for(i=n;i>=1;i--)
    printf(" %d \t ",i);

    return 0;
}



// Q4.Write a program to print the first N odd natural numbers



#include<stdio.h>
int main()
{
 int i,n;
 printf(" ENTER THE NUMBER OF MANY TIMES YOU WANT TO PRINT ODD NATURAL NUMBER \t");
 scanf("%d",&n);
 for(i=1;i<=n;i++){
    printf("%d \t",2*i-1);
 }

    return 0;
}



// Q5. Write a program to print the first N odd natural numbers in reverse order.


#include<stdio.h>
int main()
{
 int i,n;
 printf(" ENTER THE NUMBER OF MANY TIMES YOU WANT TO PRINT ODD NATURAL NUMBER \t");
 scanf("%d",&n);
 for(i=n;i>=1;i--){
    printf("%d \t",2*i-1);
 }

    return 0;
}


// Q6. Write a program to print the first N even natural numbers


#include<stdio.h>
int main()
{
 int i,n;
 printf(" ENTER THE NUMBER OF MANY TIMES YOU WANT TO PRINT EVEN NATURAL NUMBER \t");
 scanf("%d",&n);
 for(i=1;i<=n;i++){
    printf("%d \t",2*i);
 }

    return 0;
}



// Q7. Write a program to print the first N even natural numbers in reverse order



#include<stdio.h>
int main()
{
 int i,n;
 printf(" ENTER THE NUMBER OF MANY TIMES YOU WANT TO PRINT EVEN NATURAL NUMBER \t");
 scanf("%d",&n);
 for(i=n;i>=1;i--){
    printf("%d \t",2*i);
 }

    return 0;
}




// Q8.Write a program to print squares of the first N natural numbers


#include<stdio.h>
int main()
{
   int i,n;
   printf(" ENTER THE NUMBER OF TIMES YOU WANT TO PRINT \t");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   printf("%d \t",i*i);

   return 0;
}





// Q9. Write a program to print cubes of the first N natural numbers.



#include<stdio.h>
int main()
{
   int i,n;
   printf(" ENTER THE NUMBER OF TIMES YOU WANT TO PRINT \t");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   printf("%d \t",i*i*i);

   return 0;
}


// Q10. Write a program to print a table of N.



#include<stdio.h>
int main()
{
   int i,n;
   printf(" ENTER THE NUMBER YOU WANT THE TABLE OF IT \t");
   scanf("%d",&n);
   for(i=1;i<=10;i++)
   printf(" %d * %d = %d \n",n,i,n*i);

   return 0;
}




































