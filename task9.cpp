#include<iostream>
using namespace std;
void reverse(string check);
main(){
string boolean;
cout<< "Enter 'true' for TRUE abd 'false' for FALSE: ";
cin>>boolean;
 reverse(boolean); 
}
void reverse(string check)
{
    if(check == "true"){
    cout<<"FALSE"<<endl;
}
    if(check == "false"){
    cout<< "TRUE";
}

}