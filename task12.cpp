#include<iostream>
using namespace std;
void speed(int num1);
main(){
	int num1;
	cout<< "Enter speed: " ;
	cin>>num1;
	speed(num1);
}
void speed(int num1)
{
if (num1 > 100)
{cout<< "Halt..You'll be challenged .";
}
if (num1 == 100)
{
cout<< "Perfect..You are doing good.";
}
}