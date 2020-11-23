#include <iostream>

using namespace std;

int M, N;
int arr[10];

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
		int tmp = 1;
		if (idx != 0) {
			tmp = arr[idx - 1];
		}
		for (int i = tmp; i <= N; i++) {
			arr[idx] = i;

			Counting(idx + 1);
		}
	}
}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> N >> M;

	Counting(0);	

	return 0;
}