#include <iostream>

using namespace std;

struct Time {
	int hour, minute;
	double second;
};

void printTime (Time& t){
	cout << t.hour << ":" << t.minute << ":" << t.second << endl;
}

int main(){
	Time time = {11, 59, 3.14159};
	printTime(time);	
	return 0;
}
