#include <iostream>
#include <stdint.h>

using namespace std;

int main() {
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	long long N;
	cin>>N;
	
	long long M[N];
	for(long long i=0;i<N;i++){
		cin>>M[i];
	}
	long long max = M[0], min = M[0];
	for(long long i=0;i<N;i++){
		if(M[i]>max){
			max = M[i];
		}
		else if(M[i]<min) {
			min = M[i];
		}
	}
	
	cout<<min<<" "<<max;
	return 0;	
}
