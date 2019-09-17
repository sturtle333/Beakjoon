#include <iostream>
#define lint long long int

using namespace std;

int main (void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	char str[1000001];
	lint length = 0;
	lint value = 0;
	
	int stat = 1;
	
	while(1) {
		str[length] = cin.get();
		if (str[length] == ' ') stat = 1;
		
		else if (str[length++] == '\n') break;

		else if (stat == 1) {
			value += 1;
			stat = 0;
		}
	}
	
	cout << value;
	return 0;
}
