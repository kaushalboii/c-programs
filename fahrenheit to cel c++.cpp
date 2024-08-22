#include<iostream>
using namespace std;
int main(){
	float celsius,fahrenheit;
	cout<<"enter temp in fahrenheit: ";
	cin>>fahrenheit;
	celsius=(fahrenheit-32.0)*5.0/9.0;
	cout<<fahrenheit<<"degree fahrenheit is equal to "<<celsius<<"degree celsius.";
	return 0; 
}
