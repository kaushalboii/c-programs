#include<iostream>
using namespace std;
int main(){
	int num;
	bool isprime=true;
	
	cout<<"enter the integer : ";
	cin>>num;
	
	if(num<=1){
		isprime=false;
	}else{
		for(int i=2;i*i<num;i++){
			if(num % i == 0){
				isprime=false;
				break;
			}
		}
		
	}
	if(isprime){
		cout<<num<<" is prime num";
	}else{
		cout<<num<<" is not prime num";
	}
	return 0;
}
