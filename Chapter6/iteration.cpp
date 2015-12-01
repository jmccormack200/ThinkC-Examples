#include <iostream>

using namespace std;

int countdown(int n) {
	while (n > 0){
		cout << n << endl;
		n = n-1;
	}
	cout << "Blastoff!" << endl;
	return 0;
}

int main(){
	countdown(10);
	countdown(20);
	countdown(-1);
	return 0;
}
