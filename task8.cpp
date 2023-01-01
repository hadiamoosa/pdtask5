#include<iostream>
using namespace std;
void greaterNumber(int firstNumber,int secondNumber);
main(){
int firstNumber;
int secondNumber;
cout<< "Enter number1: ";
cin>>firstNumber;
cout<< "Enter number2: ";
cin>> secondNumber;
greaterNumber(firstNumber,secondNumber);
}
void greaterNumber(int firstNumber,int secondNumber){
    if(secondNumber==firstNumber){
    cout<<"true";}
    if(firstNumber!=secondNumber){
    cout<< "false";}

}