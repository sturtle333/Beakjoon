#include <iostream>

using namespace std;

namespace num {
	int N;
	int M;
	int *result;
	
	void reSort (int P);
	
	inline void printing () {
		for (int a=1;a<M;a++) {
			cout<<result[a]<<" ";
		}
		cout<<result[M]<<"\n";
	}
	
	void plusing (int P) {
		if (P == 1) {
			if (result[P] == N) return;
			result[P]++;
			reSort(P);
			printing();
			plusing(M);
			return;
		}
		else {
			bool stat, isChange = false;
			for (int a=result[P];a<N;a++) {
				stat = false;
				for (int b=P-1;b>0;b--) {
					if (result[b] == a+1) {
						stat = true;
						break;
					}
				}
				if (stat == true) continue;
				result[P] = a+1;
				isChange = true;
				break;
			}
			if (isChange == false) {
				plusing(P-1);
				return;
			}
			reSort(P);
			printing();
			plusing(M);
		}
		return;
	}
	void reSort (int P) {
		for (int a=1;a<=N;a++) {
			bool stat = false;
			for (int b=P-1;b>0;b--) {
				if (result[b] == a) {
					stat = true;
					break;
				}
			}
			if (stat) continue;
			result[++P] = a;
		}
		return;
	}
}


int main (void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N, M;
	cin>>N>>M;
	
	int result[M];
	
	for (int a=1;a<=M;a++) {
		result[a] = a;
	}
	
	num::N = N;
	num::M = M;
	num::result = result;
	
	num::printing();
	num::plusing(M);
	
	return 0;
}
