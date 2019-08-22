#include <cstdio>
#include <iostream>

int main() {
	int t;
	std::cin>>t;
	int a[t], b[t];
	for(int i=0;i<t;i++){
		scanf("%d",a[i]);
		scanf("%d",b[i]);
	}
	for(int i=0;i<t;i++){
		printf("%d\n",a[i]+b[i]);
	}
	return 0;	
}
