#include "main.hpp"
#include <iostream>

using namespace std;


int main (){

char operation;

double num;
double num2;
Calculator NUMBER; //object

cout<<"Welcome to the simple calculator!"<<endl;
cout<<"You can ADD(+), SUBTRACT(-), DIVIDE(/), MULTIPLY(*), POWER(^), SQUARE ROOT(!), or QUIT(q)"<<endl;

do {
    cout<<"please input an operation (+ - * / ^ ! q) : ";
    cin>>operation;

    switch (operation){
        case '+':
        cout<<"Input your two numbers! : ";
          cin>>num;
          cin>> num2;

        NUMBER.addition(num, num2); 
        NUMBER.output();
        break;

        case '-':
        cout<<"Input your two numbers! : ";
          cin>>num;
          cin>> num2;
          
        NUMBER.subtraction(num, num2);
        NUMBER.output();
        break;

        case '/':
        cout<<"Input your two numbers! : ";
          cin>>num;
          cin>> num2;
          
        NUMBER.divide(num, num2);
        NUMBER.output();
        break;

        case '*':
        cout<<"Input your two numbers! : ";
        cin>>num;
        cin>> num2;
        
      NUMBER.multiply(num, num2);
      NUMBER.output();
        break;

        case '^':
        cout<<"Input your base! : ";
        cin>>num;
        cout<<"Now your power! : " ;
        cin>>num2;

        NUMBER.power(num, num2);
        NUMBER.output();
        break;

        case '!':
        cout<<"Input one number! : ";
        cin>>num;

        NUMBER.root(num);
        NUMBER.output();
        break;

        case 'q':
        cout<<"Goodbye!"<<endl;
        break;

        default:
        cout<<"Try again!"<<endl;
        break;
    }
}while(operation != 'q');



}