#include<iostream>
#define C1 100
#define C2 10000

using namespace std;

int main(){
	bool arr[C2+1];
	arr[1] = false;
	for(int i=2; i<=C2; i++){
		arr[i] = true;
	}
	for(int i=2; i<=C1; i++){
		for(int j = 2; i*j <= C2; j++){
			arr[i*j] = false;
		}
	}
	int r, min, max; cin >> r;
	for(int i=0; i<r; i++){
		int n; cin >> n;
		int tmp = n/2;
		max = tmp; min = tmp;
		if(arr[tmp]){
			cout << min << ' ' << max << '\n';
			continue;
		}
		while(!arr[--min]);
		while(!arr[++max]);
		while(1){
			if	(min + max == n) 	break;
			else if	(min + max < n)	while(!arr[++max]);
			else if	(min + max > n)	while(!arr[--min]);
		}
		cout << min << ' ' << max << '\n';
	}
	return 0;
}