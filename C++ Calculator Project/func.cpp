#include "main.cpp"
#include <cmath>


//default constructor...
Calculator :: Calculator(){
    enter = 0;
}

//ADDITION 
void Calculator:: addition (double number1, double number2){ 
    enter = number1 + number2; 
}

//SUBTRACTION
void Calculator:: subtraction (double number1, double number2){
    enter = number1 - number2;
}

//MULTIPLICATION
void Calculator:: multiply (double number1, double number2){
    enter = number1 * number2;
}

//POWER
void Calculator:: power(double number1, double number2){
    enter = pow(number1, number2);
}

//DIVISION
void Calculator:: divide(double number1, double number2){
    enter = number1 / number2;
}

//SQUARE ROOT
void Calculator:: root(double number1){
    if (number1 < 0){
        cout<<"sorry you can not square root negative numbers..."<<endl;
    }else{
    enter = sqrt(number1);
    }
}

//OUTPUT
 void Calculator:: output() const {
    std::cout<<"Here is your result: "<< enter<< std::endl;
}