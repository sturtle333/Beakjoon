#include<iostream>
#include<algorithm>

using namespace std;

template <typename T>

class Node
{
private:
	T value;
	Node* root;
	Node* [] child;
	int length;

public:
	Node() : value(0), root(nullptr), length(0) {};
	Node(T _value) : value(_value), root(nullptr)
};

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	return 0;
}