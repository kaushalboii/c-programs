#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number : ";
	cin>>n;
	if(n==2 || n==3 || n==5 || n==7)
	{
		cout<<n<<" is a prime number";
	}else if(n%2==0 || n%3==0 || n%5==0 || n%7==0){
		cout<<n<<" is not a prime number";
	}else if(n==1){
		cout<<n<<" is not a prime number";
	}else{
		cout<<n<<" is a prime number";
	}
	return 0;
}
