#include <cstdio>
#include <iostream>

int main() {
	int tim, min;
	scanf("%d %d",&tim, &min);
	if (min-45 < 0) {
		min+=15;
		if(tim-1 < 0){
			tim+=23;
		}
		else{
			tim-=1;
		}
	}
	else{
		min-=45;
	}
	printf("%d %d",tim, min);
	return 0;	
}
