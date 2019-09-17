#include<iostream>
#include<vector>
using namespace std;

void rstVector (vector<short> &v) {
	vector<short> temp;
	temp.swap(v);
}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N, result = 0;
	cin >> N;
	
	for(int i=0;i<N;i++){
		vector<short> stat(26,-1);
		
		char str[101];
		cin >> str;
		
		int length = 0;
		while(str[length] != '\0') {
			int temp = (int)str[length] - 97;
			if(stat[temp]==-1||stat[temp]==length-1){
				stat[temp] = length;
			}
			else {
				break;
			}
			length++;
		}
		if(str[length]=='\0'){
			result++;
		}
		rstVector(stat);
	}
	cout << result;
	return 0;
}
