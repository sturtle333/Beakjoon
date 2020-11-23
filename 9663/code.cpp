#include <iostream>

using namespace std;

int N;
int *arr;
int cnt = 0;

int check (int idx){
	for (int i = 0; i < idx; i++){
		if ( arr[idx] == arr[i] || arr[idx] == arr[i] + (idx - i) ||  arr[idx] == arr[i] - (idx - i)) {
			return 0;
		} 
	}
	return 1;
}

void f (int idx) {
	if (idx == N) {
		cnt++;
	}
	else {
		for(int i = 1; i <= N; i++ ){
			arr [ idx ] = i;
			if ( check(idx) ) {
				f ( idx + 1);
			}
		}
	}
}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> N;

	arr = new int [ N ];

	f(0);

	cout << cnt;

	return 0;
}