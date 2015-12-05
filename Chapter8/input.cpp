#include <iostream>

using namespace std;

int main(){
	int x;

	cout << "Enter an integer: ";

	cin >> x;

	if (cin.good() == false){
		cout << "That was not an integer." << endl;
		return -1;
	}

	cout << x << endl;
	return 0;
}
