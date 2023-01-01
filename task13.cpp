#include<iostream>
using namespace std;
void flowers(float total);
main(){
     float red;
     float white;
     float tulip;
     float total;
      cout<< "Enter no of red flowers: ";
     cin>>red;
     cout<<"Enter no of white flowers: ";
     cin>>white;
     cout<< " Enter no of tulips: ";
     cin>>tulip;
    total=red*2+white*4.10+tulip*2.50;
     cout<< "Total amount: "<<total<<endl;

 if(total > 200)
{
  flowers(total);
   }
}
void flowers(float total)
{
float discount;
float Pdiscount;
discount=(total*20)/100;
Pdiscount=total-discount;
cout<< "Amount after discount: "<<Pdiscount;
}   