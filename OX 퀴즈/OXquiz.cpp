#include <iostream>

using namespace std;

int main() {
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin>>N;
	
	char str[N][80];
	for(int i=0;i<N;i++){
		int temp = 0;
		cin>>str[i];
	}
	
	for(int i=0,j=0;i<N;i++,j=0){
		int temp = 1, result = 0;
		while(str[i][j] != '\0'){
			if(str[i][j++] == 'O') {
				result += temp++;
			}
			else {
				temp = 1;
			}
		}
		cout<<result<<"\n";
	}

	return 0;	
}
