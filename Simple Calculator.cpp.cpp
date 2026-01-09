#include<iostream>
#include<cmath>
#include<limits>
using namespace std;
int main(){ 
int calc;
cout<<"WELCOME TO THE CALCULATOR APP\n\tOptions\t 1 for the simple Calculator(+,-,*,/) or\n\t\t 2 for the complex calculator(modulo,square,cube,squareroot,cuberoot): ";
while(!(cin>>calc)){
	cout<< "Invalid input, please enter 1 or 2: ";
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
if(calc==1){
	double num1,num2;
	char fxn;
	cout<<"Welcome to the simple calculator App\n";
	cout<<"Enter the operation you would want to perform(+,-,*,/): ";
cin>>fxn;
	cout<<"\n\tEnter the first number: ";
					while(!(cin>>num1)){
	cout<< "Invalid input, please enter a valid input: ";
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
	cout<<"\n\tEnter the second number: ";
					while(!(cin>>num2)){
	cout<< "Invalid input, please enter a valid input: ";
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
	switch(fxn){
		case'+':
		cout<<""<<num1<<"+"<<""<<num2<<"= "<<num1+num2;
		break;
		case'-':
		cout<<""<<num1<<"-"<<""<<num2<<"= "<<num1-num2;
		break;
		case'*':
		cout<<""<<num1<<"*"<<""<<num2<<"= "<<num1*num2;
		break;
		case'/':
		cout<<""<<num1<<"/"<<""<<num2<<"= "<<num1/num2;
		break;
		default:
			cout<<"Can't perform this operation";
}
}
if(calc==2){
	int num3,num4,num5,num6;
	 int f;
	cout<<"Welcome to the complex calculator\nEnter the operation you would want to perform(\n\t1=mod,\n\t2=square,\n\t3=cube,\n\t4=sqrt(squareroot),\n\t5=cbrt(cuberoot) ): ";
	while(!(cin>>f)){
	cout<< "Invalid input, please enter the correct number: ";
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
	if(f==1){                    
			cout<<"\nEnter the first number: ";
			while(!(cin>>num3)){
	cout<< "Invalid input, please enter the correct input: ";
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
			cout<<"\t\tEnter the second number: ";
			while(!(cin>>num4)){
	cout<< "Invalid input, please enter the correct input: ";
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
			cout<<" "<<num3<<" mod"<<num4<<" = "<<num3%num4;
		}
				if(f==2){
				cout<<"\nEnter the number you want to square: ";
				while(!(cin>>num5)){
	cout<< "Invalid input, please enter a valid input: ";
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
				cout<<"The square of "<<num5<<" is: "<<num5*num5;
			}
					if(f==3){
				cout<<"\nEnter the number you want to cube: ";
								while(!(cin>>num5)){
	cout<< "Invalid input, please enter a valid input: ";
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
				cout<<"The cube of  "<<num5 <<" is: "<<num5*num5*num5;
	}
					if(f==4){
				cout<<"\nEnter the number you want its squareroot: ";
								while(!(cin>>num5)){
	cout<< "Invalid input, please enter a valid input: ";
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
				cout<<"The squareroot of  "<<num5 <<" is: "<<sqrt(num5);
			}
					if(f==5){
				cout<<"\nEnter the number you want its cuberoot: ";
								while(!(cin>>num5)){
	cout<< "Invalid input, please enter a valid input: ";
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
				cout<<"The cuberoot of  "<<num5 <<" is: "<<cbrt(num5);
		}
	}
	return 0;
}
