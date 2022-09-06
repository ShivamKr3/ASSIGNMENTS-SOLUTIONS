   

                    /* ASSIGNMENT 6 */



// Q1. Write a program to calculate sum of first N natural numbers.

#include<stdio.h>
int main()
{
    int i,n,sum=0;

    printf(" ENTER THE NUMBER OF  TIMES YOU WANT TO SUM \t");
    scanf(" %d",&n);
    for(i=1;i<=n;i++)
    sum=sum+i;
    printf(" SUM OF FIRST  NATURAL NUMBER IS  %d \n ",sum);

    return 0;
}



// Q2.Write a program to calculate sum of first N even natural numbers.



#include<stdio.h>
int main()
{
    int i,n,sum=0;

    printf(" ENTER THE NUMBER OF  TIMES YOU WANT TO SUM OF EVEN NATURAL NUMBER  \t");
    scanf(" %d",&n);
    for(i=1;i<=n;i++)
    sum=sum+2*i;
    printf(" SUM OF FIRST EVEN  NATURAL NUMBER IS  %d \n ",sum);

    return 0;
}



// Q3. Write a program to calculate sum of first N odd natural numbers




#include<stdio.h>
int main()
{
    int i,n,sum=0;

    printf(" ENTER THE NUMBER OF TIMES YOU WANT TO SUM OF ODD NATURAL NUMBER  \t");
    scanf(" %d",&n);
    for(i=1;i<=n;i++)
    sum=sum+2*i-1;
    printf(" SUM OF FIRST ODD  NATURAL NUMBER IS  %d \n ",sum);

    return 0;
}


// Q4.Write a program to calculate sum of squares of first N natural numbers



#include<stdio.h>
int main()
{
    int i,n,sum=0;

    printf(" ENTER THE NUMBER OF TIMES YOU WANT TO SUM OF SQUARE OF NATURAL NUMBER  \t");
    scanf(" %d",&n);
    for(i=1;i<=n;i++)
    sum=sum+i*i;
    printf(" SUM OF SQUARE OF FIRST N  NATURAL NUMBER IS  %d \n ",sum);

    return 0;
}




// Q5 Write a program to calculate sum of cubes of first N natural numbers.




#include<stdio.h>
int main()
{
    int i,n,sum=0;

    printf(" ENTER THE NUMBER OF TIMES YOU WANT TO SUM OF CUBES OF NATURAL NUMBER  \t");
    scanf(" %d",&n);
    for(i=1;i<=n;i++)
    sum=sum+i*i*i;
    printf(" SUM OF CUBES OF FIRST N  NATURAL NUMBER IS  %d \n ",sum);

    return 0;
}



// Q6.Write a program to calculate factorial of a number.



#include<stdio.h>
int main()
{
    int i,fact=1,n;

    printf(" ENTER THE NUMBER , YOU WANT TO FACTORIAL OF IT \t");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    fact=fact*i;
    printf(" FACTORIAL OF THE NUMBER %d  IS  %d \n",n,fact);

    return 0;
}





// Q7.Write a program to count digits in a given number.



#include<stdio.h>
int main()
{
    int i,count=0,num;

    printf(" ENTER THE NUMBER YOU WANT TO COUNT DIGIT OF IT \t");
    scanf("%d",&num);
    while(num!=0){
        num/=10;
        count++;
        
    }
    printf(" THE NUMBER OF DIGIT IN THE NUMBER IS %d \n",count);

    return 0;
}






// Q8.Write a program to check whether a given number is a Prime number or
// not.


#include<stdio.h>
int main()
{
    int num,i;
    printf("ENTER THE NUMBER TO BE CHECK FOR PRIME \t");
    scanf("%d",&num);
    for(i=2;i<=num-1;i++)
    {
        if(num%i==0)
         break;
    }

    if(num==i)
     printf(" NUMBER IS PRIME ");
    else
     printf(" NUMBER IS NOT PRIME ");

   return 0;
}






// Q9. Write a program to calculate LCM of two numbers.



#include<stdio.h>
int main()
{
    int a,b,l;

    printf("ENTER TWO NUMBER TO CALCULATE LCM OF IT \n");
    printf(" ENTER THE VALUE BY SEPARATED SPACE BETWEEN THEM ");
    scanf("%d %d",&a,&b);

    for(l=a>b?a:b;l<=a*b;l++){// we can also write l=l+(a>b?a:b) in place of l++ .
        if(l%a==0 && l%b==0)
        break;
       }
    
    printf(" LCM OF THE TWO NUMBER IS %d \n",l);

    return 0;
}




// Q10.Write a program to reverse a given number.


#include<stdio.h>
int main()
{
    int num,rem,rev=0;

    printf(" ENTER THE NUMBER TO BE REVERSE OF IT \t");
    scanf(" %d",&num);

    while(num!=0)
    {
        rem=num%10;
        num/=10;
        rev=rev*10+rem;

    }
    printf(" THE NUMBER AFTER REVERSE IS %d \n",rev);

    return 0;
}






































