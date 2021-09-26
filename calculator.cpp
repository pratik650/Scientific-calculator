#include<bits/stdc++.h>
#include<cmath>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<iostream>
#define new_cal 1;
#define old_cal 0;
//typedef long  int int64;
using namespace std;

class stand_cal
{
public:
static double addition(double,double);
static double subtraction(double,double);
static double multiplication(double,double);
static double division(double,double*);
static double modulus(double*,double*);
};

class scien_cal{
    public:
      static double square(double);
static double cube(double);
static double power(double,double);
static double sq_root(double);
static long int fact(double);
static double sin_func(double);
static double cos_func(double);
static double tan_func(double);
};

double stand_cal::addition(double a, double b){
    return(a+b);
}

double stand_cal::subtraction(double a, double b){
    return(a-b);
}

double stand_cal::multiplication(double a, double b){
    return(a*b);
}

double stand_cal::division(double a, double *b){
    while(*b==0){
        cout<<endl<<"cannot divide by zero" ;
        cout<<endl<<"enter the second number again: ";
        cin>>*b;
    }
    return (a/(*b));
}      

double stand_cal::modulus(double *a, double *b){
    while(*b==0){
        cout<<endl<<"cannot divide by zero" ;
        cout<<endl<<"enter the second number again: ";
        cin>>*b;
    }
    int x=(int)*a;
    int y=(int)*b;
    if(*a-x>0 || *b-y>0){
        cout<<endl<<"coverting decimal into integer to perform modulus";
    }
    *a=x;
    *b=y;

    return(x%y);
    
    }

    double scien_cal::square(double x){
        return  (pow(x,2));
    } 
    double scien_cal::cube(double x){
        return (pow(x,3));
    }     
    double scien_cal::power(double x,double y){
        return (pow(x,y));
    }

   double scien_cal::sq_root(double x){
        return (sqrt(x));
    }

  long int scien_cal::fact(double x){
        int n=(int)x;
        long int  f=1;
        while(n>1){
            f*=n;
            n--;
        }
        return f;
    }
double scien_cal::sin_func(double x){
        return (sin(x));
    }
