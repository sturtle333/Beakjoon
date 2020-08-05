#include<iostream>
#include<algorithm>
#define ull unsigned long long int
#define uint unsigned int

using namespace std;

void swap (int *arr, int a, int b){
	int tmp = arr[a];
	arr[a] = arr[b];
	arr[b] = tmp;
}

void Qsort(int *arr, int start, int end){
	int pivot = arr[start];
	int left = start+1;
	int right = end;

	while(left <= right){
		while(arr[left] < pivot) left++;
		while(arr[right] > pivot) right--;

		if(left <= right) swap(arr,left, right);
	}

	if(start < end){
		swap(arr, start, right);
		Qsort(arr, start, right-1);
		Qsort(arr, right+1, end);
	}
	return;
}

int main(void){
	cin.tie(nullptr);

	uint T; cin >> T;

	uint arr[T];
	for(int i=0; i<T;i++){
		cin >> arr[i];
	}

	return 0;
}