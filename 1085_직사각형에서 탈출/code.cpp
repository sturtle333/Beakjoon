#include<iostream>
#define up 0
#define down 1
#define left 2
#define right 3

using namespace std;

int main(){
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	
	int arr[4] = {h-y, y, x, w-x};
	
	int rlt = 9999;
	for(int i=0; i<4; i++){
		rlt = rlt > arr[i] ? arr[i] : rlt;
	}
	cout << rlt;
	return 0;
}