double scien_cal::cos_func(double x){
        return (cos(x));
    }
  double scien_cal::tan_func(double x){
        return (tan(x));
    }
    int main(){
        double num1,num2,num3,num4,temp;
        int choice1=0,choice2,flag;

        do{
           // clrscr();      here here here
            cout<<"======/Calculator Type:======";
            cout<<endl<<"(1)Standard Calculator"<<endl<<"(2)scientific Calculator"<<endl<<"(3)Quit"<<endl;
            cin>>choice1;
            flag = 1;


switch(choice1){

  case 1:
    do{
    cout<<"Standard Calculator";
    cout<<"\n1\t Addition\n2\tSubtraction \n3\t Multiplication \n4\t Division \n5\t Modulus \n6\t Return to previous menu\n7\t Quit ";
    if(flag==0)
        cout<<"\n8\t Clear Memory"<<endl;
        cout<<"\nChoose the type of calculation: ";
        cin>>choice2;
    
        
switch(choice2){
            case 1:
            if(flag==1){
                cout<<"\nEnter first number: ";
                cin>>num1;
            }
            else {
                num1=temp;
                cout<<"\nFirst numbere is "<<num1<<endl;
            }
            cout<<"Enter second number: ";
            cin>>num2;

            num3=stand_cal::addition(num1,num2);
            cout<<"\nAddition of "<<num1<<" and "<<num2<<" is "<<num3<<endl;
            cout<<"\npress any key to continue..........."<<endl;
            temp=num3;
            flag=old_cal;
            break;

            case 2:
            if(flag==1){
                cout<<"\nEnter first number: ";
                cin>>num1;
            }
            else {
                num1=temp;
                cout<<"\nFirst number is"<<num1<<endl;
            }
            cout<<"Enter second number: ";
            cin>>num2;

            num3=stand_cal::subtraction(num1,num2);
            cout<<"\nSubtraction of "<<num2<<" from "<<num1<<" is "<<num3<<endl;
            cout<<"\nPress any key to continue......."<<endl;
            getch();
            temp=num3;
            flag=0; break;


            case 3:
            if(flag==1){
                cout<<"Enter first number: ";
                cin>>num1;
            }
            else {
                num1=temp;
                cout<<"\nFirst number is: "<<num1<<endl;
            }
            cout<<"Enter second number ";
            cin>>num2;
            num3=stand_cal::multiplication(num1,num2);
            cout<<"\nMultiplication of "<<num1<<" by "<<num2<<"is"<<num3;
            cout<<"\nPress any key to continue....."<<endl;
            getch();
            temp=num3;
            flag=0;
            break;

    case 4:
    if(flag==1){
        cout<<"Enter first number: ";
        cin>>num1;
    }
    else {
                num1=temp;
                cout<<"\nFirst number is: "<<num1<<endl;
            }
            cout<<"Enter second number ";
            cin>>num2;
            num3=stand_cal::division(num1,&num2);
            cout<<"\nDivision of "<<num1<<" by "<<num2<<" is "<<num3;
            cout<<"\nPress any key to continue....."<<endl;
            getch();
            temp=num3;
            flag=0;
            break;

    case 5:
    if(flag==1){
        cout<<"Enter first number: ";
        cin>>num1;
    }
    else {
                num1=temp;
                cout<<"\nFirst number is "<<num1<<endl;
            }
            cout<<"Enter second number: ";
            cin>>num2;
            num3=stand_cal::modulus(&num1,&num2);
            cout<<"\nModulus of "<<num1<<" by "<<num2<<" is "<<num3;
            cout<<"\nPress any key to continue....."<<endl;
            getch();
            temp=num3;
            flag=0;
            break;
    
    case 6:
        cout<<"\nReturning to previous menu. ";
        cout<<"\nPress any key to continue......."<<endl;
            getch();
            break;
    
    case 7:
        cout<<"\nQuiting..... ";
        cout<<"\nPress any key to continue......."<<endl;
            getch();
            exit(0);

    case 8:
    if(flag==1){
        cout<<"\nInvalid choice: ";
        cout<<"\nPress any key to continue......."<<endl;
        getch();
    }
    else {
        temp=0;
        flag= new_cal;
    } 
    break;

    default:
    cout<<"\nInvalid choice: ";
    cout<<"\nPress any key to continue......"<<endl;
    getch();
    break;       
      } 
      }
      while(choice2!=6);
      break;

      case 2:
      do{
         // clrscr();
         cout<<"============Scientific Calculator===========";
         cout<<"\n1\tSquare\n2\tCube\n3\tPower\n4\tFactorial\n5\tSin\n6\tCos\n7\tTan\n8\tReturn to previous menu\n9\tQuit ";
         if(flag==0)
             cout<<"\n10\tClear Memory";
             cout<<"\nChoose the type of calculator: ";
             cin>>choice2;
             switch (choice2)
             {
              case 1:
              if(flag==1){
                  cout<<"Enter number to find squares:";
                  cin>>num1;
              }
              else {
                  num1=temp;
                  cout<<"/nNumber is "<<num1<<endl;
              }
              num3=scien_cal::square(num1);
              cout<<"\nsquare of "<<num1<<" is "<<num3;
              cout<<"\nPress any key to continue........"<<endl;
              getch();
              temp=num3;
              flag=0;
              break;

              case 2:
              if(flag==1){
                  cout<<"Enter number to find cube:";
                  cin>>num1;
              }
              else {
                  num1=temp;
                  cout<<"\nNumber is "<<num1<<endl;
              }
              num3=scien_cal::cube(num1);
              cout<<"\n cube of "<<num1<<" is "<<num3;
              cout<<"\nPress any key to continue........."<<endl;
              getch();
              temp=num3;
              flag=0;
              break;

              case 3:
              if(flag=1){
                  cout<<"Enter first number for base to find power: ";
                  cin>>num1;
              }
              else {
                  num1=temp;
                  cout<<"\nFirst number is"<<num1<<endl;
              }
              cout<<"Enter second number for poer to find power:";
              cin>>num2;
              num3=scien_cal::power(num1,num2);
              cout<<"\n"<<num1<<" to the power "<<num2<<" is "<<num3;
              cout<<"\nPress any key to continue.........."<<endl;
              getch();
              temp=num3;
              flag=0;
              break;

              case 4:
              if(flag==1){
                  cout<<"Enter number to find factorial:";
                  cin>>num1;
              }
              else {
                  num1=temp;
                  cout<<"\nNumber to find factorial is "<<num1<<endl;
              }
              num4=scien_cal::fact(num1);
              cout<<"\nFactorial of "<<num1<<" is "<<num4;
              cout<<endl<<"Press any key to continue........."<<endl;
              getch();
              temp=num4;
              flag=0;
              break;

              case 5:
              if(flag==1){
                  cout<<"Enter number to find sin value:";
                  cin>>num1;
              }
              else {
                  num1=temp;
                  cout<<"\nNumber for sin value is "<<num1<<endl;
              }
              num3=scien_cal::sin_func(num1);
              cout<<"\nSin value of "<<num1<<" is "<<num3;
              cout<<"\nPress any key to continue.........."<<endl;
              getch();
              temp=num3;
              flag=0;
              break;

              case 6:
              if(flag==1){
              cout<<"Enter number to find cos value:";
              cin>>num1;
              }
              else {
                  num1=temp;
                  cout<<"\nNumber for cos value is"<<num1<<endl;
              }
              num3=scien_cal::cos_func(num1);
              cout<<"\nCos value of "<<num1<<" is "<<num3;
              cout<<"\nPress any value to continue........."<<endl;
              getch();
              temp=num3;
              flag=0;
              break;

              case 7:
              if(flag==1){
                  cout<<"Enter number to find tan value:";
                  cin>>num1;
              }
              else {
                  num1=temp;
                  cout<<"\nNumber for tan value is "<<num1<<endl;
              }
              num3=scien_cal::tan_func(num1);
              cout<<"\nTan value of "<<num1<<" is "<<num3;
              cout<<"\nPress any key to continue.........."<<endl;
              getch();
              temp=num3;
              flag=0;
              break;

              case 8:
              cout<<"\nReturning to previous menu.";
              cout<<"\nPress any key to continue........."<<endl;
              getch();
              break;

              case 9:
              cout<<"\nQuitting.........";
              cout<<"\nPress any ket to continue........."<<endl;
              getch();
              exit(0);

              case 10:
              if(flag=1){
                  cout<<"\nInvalid choice..";
                  cout<<"\nPress any key to continue........"<<endl;
                  getch();
              }
              else {
                  temp=0;
                  flag=1;
              }
              break;

              default:
              cout<<"\nInvalid choice.";
              cout<<"\nPress any key to continue..........."<<endl;
              getch();
              break;
             }
      }
      while(choice2!=8);
      break;

      case 3:
      cout<<"\nQuiting.......";
      cout<<"\nPress any key to continue........."<<endl;
      getch();
      break;

      default:

      cout<<"\nInvalid Choice.";
      cout<<"\nPress any key to continue........."<<endl;
      getch();
      break;
           }
           }
           while(choice1!=3);
    }
        
         
          
           
            
             
              
               