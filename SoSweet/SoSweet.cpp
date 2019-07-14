#include <iostream>

using namespace std;

void InputA (int &ax, int &ay, int &az) {
	cin>>ax>>ay>>az;
	
	return;
}

void InputC (int &cx, int &cy, int &cz) {
	cin>>cx>>cy>>cz;
	
	return;
}

int main () {
	int ax, ay, az;
	int bx, by, bz;
	int cx, cy, cz;
	
	InputA(ax, ay, az);
	
	InputC(cx, cy, cz);

	bx = cx - az;
	by = cy / ay;
	bz = cz - ax;

	cout<<bx<<" "<<by<<" "<<bz;
	
	return 0;
}
