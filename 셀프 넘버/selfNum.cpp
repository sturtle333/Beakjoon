#include <iostream>

#define u64 long long

using namespace std;

bool self[10001] = {0,};

int d (int a){
	return a + (a%10) + (a/10%10) + (a/100%10) + (a/1000%10) + (a/10000%10);
}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	
	for(int i=1;i<=10000;i++) {
		int temp = d(i);
		if(temp > 10000) continue;
		self[temp] = 1;
	}
	
	for(int i=1;i<=10000;i++){
		if(!self[i]) cout<<i<<'\n';
	}
	
	return 0;
}
