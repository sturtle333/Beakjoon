#include <iostream>

using namespace std;

typedef struct num {
	int sequence = 0;
	int number = 0;
};

int main() {
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	num N[9];
	for(int i=0;i<9;i++){
		cin>>N[i].number;
		N[i].sequence = i;
	}
	
	int max = 0, seq = 0;
	for(int i=0;i<9;i++){
		if(N[i].number>max){
			max = N[i].number;
			seq = N[i].sequence;
		}
	}
	
	cout<<max<<"\n"<<seq+1;

	return 0;	
}
