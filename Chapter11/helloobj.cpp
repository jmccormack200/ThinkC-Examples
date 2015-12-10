#include <iostream>

using namespace std;


struct Time {
	int hour, minute;
	double seconds;

	void print();
	void increment(double secs);
	double convertToSeconds() const;
};


void Time::print(){
	Time time = *this;
	cout << time.hour << ":" << time.minute << ":" << time.seconds << endl;
}

void Time::increment (double secs){
	seconds += secs;

	while (seconds >= 60.0){
		seconds -= 60.0;
		minute += 1;
	}

	while (minute >= 60){
		minute -= 60.0;
		hour += 1;
	}
}

double Time::convertToSeconds () const {
	int minutes = hour * 60 + minute;
	double seconds = minutes * 60 + seconds;
	return seconds;
}

int main(){
	Time currentTime = { 9, 14, 30.0 };
	currentTime.increment(500.0);
	currentTime.print();
	return 0;
}
