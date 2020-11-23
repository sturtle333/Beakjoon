#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int arr[9][9];
bool arrr[10];
bool done = false;
vector < pair <int, int> > hole;

void v (int x, int y) {
	for (int i = 0; i < 9; i++) {
		arrr[arr[i][y]]  = true;
	}
}

void h (int x, int y) {
	for (int i = 0; i < 9; i++) {
		arrr[arr[x][i]]  = true;
	}
}

void c (int x, int y) {
	for (int i = y/3*3; i < y/3*3+3; i++) {
		for (int j = x/3*3; j < x/3*3+3; j++){
			arrr[arr[j][i]]  = true;
		}
	}
}

int promising (int x, int y) {
	for (int k = 1; k <= 9; k++) arrr[k] = false;
	
	v(x, y);
	h(x, y);
	c(x, y);

	int tmp = 0;
	for (int i = 1; i <= 9; i++) {
		if (!arrr[i]) {
			if (tmp != 0) return 0;
			else tmp = i;
		}
	}
	return tmp;
}

void f () {
	for (int i = 0; i < 9; i++){
		for (int j = 0; j < 9; j++){
			if (arr[j][i] == 0) {
				arr[j][i] = promising(j, i);
				if (arr[j][i] != 0) {
					f();
					return;
				}
				else {
					continue;
				}
			}
		}
	}
}

//


int zv (int idx, int n) {
	int x = hole[idx].first, y = hole[idx].second;

	for (int i = 0; i < 9; i++) {
		if ( arr[i][y] == n ){
			return 0;
		}
	}
	return 1;
}

int zh (int idx, int n) {
	int x = hole[idx].first, y = hole[idx].second;

	for (int i = 0; i < 9; i++) {
		if (arr[x][i] == n) {
			return 0;
		}
	}
	return 1;
}

int zc (int idx, int n) {
	int x = hole[idx].first, y = hole[idx].second;

	for (int i = y/3*3; i < y/3*3+3; i++) {
		for (int j = x/3*3; j < x/3*3+3; j++){
			if (arr[j][i] == n) {
				return 0;
			}
		}
	}
	return 1;
}

void z (int idx) {
	if (idx == (int) hole.size()) {
		done = true;
		return;
	}
	else {
		int x = hole[idx].first, y = hole[idx].second;

		for (int j = 1; j <= 9; j++){
			if (zv(idx, j) == 0) continue;
			else if (zh(idx, j) == 0) continue;
			else if (zc(idx, j) == 0) continue;
			else {
				arr[x][y] = j;
				z(idx + 1);
				if (done) return;
			}
			arr[x][y] = 0;
		}
	}
}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	for (int i = 0; i < 9; i++){
		for (int j = 0; j < 9; j++){
			cin >> arr[j][i];
			if (arr[j][i] == 0) {
				hole.push_back(pair <int, int> (j, i));
			}
		}
	}

	z(0);

	for (int i = 0; i < 9; i++){
		for (int j = 0; j < 9; j++){
			cout << arr[j][i] << ' ';
		}
		cout << '\n';
	}

	return 0;
}