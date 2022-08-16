#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
	float price , payment , discount ;
	int quantity;
	
	cout<<"Enter the price of item (RM):RM ";
	cin>>price;
	cout<<"Enter the quantity of item : ";
	cin>>quantity;
	if(price>50.00){
		discount = price*20/100;
	}
	
	payment = (price*quantity) - discount ;
	cout<<"\nThe price after discount : RM "<<fixed<<setprecision(2)<<payment;
	
	return 0;

}
