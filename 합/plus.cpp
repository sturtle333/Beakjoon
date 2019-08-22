#include <cstdio>
#include <iostream>

int main() {
	int a;
	scanf("%d",&a);
	int temp=0;
	for(int i=1;i<=a;i++){
		temp+=i;
	}
	printf("%d",temp);
	return 0;	
}
