//Header file containing functions for manipulation of dates

struct tm* currentDate()
{
	time_t t;
	
	time(&t);

	return localtime(&t);
}

int valLeapYear(int *y)
{
	return !(*y%4) ? (!(*y%100) ? !(*y%400) : 1) : 0; //A leap year is either divisible by 4 AND NOT divisible by 100 or divisble by 4, 100 AND 400
}

int valDate(struct Date *d)
{
	int monthsDays[] = {31, 28 + valLeapYear(&d->year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	return ((d->day > 0) && (d->day <= monthsDays[d->month - 1]) && (d->month > 0) && (d->month < 13)); //months 1 - 12, days 1 - 31 and day in corresponding days range for month
}

int compareDate(struct Date first, struct Date second)
{
	return first.representation - second.representation;//negative number means first is before second, 0 means same date, and positive means second is before first
}

void printDate(struct Date d)
{
	printf("%d - %d - %d", d.day, d.month, d.year);
}

void showDate()
{
	char today[30];

	strftime(today, 30, "%A, %B %d, %Y", currentDate());

	printf("                             <%s>\n\n\n", today);
}