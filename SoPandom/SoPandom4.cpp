#include <iostream>

using namespace std;

int main () {
	int N;
	cin>>N;
	
	int S[N][2];
	for(int a=0;a<N;a++){
		cin>>S[a][0]>>S[a][1];
	}
	
	int min = S[0][1];
	int max = S[0][0];
	
	for (int a=0;a<N;a++) {
		if (S[a][0] >= max)
			max=S[a][0];
		if (S[a][1] <= min)
			min=S[a][1];
	}
	
	int result;	
	if (max < min)
		result = 0;
	else
		result = max - min;
	cout<<result;
}
