#include <iostream>

using namespace std;

int main () {
	int N, K;
	cin>>N>>K;
	
	int coins[N];
	for(int a=0;a<N;a++) {
		cin>>coins[a];
	}
	
	int temp[N];
	int temp2 = 0;
	int temp3 = 0;
	int temp4 = 0;
	int result = 0;
	
	bool stat = true;
	
	for(int a=0;a<N;a++) {
		if (coins[a] < K) {
			temp[temp2] = coins[a];
			temp2++;
		}
	}
	
	while (stat) {
		stat = false;
		for(int a=0;a+1<temp2;a++) {
			if (temp[a] < temp[a+1]) {
				temp3 = temp[a];
				temp[a] = temp[a+1];
				temp[a+1] = temp3;
				
				stat = true;
			}
		}
	}
	
	temp4 = K;
	
	for (int a=0;a<temp2;a++) {
		while(temp[a] <= temp4) {
			temp4 -= temp[a];
			result++;
		} 
	}
	
	cout<<result;
	
	return 0;
}
