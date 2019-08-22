#include <iostream>

using namespace std;

int main() {
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int max = 0, seq = 0;
	int N;
	for(int i=0;i<9;i++){
		cin>>N;
		if(max<N){
			max = N;
			seq = i;
		}
	}
	
	cout<<max<<"\n"<<seq+1;

	return 0;	
}
