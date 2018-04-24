//Header file containing custom written structures

struct Date
{
	int month;
	int day;
	int year;
	int representation; //year * 10000 + month * 100 + day
};

struct Container
{
	int containerNum;
	char destination[50];
	char description[50];
	struct Date shipDate;
};

typedef struct
{
	int length;
	struct Container containers[MAX];
}List;
