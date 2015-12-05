#include <iostream>

using namespace std;

struct Point{
	double x, y;
};

int main(){
	Point blank;
	blank.x = 3.0;
	blank.y = 4.0;

	cout << blank.x << endl;
	return 0;
}
