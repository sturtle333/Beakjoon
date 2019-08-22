#include <iostream>

using namespace std;

void ascend (int *N,bool &stat){
	for(int i=1;i<=8;i++){
		if(N[i-1]!=i){
			return;
		}
	}
	cout<<"ascending";
	stat = false;
	return;
}
void descend (int *N,bool &stat){
	for(int i=8,j=0;i>0;i--,j++){
		if(N[j]!=i){
			return;
		}
	}
	cout<<"descending";
	stat = false;
	return;
}


int main() {
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N[8];
	for(int i=0;i<8;i++){
		cin>>N[i];
	}
	
	bool stat = true;
	
	ascend(N,stat);
	descend(N,stat);
	if(stat) cout<<"mixed";
	
	return 0;	
}
