#include <iostream>

using namespace std;

void quick (int *data, int pivot, int end) {
	if(pivot >= end) return;
	
	int i = pivot + 1;
	int j = end;
	int temp;
	
	while(i <= j) {
		while(data[i] <= data[pivot]) {
			i++;
		}
		while(data[j] >= data[pivot] && j > pivot) {
			j--;
		}
		if(i > j) {
			temp = data[j];
			data[j] = data[pivot];
			data[pivot] = temp;
		}
		else {
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		}
	}
	quick(data,pivot,j-1);
	quick(data,j+1,end);
}

int main() {
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N[10];
	for(int i=0;i<10;i++){
		cin>>N[i];
		N[i] = N[i]%42;
	} 
	
	quick(N,0,9);
	
	int result = 1, temp = N[0];
	
	for(int i=0;i<10;i++){
		if(temp != N[i]) {
			result++;
			temp = N[i];
		}
	}
	
	cout<<result;

	return 0;	
}
