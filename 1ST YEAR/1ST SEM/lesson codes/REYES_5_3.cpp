#include<iostream>

using namespace std;
int main(){

int MSales, Income;
cout<<"ENTER MONTHLY SALES: ";
cin>>MSales;
//reyes sofia beatrice alexa
if(MSales>= 50000){
    Income = 575+(0.16*MSales);
    cout<<"Total income: "<<Income;
    }   
else if(MSales <=50000 && MSales >=40000){
	Income= 550+(0.14*MSales);
    cout<<"Total income: "<<Income;
    }
else if(MSales<=40000 && MSales>=30000){
	Income= 525+(0.12*MSales);
    cout<<"Total income: "<<Income;
    }
else if(MSales<=30000 && MSales>=20000){
	Income= 500+(0.9*MSales);
    cout<<"Total income: "<<Income;
    }
else if(MSales<=20000 && MSales>=10000){
	Income= 450+(0.5*MSales);
    cout<<"Total income: "<<Income;
    }
else if(MSales<=10000){
	Income= 400+(0.3*MSales);
    cout<<"Total income: "<<Income;
}
   return 0; 

}