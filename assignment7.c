
                        /*   ASSIGNMENT 7   */
                        
                
// 1. Write a program to find the Nth term of the Fibonnaci series.

#include<stdio.h>
int main()
{
    int a=-1,b=1,c,n,i;
    printf(" ENTER THE TERM TO BE FIND OF FIB. SERIES \t");
    scanf("%d",&n);
    c=a+b;
    for(i=0;i<n;i++){
    a=b;
    b=c;
    c=a+b;
    }
    printf("THE %d TERM OF THE FIBONACCI SERIES IS %d ",n,c);

    return 0;


}


// 2. Write a program to print first N terms of Fibonacci series.



#include<stdio.h>
int main()
{
    int a=-1,b=1,c,n,i;
    printf(" ENTER THE TERM UPTO PRINT THE FIBONACCI SERIES \t");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    c=a+b;
    printf(" %d \t",c);
    a=b;
    b=c;
    }
    return 0;
  
}



// 3. Write a program to check whether a given number is there in the Fibonacci series or not.

#include<Stdio.h>
int main()
{
    int a=0,b=1,c=0,i,num;
    printf(" ENTER THE NUMBER TO BE CHECK FOR FIBONACCI SERIES \t");
    scanf("%d",&num);
    // while(c<=num){
     for(i=0;1;i++){
      c=a+b;
      a=b;
      b=c;
      if(c==num)
      {
        printf(" FOUND ");
        break;
      }

      if(c>num)
      {
        printf("NOT FOUND ");
        break;
      }
     }
     
    return 0;

}




// 4. Write a program to calculate HCF of two numbers.


#include<stdio.h>
int main()
{ 
    int a,b,i,min;
    printf(" ENTER THE TWO NUMBER TO FIND HCF OF IT, ENTER THE VALUES BY SEPARATED SPACE BETWEEN THEM . \t");
    scanf("%d %d",&a,&b);
    min=a<b?a:b;
    for(i=min;i>=1;i--){
        if(a%i==0 && b%i==0)
         break;
    }
     printf("THE VALUE OF THE HCF IS %d ",i);

   return 0;

}




// 5. Write a program to check whether two given numbers are co-prime numbers or not.



#include<stdio.h>
int main()
{
  int a,b,i,min;
  printf(" ENTER THE VALUE TWO NUMBER BY SEPARATED SPACE BETWEEN THEM \t");
  scanf(" %d %d",&a,&b);
  min=a<b?a:b;
  for(i=2;i<min;i++){
    if(a%i==0 && b%i==0)
     break;
  }
  if(i==min)
   printf(" CO PRIME ");
  else 
   printf("NOT CO PRIME ");

  return 0;

}






// 6. Write a program to print all Prime numbers under 100.


#include<stdio.h>
int main()
{
  int i,j;
  for(i=1;i<=100;i++){
    for(j=2;j<i;j++){
      if(i%j==0)
       break;
    }
    if(i==j)
     printf("%d \t ",i);
  }
  return 0;
}



// 7. Write a program to print all Prime numbers between two given numbers.


#include<stdio.h>
int main()
{
  int i,j,l,u;
  printf("ENTER THE TWO VALUES FOR , PROVIDE BY SEPARATED SPACE BETWEEN THEM \t");
  scanf("%d %d",&l,&u);
  for(i=l+1;i<=u-1;i++){
    for(j=2;j<i;j++){
      if(i%j==0)
       break;
    }
    if(i==j)
     printf("%d \t ",i);
  }
  return 0;
}




// 8. Write a program to find next Prime number of a given number.


#include<stdio.h>
int main()
{
    int num,i,j,n;
    printf(" ENTER THE NUMBER TO BE FIND NEXT PRIME OF IT \t");
    scanf("%d",&num);
    for(i=num;1;i++){
        n=0;
        for(j=2;j<=i/2;j++){
            if(i%j==0)
             n=1;
        }
        if(n==0){
            printf("%d",i);
            break;
        }
        
    }
   return 0;

}




// 9. Write a program to check whether a given number is an Armstrong number or not.

#include<math.h>
#include<stdio.h>
int main()
{
  int i,num,rem,n=0,temp,sum=0,org;
  printf(" ENTER THE NUMBER TO BE CHECK FOR ARMSTRONG \t");
  scanf("%d",&num);
  temp=num;
  org=num;
  while(num!=0){
    num/=10;
    n++;
  }
  num=org;
  while(num!=0){
    rem=num%10;
    sum=sum+pow(rem,n);
    num/=10;
  }
  if(sum==temp)
   printf(" ARMSTRONG NUMBER");
  else 
   printf("NOT ARMSTRONG NUMBER ");

  return 0;


}




// 10. Write a program to print all Armstrong numbers under 1000.




#include <math.h>
#include <stdio.h>

int main() {
   int num,t1,t2,rem,n=0;
   int result = 0;
    
   for(num=1;num<=1000;num++){
    t1=num;
    t2=num;
    while(t1 != 0){// while(num!=0)
      t1=t1/10;
      ++n;
    }
    while(t2 != 0){
      rem=t2%10;
      result+=pow(rem,n);
      t2/=10;
    }
    // num=i;
    if(result==num){
      printf(" %d \t",num);
    }
    result=0;
    n=0;
   }

   return 0;
}

















