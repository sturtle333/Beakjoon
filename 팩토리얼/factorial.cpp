#include <iostream>

using namespace std;

int f(int x) {
	if(x!=0) return x * f(x-1);
	else return 1;
}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	cin >> N;
	
	cout << f(N);
}
