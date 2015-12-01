#include <cmath>
#include <iostream>

using namespace std;

void printLogarithm (double x){
	if (x <= 0.0) {
		cout << "Positive numbers only, please." << endl;
		return;
	}

	double result = log(x);
	cout << "The log of x is " << result;
}

int main(){
	printLogarithm(100);
	printLogarithm(-10);
	printLogarithm(1000);
	return 0;
}
