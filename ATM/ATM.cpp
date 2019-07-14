#include <iostream>
#include <stdio.h>

using namespace std;

int main () {
	int N;
	cin>>N;
	
	int P[N];
	for (int a=0;a<N;a++) {
		cin>>P[a];
	}
	
	int result = 0;
	bool stat = false;
	int temp;
	
	while(!stat) {
		stat = true;
		for (int a=1;a<N;a++) {
			if (P[a-1] > P[a]) {
				temp = P[a-1];
				P[a-1] = P[a];
				P[a] = temp;
				
				stat = false;
			}
		}
	}
	
	temp = 0;
	
	for (int a=0;a<N;a++) {
		temp += P[a];
		result += temp;
	}
	
	cout<<result;
	
	return 0;
}
