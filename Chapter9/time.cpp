#include <iostream>

using namespace std;

struct Time {
	int hour, minute;
	double second;
};

void printTime (const Time& t){
	cout << t.hour << ":" << t.minute << ":" << t.second << endl;
}

bool after(Time& time1, Time& time2){
	if (time1.hour > time2.hour) return true;
	if (time1.hour < time2.hour) return false;

	if (time1.minute > time2.minute) return true;
	if (time1.minute < time2.minute) return false;

	if (time1.second > time2.second) return true;
	return false;
}

Time addTime (const Time& t1, const Time& t2){
	Time sum;
	sum.hour = t1.hour + t2.hour;
	sum.minute = t1.minute + t2.minute;
	sum.second = t1.second + t2.second;
	
	if (sum.second >= 60.0){
		sum.second -= 60.0;
		sum.minute += 1;
	}
	if (sum.minute >= 60) {
		sum.minute -= 60;
		sum.hour += 1;
	}

	return sum;

}

void increment (Time& time, double secs){
	time.second += secs;
	
	while (time.second >= 60.0){
		time.second -= 60.0;
		time.minute += 1;
	}

	while (time.minute >= 60){
		time.minute -= 60;
		time.hour += 1;
	}
}


void addTimeFill (const Time& t1, const Time& t2, Time& sum){
	sum.hour = t1.hour + t2.hour;
	sum.minute = t1.minute + t2.minute;
	sum.second = t1.second + t2.second;

	if (sum.second >= 60.0){
		sum.second -= 60.0;
		sum.minute += 1;
	}	
	if (sum.minute >= 60){
		sum.minute -= 60;
		sum.hour += 1;
	}
}


int main(){
	Time currentTime = {9, 14, 30.0};
	Time breadTime = {3, 35, 40.0};
	Time doneTime = addTime(currentTime, breadTime);
	printTime (doneTime);
	return 0;
}
