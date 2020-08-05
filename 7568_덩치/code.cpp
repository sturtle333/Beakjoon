#include<iostream>

using namespace std;

class Person {
	public:

	int h;
	int w;
	int lvl = 1;
};

int comp (Person p1, Person p2){
		if (p1.h > p2.h && p1.w > p2.w) 	return 1;
	else 	if (p1.h < p2.h && p1.w < p2.w)	return 2;
	else					return 3;
}

int main(){
	int N; cin >> N;

	Person *person = new Person[N];
	
	for(int i=0; i<N; i++) cin >> person[i].w >> person[i].h;

	for(int i=0; i<N; i++) for (int j=i+1; j<N; j++) switch(comp(person[i], person[j])){
		case 1:
			person[j].lvl+=1;
			break;
		case 2:
			person[i].lvl+=1;
			break;
		default:
			break;
	}

	for(int i=0; i<N; i++) cout << person[i].lvl << " ";

	return 0;
}