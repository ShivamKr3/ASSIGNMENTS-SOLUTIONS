

            /* ASSIGNMENT 4 */


// Q1.  Write a program to print MySirG 5 times on the screen


#include<stdio.h>
int main()
{
    int i=0;

    while(i<5){
    printf(" MySirG \n");
    i++;
    }
    return 0;
}


// Q2. Write a program to print the first 10 natural numbers.

#include<stdio.h>
int main()
{
    int i=1;
    while(i<=10){
    printf("%d  \t ",i);
    i++;
    }
    return 0;
}


// Q3. Write a program to print the first 10 natural numbers in reverse order


#include<stdio.h>
int main()
{
    int i=10;

    while(i!=0){
        printf("%d  \t",i);
        i--;
    }

    return 0;
}


// Q4.. Write a program to print the first 10 odd natural numbers.

#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=19;i++){
        if(i%2 != 0)
         printf("%d \t",i);
    }
    return 0;
}


// Q5. Write a program to print the first 10 odd natural numbers in reverse order.



#include<stdio.h>
int main()
{
    int i;
    for(i=19;i>=1;i--){
        if(i%2 != 0)
         printf("%d \t",i);
    }
    return 0;
}


// Q6. Write a program to print the first 10 even natural numbers.

#include<stdio.h>
int main()
{
    int i=2;

    while(i<=20){
     if(i%2==0)
      printf("%d \t",i);
      i++;
    }

    return 0;
}



// Q7.Write a program to print the first 10 even natural numbers in reverse order


#include<stdio.h>
int main()
{
    int i=20;

    while(i>=2){
     if(i%2==0)
      printf("%d \t",i);
      i--;
    }

    return 0;
}



// Q8. Write a program to print squares of the first 10 natural numbers.

#include<stdio.h>
int main()
{
   int i=1;

   while(i<=10){
    printf("%d \t",i*i);
    i++;
   }

    return 0;
}



// Q9.Write a program to print cubes of the first 10 natural numbers.



#include<stdio.h>
int main()
{
   int i=1;

   while(i<=10){
    printf("%d \t",i*i*i);
    i++;
   }

    return 0;
}




// Q10. Write a program to print a table of 5.

#include<stdio.h>
int main()
{

    int i;

    for(i=1;i<=10;i++)
    printf(" %d * %d = %d \n",5,i,5*i);

    return 0;
}





















