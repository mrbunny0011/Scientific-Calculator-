#include<iostream>
#include<cmath>
using namespace std;    

//  Abdul Basit ( BSCS : D) Roll No 26,

 
int sum(int a,int b );
int subt(int a,int b);
int multi(int a,int b);
float division (float a, float b);
float rem(float a, float b);
int main()
{
 int a,b,c, choice;
char op;
string ope;
while(true){
 cout<<"Which one would you like to use? 1 : simple calculator function , 2 : scientific function. : ";  
   cin>>choice;
   switch(choice)
  { case 1:
       {cout<<"Enter your number: ";
       cin>>a;
      cout<<"Enter your number: ";
       cin>>b;}
      cout<<"Enter your operater (+,-,*,/,%) : ";
       cin>>op;
    switch(op)
    {
    
    case '+':
    { int add;
      add=sum(a,b);
    cout<<"sum of values.  : "<<add<<endl;
    break;}
    case '-':
    { int sub;
    sub=subt(a,b) ;
     cout<<"subtraction of values.   : "<<sub<<endl;
    break;
    }
    case '*':
    {int mul;
    mul=multi(a , b);
    cout<<"multiplication.   : "<<mul<<endl;
    break;
    }
    case '/' :
     { float div;
    div=division (a,b);
    cout<<"division.   : "<<div<<endl;
    break;
     } 
    case '%' :
    { float re;
    re= rem(a,b);
    cout<<"reminder valuere.  :"<<endl;
    break;
    }
    } cout<<"_____________________________________"<<endl;
     break;
   case 2:
     {
  cout<<"enter your number  : ";
  cin>>a;
  cout<<"enter your operater (log,sqrt,): ";
  cin>>ope;
    if(ope=="log"){
    cout<<"logarithm of your number.  : "<<log(a)<<endl;
    }
    else if(ope=="sqrt"){
    cout<<"square of root of your value.   : "<<sqrt(a)<<endl;
    }
    cout<<"___________________________________"<<endl;
      }
   }
 }
}
// for sum ......!!!........
int sum(int a,int b )
{
   return a+b;

}



//. for subtraction.....!!!.....
int subt(int a,int b)
{
 return a-b;
}

//  for multiplication....!!!....
int multi(int a,int b){

return a*b;
}

//. for division ... !!! ....
    
float division (float a, float b)
{
 return a/b;

}
float rem(float a, float b)
{
 return fmod(a,b);
}