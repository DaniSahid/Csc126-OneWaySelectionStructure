#include <iostream>
using namespace std;

int main(){
	
	char word ;
	float x1 , x2 , y; 
	cout<<"Input any character : ";
	cin>>word;
	if(word=='Y'){  
		cout<<"Enter two numbers : ";
		cin>>x1>>x2;
		y=x1-(-x2);
		cout<<"\nSummation of the two numbers : "<<y;
	}
	
	return 0;
	
}
