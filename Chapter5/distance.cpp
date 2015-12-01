#include <iostream>
#include <cmath>

using namespace std;

double area(double radius){
	return acos(-1.0) * radius * radius;
}


double distance (double x1, double y1, double x2, double y2){
	double dx = x2 - x1;
	double dy = y2 - y1;
	double dsquared = dx*dx + dy * dy;
	double result = sqrt(dsquared);
	return result;
}

double area(double xc, double yc, double xp, double yp){
	double radius = distance(xc, yc, xp, yp);
	double result = area(radius);
	return result;
}	

int main(){
	return 0;
}
