#include <iostream>
using namespace std;

void printParity (int x){
	if (x%2 == 0) {
		cout << "x is even" << endl;
	} else {
		cout << "x is odd" << endl;
	}

}
int main(){
	printParity(17);
	printParity(16);
	return 0;
}
