#include <iostream>

using namespace std;

int main(){
	string first;
	first = "Hello, ";
	string second = "world.";
	cout << first << second << endl;

	string fruit = "bananana";
	char letter = fruit[1];
	cout << letter << endl;

	int length;
	length = fruit.length();
	cout << length << endl;

	int index = 0;
	while (index < fruit.length()){
		char letter = fruit[index];
		cout << letter << endl;
		index = index + 1;
	}

	return 0;
}
