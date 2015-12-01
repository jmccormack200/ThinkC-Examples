#include <iostream>
#include <cmath>

using namespace std;

double area(double radius){
	double pi = acos(-1.0);
	double area = pi * radius * radius;
	return area;
}

double absoluteValue (double x){
	if (x < 0){
		return -x;
	} else {
		return x;
	}
}	

int main(){
	return 0;
}
