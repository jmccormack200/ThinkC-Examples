#include <iostream>

using namespace std;

struct Point{
	double x, y;
};

void printPoint (Point p){
	cout << "(" << p.x << "," << p.y << ")" << endl;
}

void reflect (Point& p){
	double temp = p.x;
	p.x = p.y;
	p.y = temp;
}

int main(){
	Point blank;
	blank.x = 3.0;
	blank.y = 4.0;

	printPoint(blank);
	reflect(blank);
	printPoint(blank);
	cout << blank.x << endl;
	return 0;
}
