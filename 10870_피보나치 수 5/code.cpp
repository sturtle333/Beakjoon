#include<iostream>

using namespace std;
int X;

int f (int a, int b, int x) {
	int num = a + b;
	if (X == x) 	return b;
	else 		return f(b, num, x+1);
}

int main (void) {
	cin >> X;
	if (X == 0) {cout << 0; return 0;}

	int res = f(0, 1, 1);
	cout << res;
	
	return 0;
}