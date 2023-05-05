// Increment and Decrement Operator
             //   y=++x   pre-increment
             //  y=x++     post-increment
             
//                    Decrement 
 //                y=--x   pre-decrement
 //                y=x--     post-decrement
 #include<iostream>
using namespace std;
int main ()
{  
int x=10;
int y=(++x)++;  //++(++x);// ++x;  x++
cout<<y<<endl;
cout<<x;
return 0;

}

// operator ++ can not apply to value or constant
