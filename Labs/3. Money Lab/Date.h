#ifndef DATE_H
#define DATE_H

class Date {

private:
	int Day;
	int Month;
	int Year;

public:
	void createDate(Date& date);

	Date getDate();

	void createDate();
};

#endif
