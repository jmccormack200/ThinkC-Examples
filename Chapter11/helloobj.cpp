#include <iostream>

using namespace std;


struct Time {
	int hour, minute;
	double seconds;

	void print();
	void increment(double secs);
	double convertToSeconds() const;
	bool after(const Time& time2) const;
};


Time::Time(double secs){
	hour = int (secs / 3600.0);
	secs -= hour * 3600.0;
	minute = int (secs / 60.0);
	secs -= minute * 60.0;
	second = secs;
}

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

bool Time::after(const Time& time2) const {
	if (hour > time2.hour) return true;
	if (hour < time2.hour) return false;

	if (minute > time2.minute) return true;
	if (minute < time2.minute) return false;

	if (seconds > time2.seconds) return true;
	return false;
}

int main(){
	Time currentTime(5000);
	currentTime.increment(500.0);
	currentTime.print();
	return 0;
}
