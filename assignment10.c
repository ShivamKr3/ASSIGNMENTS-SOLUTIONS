

                   /* ASSIGNMENT10 */


// Q1.  Write a function to calculate the area of a circle. (TSRS)



#include<stdio.h>
float area_of_circle(float);
int main()
{
    float radius ;
    float Area;

    printf(" ENTER THE RADIUS OF THE CIRCLE \t");
    scanf("%f",&radius);
    Area = area_of_circle(radius);
    printf(" AREA OF THE CIRCLE IS %.4f",Area);
    return 0;


}

 float area_of_circle(float r){
     
     float area;
     area=3.14*r*r ;

     return area;

   }



// Q2. Write a function to calculate simple interest. (TSRS)


#include<stdio.h>
double simpleinterest(int,int,float);
int main()
{
    int principle,time;
    float rate;
    double si;

    printf(" ENTER THE PRINCIPLE, TIME & RATE ,SEPARATED BY SPACE \t");
    scanf("%d %d %f",&principle,&time,&rate);
    si=simpleinterest(principle,time,rate);
    printf("THE SIMPLE INTEREST OF FOLLOWING DATA IS %.4lf",si);

    return 0;

}


double simpleinterest(int p,int t,float r){
   double SI ;

   SI= (p*t*r)/100;

   return SI;
}







// Q3. Write a function to check whether a given number is even or odd. Return 1 if the 
// number is even, otherwise return 0. (TSRS)


#include<stdio.h>
int chk_even_odd(int);
int main(){

    int num,number;

    printf("ENTER THE NUMBER TO BE CHECK \t");
    scanf("%d",&num);

    number=chk_even_odd(num);
    printf("%d",number);

   return 0;

}

int chk_even_odd(int n){

    if(n&1)
     return 0;
    else 
     return 1;


}







// Q4. Write a function to print first N natural numbers (TSRN)


#include<stdio.h>
void input_natural(int);
int main()
{
    int num;

    printf(" ENTER THE TERM UPTO YOU WANT TO PRINT THE NATURAL NUMBER \t");
    scanf("%d",&num);

    input_natural(num);

    return 0;
}

 void input_natural(int n){
   
   int i;
    for(i=1;i<=n;i++){
        printf("%d \t",i);
    }
 }





// Q5. Write a function to print first N odd natural numbers. (TSRN)



#include<stdio.h>
void input_oddnatural(int);
int main()
{
    int num;

    printf(" ENTER THE TERM UPTO YOU WANT TO PRINT THE ODD NATURAL NUMBER\t");
    scanf("%d",&num);

    input_oddnatural(num);

    return 0;
}

void input_oddnatural(int n){

    int i;

    for(i=1;i<=n;i++){
        printf("%d \t",2*i-1);
    }
     

}






// Q6.Write a function to calculate the factorial of a number. (TSRS)


#include<stdio.h>
int factorial(int);
int main()
{
    int num,fact;

    printf(" ENTER THE NUMBER TO BE FIND FACTORIAL OF IT \t");
    scanf("%d",&num);

    fact=factorial(num);
    printf(" FACTORIAL OF NUMBER IS %d",fact);

    return 0;

}

int factorial(int n){

    int i,f=1;
    //for(i=1;i<=n;i++)
    for(i=n;i>=1;i--)
    f=f*i;
    return f;
}





// Q7. Write a function to calculate the number of combinations one can make from n items 
// and r selected at a time. (TSRS)

#include<stdio.h>
float fact(int);
int main()
{
    int n,r;
    float factorial;

    printf("ENTER THE 'N' ITEMS & ITS 'R' SELECTION \t ");
    scanf("%d %d",&n,&r);
    factorial= (fact(n))/(fact(r)*fact(n-r));

    printf(" NUMBER OF COMBINATION IS %.3f",factorial);

    return 0;
}

float fact(int num){

    int i;
    float f = 1.0;

    for(i=num;i>=1;i--)
     f=f*i;
     
    return f;
}




// Q8. Write a function to calculate the number of arrangements one can make from n items 
// and r selected at a time. (TSRS)



#include<stdio.h>
float fact(int);
int main()
{
    int n,r;
    float factorial;

    printf("ENTER THE 'N' ITEMS & ITS 'R' SELECTION  FOR ARRANGEMENTS \t ");
    scanf("%d %d",&n,&r);
    factorial= fact(n)/fact(n-r);

    printf(" NUMBER OF COMBINATION IS %f",factorial);

    return 0;
}

float fact(int num){

    int i;
    float f = 1.0;

    for(i=num;i>=1;i--)
     f=f*i;
     
    return f;
}




// Q9. Write a function to check whether a given number contains a given digit or not. 
// (TSRS)



#include<stdio.h>
int chk(int,int);
int main(){

    int num,digit;

    printf(" IT PRINT 1 IF NUMBER FOUND OTHERWISW 0 \n");
    printf(" ENTER THE NUMBER TO BE check & ITS DIGIT  \t");
    scanf("%d %d",&num,&digit);
    
    printf("%d",chk(num,digit));

    return 0;
}

int chk(int n,int dig){
    int rem ;
     while(n!=0){
     rem=n%10;
      if(dig==rem)
       {
         return 1;
       }
      n=n/10;
     }

}






// Q10. Write a function to print all prime factors of a given number. For example, if the 
// number is 36 then your result should be 2, 2, 3, 3. (TSRN)



#include<stdio.h>
void prime_fact(int);
int main(){
    
    int num;

    printf("ENTER THE NUMBER , YOU WANT TO PRIME FACTOR OF IT \t");
    scanf("%d",&num);

     prime_fact(num);
    
    return 0;
}
void prime_fact(int n){
  
  int i;

  for (i=2;n>1;i++){
    while(n%i==0){
        printf("%d\t",i);
        n=n/i;
    }
  }


}













