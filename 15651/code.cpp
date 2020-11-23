#include <iostream>

using namespace std;

int M, N;
int arr[7];

void Printing() {
	for (int i = 0; i < M; i++){
		cout << arr[i] << ' ';
	}
	cout << '\n';
}

void Counting (int idx) {
	if (idx == M) {
		Printing();
	}
	else {
		for (int i = 1; i <= N; i++) {
			arr[idx] = i;

			Counting(idx + 1);
		}
	}
}

int main () {
	cin >> N >> M;

	Counting(0);	

	return 0;
}