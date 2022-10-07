

                //   ASSIGNMENT 23

        //   Basics of C++


// Q1. Write a C++ program to print Hello MySirG on the screen.

#include<iostream>
using namespace std;

int main()
{
        cout<<"Hello MySirG";

        return 0;
}



// Q2.  Write a C++ program to print Hello on the first line and MySirG on the second line
// using endl.

#include<iostream>
using namespace std;

int main()
{
        cout<<" Hello" <<endl;
        cout<<"MySirg";

        return 0;
}




// Q3.  Write a C++ program to calculate the sum of two numbers.


#include<iostream>
using namespace std;

int main()
{
        int a,b;
        cout<<"ENTER THE NUMBERS YOU WANT TO ADD OF IT "<<endl;
        cin>> a >> b;
        int c=a+b;
        cout<<"THE SUM OF TWO NUMBER IS "<< c ;
        return 0;
}



// Q4.  Write a C++ program to calculate the area of a circle.

#include<iostream>
using namespace std;

int main()
{
        int r;
        cout<<"ENTER THE RADIUS OF THE CIRCLE"<<endl;
        cin>>r;
        float area= 3.14*r*r;
        cout<< " AREA OF THE CIRCLE IS "<<area;
        return 0;
}



// Q5.  Write a C++ program to calculate the volume of a cuboid.

#include<iostream>
using namespace std;

int main()
{

        int l,b,h;
        cout<<"ENTER THE LENGTH , BREADTH , HEIGHT OF THE CUBOID, by providing space "<<endl;
        cin>>l>>b>>h;
        double volume=l*b*h;
        cout<<"THE VOLUME OF THE CUBOID IS "<<volume;

        return 0;
}



// Q6.  Write a C++ program to calculate an average of 3 numbers.


#include<iostream>
using namespace std;

int main()
{
        float a,b,c;
        cout<<"ENTER THE THREE NUMBER TO BE FIND AVERAGE OF IT , PROVIDING SPACE BETWEEN THEM "<<endl;
        cin>>a>>b>>c;
        double avg=(a+b+c)/3;
        cout<<"THE AVERAGE OF THREE NUMBER IS "<<avg;

        return 0;
}


// Q7. Write a C++ program to calculate the square of a number.

#include<iostream>
using namespace std;
int main()
{
        int num;
        cout<<"ENTER THE NUMBER TO BE CALCULATED SQUARE OF IT"<<endl;
        cin>>num;
        float square =num*num;
        cout<<"THE SQUARE OF THE NUMBER IS "<<square;

        return 0;
}


// Q8.  Write a C++ program to swap values of two int variables without using third variable


#include<iostream>
using namespace std;

int main()
{
        int a,b;
        cout<<"ENTER THE TWO VALUES TO BE SWAP , provide space between them "<<endl;
        cin>>a>>b;
        a=a+b;
        b=a-b;
        a=a-b;
        cout<<"AFTER SWAPPING NUMBER BE LIKE "<<a<<" "<<b;
     return 0;
}


// Q9.  Write a C++ program to find the maximum of two numbers.


#include<iostream>
using namespace std;
int main()
{
        int a,b;
        cout<<"ENTER TWO NUMBER TO BE FIND MAXIMUM OF THAT, providing space between them  "<<endl;
        cin>>a>>b;
        int max=a>b?a:b;
        cout<<"MAXIMUM OF TWO NUMBER IS "<<max;

        return 0;
}


// Q10.  Write a C++ program to add all the numbers of an array of size 10.

#include<iostream>
using namespace std;
int main()
{
        int n,a[50],i,sum=0;
        cout<<"ENTER THE NUMBER OF VALUE "<<endl;
        cin>>n;
        cout<<"ENTER THE ARRAY ELEMENTS VALUE ONE BY ONE "<<endl;
        for(i=0;i<n;i++){
                cin>>a[i];
        }
        for(i=0;i<n;i++){
                sum=sum+a[i];
        }
        cout<<"THE SUM OF ELEMENTS IS "<<sum;


        return 0;
}









