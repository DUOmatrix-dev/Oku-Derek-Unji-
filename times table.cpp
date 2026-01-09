#include<iostream>
using namespace std;
int main(){
int num,i;
cout<<"Enter the number to display its times table: ";
cin>>num;
for(i=1;i<=12;i++){
	cout<<" "<<num<<" x  "<<i<<" =  "<<num*i;
	cout<<"\n";
}
return 0;
}
