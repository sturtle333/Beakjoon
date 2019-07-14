#include <iostream>

using namespace std;

int main () {
	int N;
	int result = 0;
	cin>>N;
	
	float S[N][2];
	for(int a=0;a<N;a++) {
		cin>>S[a][0]>>S[a][1];
	}
	
	float min = S[0][0];
	float max = S[0][1];
	
	for (int a=0;a<N;a++) {
		if (S[a][1] >= max)
			max=S[a][1];
		if (S[a][0] <= min)
			min=S[a][0];
	}
	
	bool stat;
	for (float a=0;a<N;a++) {
		stat = false;
		for(int b=0;b<N;b++) {
			if(S[b][0]<a+0.5&&S[b][1]>a+0.5) {
				stat = true;
				break;
			}
		}
		if (stat != true) {
			result++;
		}
	}
	
	cout<<result;
		
	return 0;
}
