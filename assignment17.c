

//            ASSIGNMENT 17




// Q1. Write a program to calculate the length of the string. (without using built-in method)


#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i,count=0;

    printf("ENTER THE STRING , YOU WANT TO CALCULATE ITS LENGTH \n");
    // scanf("%s",str);
    fgets(str,100,stdin);
    for(i=0;str[i];i++)
    {
        count++;
    }
    printf("THE LENGTH OF THE  STRING IS %d",count);

    return 0;
}




// Q2. Write a program to count the occurrence of a given character in a given string.

#include<stdio.h>
#include<string.h>

int main()
{
    char str[500],ch;
    int i,count=0;


    printf("ENTER THE STRING YOU WANT TO CHECK OCCURENCE OF THE GIVEN CHARACTER \n");
    fgets(str,20,stdin);
    printf("ENTER THE CHARACTER , YOU WANT TO CHECK\n");
    fflush(stdin);
    scanf("%c",&ch);
    for(i=0;str[i];i++){
        if(ch==str[i]){
            count++;
        }
    }
    printf("THE NUMBER OF OCCURENCE IS %d",count);

    return 0;
}


// Q3. Write a program to count vowels in a given string


#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],v[11]="AEIOUaeiou\0";
    int i,j,count=0;
    printf("ENTER THE STRING \n");
    fgets(s,20,stdin);
    for(i=0;s[i];i++){
        for(j=0;v[j];j++){
            if(s[i]==v[j])
            {
                count++;
                break;
            }
             
        }
    }
    printf("THE NUMBER OF VOWELS IN THE GIVEN STRING IS %d",count);

    return 0;
}



// Q4. Write a program to convert a given string into uppercase

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i;

    printf("ENTER THE STRING , YOU WANT TO CHANGE INTO UPPERCASE \n");
    fgets(str,50,stdin);
    for(i=0;str[i];i++)
    {
        if(str[i]>96 && str[i]<123)
         str[i]=str[i]-32;
    }
    printf("%s",str);

    return 0;
}




// Q5. Write a program to convert a given string into lowercase


#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    int l;

    printf("ENTER THE STRING , TO BE CHANGE IN LOWERCASE \n");
    fgets(s,20,stdin);
    for(l=0;s[l];l++){
        if(s[l]>64 && s[l]<91)
        s[l]=s[l]+32;
    }
    printf("%s",s);

    return 0;
}



// Q6. Write a program to reverse a string.


#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    int i,ch,l;

    printf("ENTER THE STRING , YOU WANT TO REVERSE \n");
    fgets(s,30,stdin);
    for(l=0;s[l];l++);// for finding length .
    for(i=0;i<l/2;i++){
        ch=s[i];
        s[i]=s[l-i-1];
        s[l-i-1]=ch;
    }
    printf("THE REVERSE OF THE STRING IS %s",s);

    return 0;
}





// Q7. Write a program in C to count the total number of alphabets, digits and special 
// characters in a string.


#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    int i;

    printf("ENTER THE STRING YOU WANT TO COUNT EVERYTHINGS IN IT \n");
    gets(s);
    for(i=0;s[i];i++);
    printf("%d",i);
    return 0;
}


// Q8. Write a program in C to copy one string to another string.


#include<stdio.h>
#include<string.h>

int main()
{
    char s[50],c[50];
    int i;

    printf("ENTER THE STRING TO BE COPY\n");
    gets(s);
    for(i=0;s[i]!='\0';i++){
        c[i]=s[i];

    }
    c[i]='\0';
    printf("%s",c);

    return 0;
}


// Q9. Write a C program to sort a string array in ascending order.


#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],ch;
    int i,j,k;
    printf("ENTER THE STRING TO BE SORTED \n");
    fgets(str,20,stdin);
    for(i=0;str[i];i++);
    for(j=0;j<i;j++){
        for(k=0;k<i-j-1;k++){
            if(str[k]>str[k+1]){
                ch=str[k];
                str[k]=str[k+1];
                str[k+1]=ch;
            }
        }

    }
    printf("%s",str);

    return 0;
}



// Q10. Write a program in C to Find the Frequency of Characters.



#include<stdio.h>
#include<string.h>
int main()
{
    char s[500];
    int i,a[256]={0};
    printf("ENTER THE STRING \n");
    gets(s);
    for(i=0;s[i]!='\0';i++){
        a[s[i]]++;
    }
    for(i=0;i<256;i++){
        if(a[i]!=0)
         printf("%c --> %d\n",i,a[i]);
    }

    return 0;
}

















































