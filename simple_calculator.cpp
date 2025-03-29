// codmetric task 1 (sample calc)
// add , subtract , multiply , division 
#include <iostream>
#include <iomanip>

using namespace std;

float add (float num1 ,  float num2 );
float subtract (float num1 , float num2 );
float multiply (float num1 , float num2 );
float divide (float num1 , float num2 );

float number1 , number2;
char  op;
char x;
int main()
{
do {
 cout << "enter the 1st number : ";

 while (!(cin >> number1))
 {
    cin.clear();
    cin.ignore(1000,'\n');
    cout << "invalid input in 1st number please enter a number :";
 }

 cout << "enter the 2nd number : ";

 while (!(cin >> number2))
 {
    cin.clear();
    cin.ignore(1000,'\n');
    cout << "invalid input in 2nd number please enter a number :";
 }

 cout << "enter the operator --> [+,-,*,/] : " ;
 cin >> op; //+,-,*,/
 while (op!='+' && op!='-'&& op!='*' && op!='/')
 {
    cout << "invald input please enter one from(+,-,*,/) : ";
    cin >> op ;
 }
  
 if (op=='+')
 {
    cout<<"result : " << fixed << setprecision(3)<< add(number1,number2)<<endl;
 }
 
 else if (op=='-')
 {
    cout<<"result : "  <<fixed <<setprecision(3)<<subtract(number1,number2)<<endl;
 }
 
 else if (op=='*')
 {
    cout<<"result : " <<fixed <<setprecision(3)<< multiply(number1,number2)<< endl ;
 }
 
 else if (op=='/')
 {
   if (number2==0)
    { 
      while ( number2==0)
    {   
       cout<< "the demonator cant be zero enter another number : ";
       cin >> number2;
     }
      
    }
    cout<<"result : " <<fixed <<setprecision(3)<<divide(number1,number2)<<endl;
 }
 
 cout << "do you want to make another operation (y/n)";
 cin >> x;
 
}while( x=='y' ) ;
}

 // add function (get number 1 , number 2 | return result )
 float add (float num1 , float num2)
 {
    return num1 + num2  ;
 }
 
 float subtract (float num1 , float num2 )
 {
    return num1 - num2  ;
 }
 
 float multiply (float num1 , float num2 )
 {
    return num1 * num2  ;
 }
 
 float divide (float num1 , float num2 )
 {
    
      return num1 / num2  ;
 }