#include <iostream>

using namespace std;

int main (void) {
	int N;
	cin>>N;
	
	int W[N+1];
	int L[N+1] = {0,};
	int Num[(N+1)/2];
	bool Stat[N+1] = {false,};
	for(int a=1;a<=N;a++) {
		cin>>W[a];
	}
	

	unsigned int Number = 0;
	unsigned int temp = 100000000;
	unsigned int temp2 = 100000000;
	for (int a=(N+1)/2;a<=N;a++) {
		Stat[a] = true;
		Num[Number++] = a;
		temp = W[a] < temp? W[a] : temp;
	}
	Number--;
	bool loopStat = false;
	while(!loopStat) {
		loopStat = true;
		for (int a=0;a<=Number;a++) {
			L[a] += temp;
			if (L[a] >= W[a]) {
				
				Stat[a] = false;
				L[2*(a-(a%2)] = L[a] > W[a]? L[a]-W[a] : L[2*(a-(a%2))];
			}
			else {
				temp = W[a]-L[a] < temp? W[a]-L[a] : temp; 
			}
		}
	}
	/*
	for (int a=1;a<N;a+=2) {
		cout<<result[a]<<" "<<result[a+1]<<" ";
	}
	cout<<result[N];
	*/
	return 0;
	
	
	/*
	1. ��� 1: ����Լ� ���. �Լ��� ������ �ݺ��ϸ鼭 ��� ������ 1�� �߰�.
	
	����: 	�ð� �ʰ� 
			�� ��ũ�� �뷮�� �� 1����� 0���̷� ���ǵǾ� �ְ�, 1�� �߰��Ѵٴ°� �ʹ� �Ŵ��� 
	
	2. ��� 2:  
	*/
}
