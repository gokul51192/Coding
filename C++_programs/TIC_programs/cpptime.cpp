#include <iostream>
using namespace std;
#include <ctime>
#include <cstring>
#include <stdlib.h>
#include<unistd.h>
class Time {
	std::time_t t;
	std::tm local;
	char asciiRep[26];
	unsigned char lflag, aflag;
	void updateLocal() {
		if(!lflag) {
			local = *std::localtime(&t);
			lflag++;
		}
	}
	void updateAscii() {
		if(!aflag) {
			updateLocal();
			std::strcpy(asciiRep,std::asctime(&local));
			aflag++;
		}
	}
	public:
	Time() { mark(); }
	void mark() {
		lflag = aflag = 0;
		std::time(&t);
	}
	const char* ascii() {
		updateAscii();
		return asciiRep;
	}
	// Difference in seconds:
	int delta(Time* dt) const {
		return int(std::difftime(t, dt->t));
	}
	int daylightSavings() {
		updateLocal();
		return local.tm_isdst;
	}
	int dayOfYear() { // Since January 1
		updateLocal();
		return local.tm_yday;
	}
	int dayOfWeek() { // Since Sunday
		updateLocal();
		return local.tm_wday;
	}
	int since1900() { // Years since 1900
		updateLocal();
		return local.tm_year;
	}
	int month() { // Since January
		updateLocal();
		return local.tm_mon;
	}
	int dayOfMonth() {
		updateLocal();
		return local.tm_mday;
	}
	int hour() { // Since midnight, 24-hour clock
		updateLocal();
		return local.tm_hour;
	}
	int minute() {
		updateLocal();
		return local.tm_min;
	}
	int second() {
		updateLocal();
		return local.tm_sec;
	}
};
int main() {
	Time start;
	for(int i = 1; i < 1000; i++) {
		cout << i << ' ';
		if(i%10 == 0) cout << endl;
	}
	sleep(2);
	Time end;
	cout << endl;
	cout << "start = " << start.ascii();
	cout << "end = " << end.ascii();
	cout << "delta = " << end.delta(&start);
	return 0;
} ///:~
