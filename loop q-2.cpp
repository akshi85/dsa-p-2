#include<iostream>
using namespace std;

int sum(int number){
	int lastdigit = number % 10;
	while (number>=10){
		number /=10;	
	}
	int firstdigit = number;
	return firstdigit+lastdigit;
}

int main(){
	int number;
	cout<<"enter a number:";
	cin>>number;
	
	if(number < 0){
		cout<<"enter a positive number."<<endl;
	}else{
		int result = sum(number);
		 cout<<"the sum of first and last digit is:"<<result<<endl;
	}
}