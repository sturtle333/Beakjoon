#include <iostream>
#include <cmath>
using namespace std;

int n;
int ** matrix;
int Min = 999999999;

void copyArr(int *a, int *b) {
	for (int i = 0; i < n; i++){
		a[i] = b[i];
	}
}

void copyArr(bool *a, bool *b) {
	for (int i = 0; i < n; i++){
		a[i] = b[i];
	}
}

void printArr(int *arr) {
	for(int i = 0; i < n; i++){
		cout << arr[i] << ' ';
	}
	cout << '\n';
}

void g(int *arr) {
	int score1 = 0;
	int score2 = 0;
	for (int i = 0; i < n/2; i++) {
		for (int j = 0; j < n/2; j++){
			if(i==j) 
				continue;
			score1 += matrix[arr[i]][arr[j]];
		}
	}
	for (int i = n/2; i < n; i++) {
		for (int j = n/2; j < n; j++){
			if (i==j)
				continue;
			score2 += matrix[arr[i]][arr[j]];
		}
	}
	//cout << score1 << ' ' << score2 << '\n';
	Min = min(Min, abs(score1- score2));
}

void f(int index, int *arr, bool *chk){
	if (index >= n) {
		g(arr);
		return;
	}
	else {
		int newArr[n];
		bool newChk[n];
		for (int i = 0; i < n; i++){
			if(chk[i] == false){
				copyArr(newArr, arr);
				copyArr(newChk, chk);

				newArr[index] = i;
				newChk[i] = true;

				f(index + 1, newArr, newChk);
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
  	cin.tie(nullptr);

	cin >> n;

	matrix = new int*[n];
	for (int i = 0; i < n; i++){
		matrix[i] = new int[n]; 
	}

	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cin >> matrix[j][i];
		}
	}

	int arr[n];
	bool chk[n];
	for(int i = 0; i < 0; i++){
		chk[i] = false;
	}

	f(0, arr, chk);

	cout << Min;
	
	return 0;
}