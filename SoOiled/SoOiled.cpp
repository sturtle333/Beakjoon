#include <iostream>
using namespace std;

namespace calc {
	int N;
	int * W;
	int * L;
	int * result;
	bool * Stat;
	
	int PutOil (int a ,int Na = (N+1)/2) {
		if (L[a] >= W[a]) {
			Stat[a] = true;
			return L[a] > W[a]? L[a] - W[a] : 0;
		}
		if (a<(N+1)/2) {		
			if (!Stat[2*a] && !Stat[(2*a)+1]) {
				L[a] += PutOil(2*a, Na/2);
				L[a] += PutOil((2*a)+1, Na/2);
				result[a]++;
				return 0;
			}	
			else if (!Stat[2*a] && Stat[(2*a)+1]) {
				L[a] += PutOil(2*a, Na);
				result[a]++;
				return 0;
			}
			else if (Stat[2*a] && !Stat[(2*a)+1]) {
				L[a] += PutOil((2*a)+1, Na);
				result[a]++;
				return 0;
			}
			else if (Stat[2*a] && Stat[(2*a)+1]) {
				L[a] += Na;
				result[a]++;
			}		
		}
		else {
			L[a] += Na;
			result[a]++;
		}
		if (L[a] >= W[a]) {
			Stat[a] = true;
			return L[a] > W[a]? L[a] - W[a] : 0;
		}
		return 0;
	}
}

int main (void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N;
	cin>>N;
	
	int W[N+1]; //용량-실제유량-결과값 
	int L[N+1] = {0,};
	bool Stat[N+1] = {false,};
	int result[N+1] = {0,};
	for(int a=1;a<=N;a++) {
		cin>>W[a];
	}
	
	calc::N = N;
	calc::W = W;
	calc::L = L;
	calc::Stat = Stat;
	calc::result = result;
	while (Stat[1] != true) {
		calc::PutOil(1);
	}
	
	for (int a=1;a<N;a+=2) {
		cout<<result[a]<<" "<<result[a+1]<<" ";
	}
	cout<<result[N];
	
	return 0;
}
