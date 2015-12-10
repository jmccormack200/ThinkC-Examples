struct Time {
	int hour, minute;
	double second;

	Time (int hour, int min, double secs);
	Time (double secs);

	void increment(double secs);

	void print() const;
	double convertToSeconds() const;
	bool after(const Time& time2) const;
	Time add(const Time& t2) const;
};

