#include<iostream>
using namespace std;
int main(){
	int b1, b2, b3, d1, d2;
	cin >>b1>>b2>>b3>>d1>>d2;
	int tmp, rlt = d1 > d2 ? d2 : d1;
	tmp = b1 > b2 ? b2 : b1;
	tmp = tmp < b3 ? tmp : b3;
	cout << rlt + tmp - 50;
	return 0;
}