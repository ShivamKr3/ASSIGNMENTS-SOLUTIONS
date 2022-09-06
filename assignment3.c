

            /*  ASSIGNMENT 3  */


// Q1. Write a program to check whether a given number is positive or non-positive


#include<stdio.h>
int main()
{
    int num ;
    printf(" ENTER THE NUMBER TO BE CHECK \t");
    scanf(" %d",&num);
    if(num>=0)
      printf(" NUMBER IS POSITIVE %d ",num);
    else
      printf("NUMBER IS NEGATIVE %d ",num);  

    return 0;
}




// Q2. Write a program to check whether a given number is divisible by 5 or not


#include<stdio.h>
int main()
{
  int num,unit ;
  printf(" ENTER THE NUMBER TO BE DIVISIBILTY FOR FIVE \t");
  scanf("%d",&num);
  unit=num%10;
   if(unit==0||unit==5)
     printf(" DIVISIBLE BY 5 ");
   else
     printf(" NOT DIVISIBLE BY 5");

  return 0;    

}


/* Q3. Write a program to check whether a given number is an even number or an odd 
number */


#include<stdio.h>
int main()
{
  int num;
  printf(" ENETR THE NUMBER TO BE CHECK \t");
  scanf("%d",&num);
  if(num%2==0)
    printf(" NUMBER IS EVEN ");
  else 
    printf(" NUMBER IS ODD ");
 
  return 0;
}



/* Q4. Write a program to check whether a given number is an even number or an odd 
number without using % operator.*/

#include<stdio.h>
int main()
{
 int num;
 printf(" ENTER THE NUMBER TO BE CHECK \t");
 scanf("%d",&num);
 if(num&1)
  printf(" ODD NUMBER ");
 else 
  printf(" EVEN NUMBER ");
 
 return 0;

}



// Q5. Write a program to check whether a given number is a three-digit number or not.

#include<stdio.h>
int main()
{
    int num,count=0;
    printf(" ENTER THE NUMBER YOU WANT TO CHECK OF THREE DIGIT OR NOT \t");
    scanf("%d",&num);
    while(num!=0){
        num/=10;
        count++;
    }
    if(count==3)
     printf(" 3 DIGIT NUMBER ");
    else
     printf(" NOT 3 DIGIT NUMBER ");
    
    return 0;
}



/* Q6. Write a program to print greater between two numbers. Print one number of both are 
the same.*/


#include<stdio.h>
int main()
{
    int a ,b;
    printf(" ENTER THE TWO NUMBER : \t");
    scanf("%d%d",&a,&b);
    if(a>b)
     printf(" BIGGER NUMBER IS %d",a);
    else
     printf(" BIGGER NUMBER IS %d",b);

    return 0;
}


/* Q7. Write a program to check whether roots of a given quadratic equation are real & 
distinct, real & equal or imaginary roots . */


#include<stdio.h>
int main()
{
    int a,b,c,D;
    printf("ENTER THE COEFFICIENT OF X^2 AS a , COEFFICIENT OF X AS b AND A CONSTANT TERM \t");
    printf("\n PLEASE SEPARATE THE VALUE BY  SPACE \n");
    scanf(" %d %d %d",&a,&b,&c);
    D=b*b-4*a*c;
    if(D>0)
     printf(" ROOTS ARE REAL & DISTINCT ");
    else{
        if(D<0)
         printf(" ROOTS ARE IMAGINARY");
        else 
         printf(" ROOTS ARE EQUAL ");

    } 
    return 0;
}




// Q8. Write a program to check whether a given year is a leap year or not.


#include<stdio.h>
int main()
{
    int year ;

    printf(" ENTER THE YEAR YOU  WANT TO CHECK FOR LEAP \t");
    scanf("%d",&year);
    if((year%4==0 && year%100!=0) || (year%400==0))
     printf( " YEAR IS LEAP ");
    else 
     printf(" YEAR IS NOT LEAP ");     
    return 0;
}


/* Q9. Write a program to find the greatest among three given numbers. Print number once 
if the greatest number appears two or three times.*/


#include<stdio.h>
int main()
{
    int a,b,c;
    printf(" ENTER THE THREE NUMBER TO BE CHECK \n ");
    printf("ENTER THE NUMBER BY GIVING  SPACE  BETWEEN THEM \n");
    scanf(" %d %d %d",&a,&b,&c);
    if(a>=b)
     printf(" BIGGER NUMBER IS %d",a);
    else{
     if(b>=c)
      printf("BIGGER NUMBER IS %d",b);
     else
      printf(" BIGGER NUMBER IS %d",c);
    }
    return 0;
}



/*Q10. . Write a program which takes the cost price and selling price of a product from the 
user. Now calculate and print profit or loss percentage. */

