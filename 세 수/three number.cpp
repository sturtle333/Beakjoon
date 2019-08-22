#include <stdio.h>
#include <iostream>

int main() {
	int num[3];
	std::cin>>num[0];
	std::cin>>num[1];
	std::cin>>num[2];
	int temp;
	if(num[0]>num[1]){
		temp=num[0];
		num[0]=num[1];
		num[1]=temp;
	}
	if(num[0]>num[2]){
		temp=num[0];
		num[0]=num[2];
		num[2]=temp;
	}
	if(num[1]>num[2]){
		temp=num[1];
		num[1]=num[2];
		num[2]=temp;
	}
	std::cout<<num[1];
	return 0;	
}
