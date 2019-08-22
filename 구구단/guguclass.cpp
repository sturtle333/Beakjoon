#include <cstdio>
#include <iostream>

int main() {
	int a,b;
	std::cin>>a;
	for(b=1;b<10;b++){
		printf("%d * %d = %d\n",a,b,a*b);
	}
	return 0;	
}
