   

//                      ASSIGNMENT 14 

// Q1.Write a program to calculate the sum of numbers stored in an array of size 10. Take
// array values from the user.



#include<stdio.h>
int main()
{

    int arr[10],i,sum=0,n=10;

    printf("ENTER THE 10 NUMBERS,PLEASE ENTER TEN VALUES \t");
    for(i=0;i<n;i++){
    scanf("%d ",&arr[i]);
    }
    for(i=0;i<n;i++){
    sum=sum+arr[i];
    }
    printf("THE SUM OF TEN NUMBERS IS %d",sum);

    return 0;


}



// Q2.Write a program to calculate the average of numbers stored in an array of size 10.
// Take array values from the user.


#include<stdio.h>
int main()
{
    int arr[10],i,sum=0,n=10;
    float avg;

    printf("ENTER THE TEN VALUES, PLEASE ENTER TEN VALUES\t");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+arr[i];
    }
    avg=sum/10.0;

    printf("THE AVERAGE OF TEN NUMBER IS %.4f",avg);
    return 0;
}



// Q3. Write a program to calculate the sum of all even numbers and sum of all odd
// numbers, which are stored in an array of size 10. Take array values from the user.



#include<stdio.h>
int main()
{
    int arr[10],i,n=10,oddsum=0,evensum=0;
    printf("ENTER THE TEN VALUES , YOU WANT TO ODD & EVEN SUM OF IT \t");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
      if(arr[i]%2==0){
        evensum=evensum+arr[i];
     }
      else{
        oddsum=oddsum+arr[i];
     }
    
    }
    printf("THE SUM OF EVEN & ODD NUMBER IS %d %d",evensum,oddsum);

    return 0;
}



// Q4.Write a program to find the greatest number stored in an array of size 10. Take array
// values from the user.


#include<stdio.h>
int main()
{
    int arr[10],i,max,n=10;
    printf("ENTER THE TEN VALUES STORE IN THE ARRAY\t");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
         
    }
    printf("THE GREATEST NUMBER IN THE ARRAY IS %d",max);


    return 0;
}


// Q5.Write a program to find the smallest number stored in an array of size 10. Take array
// values from the user.



#include<stdio.h>
int main()
{
    int arr[10],i,n=10,min;

    printf("ENTER THE TEN NUMBER YOU WANT TO FIND SMALLEST \t");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("THE SMALLEST NUMBER IS %d",min);
    return 0;
}



// Q6. Write a program to sort elements of an array of size 10. Take array values from the
// user.



#include<stdio.h>
int main()
{
    int arr[10],i,n=10,l,j;

    printf("ENTER THE TEN VALUES \t");
    for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
          if(arr[j]>arr[j+1]){
          l=arr[j];
          arr[j]=arr[j+1];
          arr[j+1]=l;
        }
        }

    }
    for(i=0;i<n;i++)
    printf("%d \t",arr[i]);

    return 0;
}




// Q7. Write a program to find second largest in an array.Take array values from the user.



#include<stdio.h>
int main()
{
    int arr[1000],i,n,max,sec_max;

    printf("ENTER THE VALUES FROM USER , HOW MUCH NUMBER YOU WANT TO PRINT \t");
    scanf("%d",&n);
    printf("ENTER THE VALUES IN THE ARRAY \t");
    for(i=0;i<n;i++){
      scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>max){
            sec_max=max;
            max=arr[i];
        }
    }
    printf("THE SECOND MAX VALUE IS %d",sec_max);

    return 0;
}


// Q8. Write a program to find the second smallest number in an array.Take array values
// from the user.



#include<stdio.h>
int main()
{
    int arr[1000],i,n,min,sec_min;

    printf("ENTER THE VALUES FROM USER , HOW MUCH NUMBER YOU WANT TO PRINT \t");
    scanf("%d",&n);
    printf("ENTER THE VALUES IN THE ARRAY \t");
    for(i=0;i<n;i++){
      scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]<min){
            sec_min=min;
            min=arr[i];
        }
    }
    printf("THE SECOND MIN VALUE IS %d",sec_min);

    return 0;
}



// Q9. Write a program in C to read n number of values in an array and display it in reverse
// order. Take array values from the user.



#include<stdio.h>
int main()
{
    int arr[1000],i,n,temp;

    printf("ENTER THE NUMBER OF VALUES IN YOUR ARRAY HAVE\t");
    scanf("%d",&n);
    printf("ENTER THE VALUE IN THE ARRAY \t");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    for(i=0;i<n;i++){
    printf("%d \t",arr[i]);
    }
    return 0;
}



// Q10.Write a program in C to copy the elements of one array into another array.Take array
// values from the user.


#include<stdio.h>
int main()
{
    int a[100],i,n,b[100];

    printf("ENTER HOW MANY VALUES YOU WANT TO PRINT\t");
    scanf("%d",&n);
    printf("ENTER THE ARRAY ELEMENTS \t");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        b[i]=a[i];
    }
    for(i=0;i<n;i++){
    printf("%d \t",b[i]);
    }
    return 0;
}














