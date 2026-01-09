#include<iostream>
#include<cmath>
using namespace std;
double roots(double a, double b,double c){
	double det,x1,x2;
	det=(b*b)-(4*a*c);
	x1=((-b)+(sqrt(det)))/(2*a);
	x2=(-(b)-(sqrt(det)))/(2*a);
	if(det==0){
		cout<<"The equation has equal roots\nRoots are x1 =  "<<x1<<" and x2 =  "<<x2;
	}
		if(det>0){
		cout<<"The equation has real and distinct roots\nRoots are x1 =  "<<x1<<" and x2 =  "<<x2;
	}
		if(det<0){
		cout<<"The equation has complex roots";
	}
	return x1,x2;
}
int main(){
		int a,b,c;
	cout<<"The equation is in the form ax2+bx+c\nEnter the value of a: ";
	cin>>a;
	cout<<"\nEnter the value of b: ";
	cin>>b;
	cout<<"\nEnter the value of c: ";
	cin>>c;
	roots(a,b,c);
	return 0;
}
