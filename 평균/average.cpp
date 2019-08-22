#include <iostream>
#include <cstdio>

using namespace std;

int main() {
//	std::cin.tie(NULL);
//	std::cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin>>N;
	
	float A[N];
	float max = 0;
	float aver = 0;
	for(int i=0;i<N;i++){
		cin>>A[i];
		max = max<A[i]? A[i] : max;
	}
	for(int i=0;i<N;i++){
		aver += A[i]/max*100;
	}
	
	printf("%.2f",aver/N);

	return 0;	
}
