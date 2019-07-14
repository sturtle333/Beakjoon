#include <iostream>

using namespace std;

int main () {
	int N;
	int result[2] = {0,0};
	cin>>N;
	
	int S[N][2];
	bool Stat[N] = {false,};
	for (int a=0;a<N;a++) {
		cin>>S[a][0]>>S[a][1];
	}
	
	int min = S[0][0];
	int max = S[0][1];
	
	for (int a=0;a<N;a++) {
		if (S[a][1] >= max)
			max=S[a][1];
		if (S[a][0] <= min)
			min=S[a][0];
	}
	bool isStat = false;
	bool isSecond = false;
	while (!isStat) {
		isStat = true;
		int timeTemp[max-min][2]; //시간 정보 저장 - 시간/횟수 
		
		for (int a=min;a<max;a++) {
			for (int b=0;b<N;b++) {
				if (S[b][0] <= a && S[b][1] >= a && Stat[b]!=true) {
					timeTemp[a - min][0] = a;
					timeTemp[a - min][1]++;
					isStat = false;
				}
			}
		}
		
		if (isStat == true) {
			break;
		}
		
		int temp[2] = {0,0};
		for (int a=0;a<max-min&&isStat!=true&&isSecond==false;a++) { //남아있는 팬들 중 최적의 시간 도출 - 시간/횟수 
			if (temp[1] <= timeTemp[a][1]) {
				temp[1] = timeTemp[a][1];
				temp[0] = timeTemp[a][0];
			}
		}
		for (int a=max-min;a>0&&isStat!=true&&isSecond==true;a--) { //남아있는 팬들 중 최적의 시간 도출 - 시간/횟수 
			if (temp[1] <= timeTemp[a][1]) {
				temp[1] = timeTemp[a][1];
				temp[0] = timeTemp[a][0];
			}
		}
		for (int a=0;a<N&&isStat!=true;a++) { //방 문  
			if (S[a][0] <= temp[0] && S[a][1] >= temp[0] && Stat[a] == false) {
				Stat[a] = true;
			}
		}
		if (isStat != true && isSecond == false) {
			result[0] = temp[0];
		}
		else if (isStat != true && isSecond != false) {
			result[1] = temp[0];
		}
		isSecond = true;
	}
	
	if (result[1] == 0) 
		cout<<"0";
	else
		cout<<result[1]-result[0];
	
	return 0;
}