#include<stdio.h>
int main()
{
    float cp,sp;

    printf(" ENTER THE COST & SELLING PRICE OF THE ITEMS \n");
    printf("ENTER THE VALUES BY SEPARATING SPACE BETWEEN THEM \n");
    scanf(" %ld %ld",&cp,&sp);
    if(sp>cp)
     printf("PRODUCT IS SOLD AT PROFIT %f ", ((sp-cp)/cp)*100);
    else
     printf("PRODUCT IS SOLD AT LOSS %f ", ((cp-sp)/cp)*100);
    
    return 0;

}



/* Q11. Write a program to take marks of 5 subjects from the user. Assume marks are given 
out of 100 and passing marks is 33. Now display whether the candidate passed the 
examination or failed.*/

#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5;
    printf("ENTER THE MARKS BY SEPARATING THE VALUES BY SPACE , ACCORDING TO SUBJECT S1 ,S2, S3 ,S4 ,S5 \n");
    scanf(" %d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    if(s1>33 && s2>33 && s3>33 && s4>33 && s5>33 )
     printf(" PASS");
    else 
     printf(" FAILED");

    return 0;
}



/* Q12. Write a program to check whether a given alphabet is in uppercase or lowercase.*/

#include<stdio.h>
int main()
{
    char alpha;
    printf("WRITE ANY ALPHABET \t");
    scanf("%c",&alpha);
    if(alpha>64 && alpha<91)
     printf("UPPERCASE");
    else
    printf(" LOWERCASE");

    return 0;
}


/* Q13. Write a program to check whether a given number is divisible by 3 and divisible by 2.*/


#include<stdio.h>
int main()
{
    int num ;
    printf(" ENTER THE NUMBER TO CHECK DIVISIBILITY FOR 3 & 2 \n");
    scanf(" %d",&num);
    if(num%3==0  &&  num%2==0)
     printf(" NUMBER IS DIVISBLE ");
    else
     printf("NUMBER IS NOT DIVISIBLE ");
    return 0;

}


/* Q14. Write a program to check whether a given number is divisible by 7 or divisible by 3. */

#include<stdio.h>
int main()
{
    int num;
    printf("ENTER THE NUMBER TO BE DIVISIBILITY OF 7 OR 3  \n ");
    scanf(" %d",&num);
    if(num%7==0 || num%3==0)
     printf(" DIVISIVLE ");
    else 
     printf("NOT DIVISIBLE  ");

    return 0;
}



/*Q15 . Write a program to check whether a given number is positive, negative or zero.*/


#include<stdio.h>
int main()
{
    int num;
    printf(" ENTER THE NUMBER TO BE CHECK \t");
    scanf(" %d",&num);
    if(num>0)
     printf(" POSITIVE NUMBER  ");
    else 
     if(num==0)
      printf("NUMBER EQUALS TO  ZERO ");
     else
      printf(" NEGATIVE NUMBER ");
      
    return 0;
}



/* Q16. Write a program to check whether a given character is an alphabet (uppercase), an 
alphabet (lower case), a digit or a special character. */


#include<stdio.h>
int main() 
{
    char chk;
    printf(" ENTER CHARACTER OR DIGIT OR SPECIAL CHARACTER \t ");
    scanf(" %c",&chk);
    if(chk>64 && chk<91)
     printf(" UPPERCASE ALPHABET ");
    else 
     if(chk>97 && chk<122)
      printf(" LOWERCASE ALPHABET");
     else
      printf(" SPECIAL CHARACTER OR DIGITS ");

    return 0;
}



/* Q17. Write a program which takes the length of the sides of a triangle as an input. Display 
whether the triangle is valid or not. */

#include<stdio.h>
int main()
{
    int s1,s2,s3;
    printf(" ENTER THE THREE SIDES OF THE TRIANGLE, SEPARATED BY SPACE  \n ");
    scanf(" %d %d %d",&s1,&s2,&s3);
    if((s1+s2>=s3) && (s2+s3>=s1) && (s3+s1>=s2))
     printf(" TRIANGLE IS VALID ");
    else 
     printf(" TRIANGLE IS NOT VALID ");

    return 0;
}



/* Q18. Write a program which takes the month number as an input and display number of 
days in that month.*/

#include<stdio.h>
int main()
{
    int num;
    printf(" PLEASE ENTER THE MONTH VALID MONTH NUMBER \t ");
    scanf(" %d",&num);
    if(num==4 || num==6 || num==9 || num==11)
     printf(" NUMBER OF DAYS IN MONTH IS 30 IN THIS  MONTH  ");
    else{
        if(num==2)
         printf(" NUMBER OF DAYS IS 28/29");
        else
         printf(" NUMBER OF DAYS IS 31 IN THIS MONTH ") ;
      }

    return 0;
}







































