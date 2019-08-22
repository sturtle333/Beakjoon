#include <iostream>
#include <vector>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
//	ios_base::sync_with_stdio(false);

	int N;
	cin>>N;
	
	vector <double> v[N];
	int ave[N];
		
	for(int i=0;i<N;i++){
		int M;
		cin>>M;
		v[i].reserve(M);
		for(int j=0;j<M;j++){
			double C;
			cin>>C;
			v[i][j] = C;
		}
	}
	
	for(int i=0;i<N;i++){
		double result = 0;
		int length = v[i].capacity();
		for(int j=0;j<length;j++){
			result += v[i][j];
		}
		ave[i] = result/length;
	}
	
	for(int i=0;i<N;i++) {
		double result = 0;
		double temp = 0;
		int length = v[i].capacity();
		for(int j=0;j<length;j++){
			if(ave[i] < v[i][j])
				temp+=1.0;
		}
		printf("%.3lf\%\n",temp / length * 100.0);
	}
	if(!N) cout<<"0%";

	return 0;	
}
