extern struct Container emptyContainer = {0};

//-------------------List ADT Function Prototypes---------------------
int getLength(List);
int locate(List, int);
void crate(struct Container);
int isEmpty(List L);
int isFull(List L);
List createList(void);
void insert(List *L, struct Container c);
List sortEarliestFirst(int size, List L);

//-------------------Container Record Function Prototypes----------------------
struct Container createContainer(void);
void editContainer(List *L, int num);
void removeContainer(List *L, int conNum);
void crate(struct Container item);
void shipContainers(List *L);
int shipping(List L, struct Date d);
void containersOnDate(struct Date d, List L);
void Inventory(List L);
struct Container retrieve(List L, int pos);
struct Container ship(List *L);


//------------------List ADT Function Definitions-----------------
int isEmpty(List L)
{
	return !L.length;
}

int isFull(List L)
{
	return L.length == MAX;
}

List createList(void)
{
	List L = {0};

	return L;
}

int locate(List L, int contNum)//Person would not have to put in all container information only the ship number as it is unique
{//Binary Search not possible, sorted by date not 
	int i;
	
	for(i = 0; i < L.length; i++)
	{
		if(L.containers[i].containerNum == contNum)
		{
			return i + 1;
		}
	}
	return -1;
}

void insert(List *L, struct Container c) //position will always be the end of the list
{
	if(locate(*L, c.containerNum) == -1) //Search for container with same shipnumber
	{
		if(L->length == MAX)
		{
			puts("\nMound is full. Cannot add containers right now.");
		}
		else
		{
			L->containers[L->length] = c;
			L->length++;

			puts("\nContainer successfully added.");
		}
	}
	else
	{
		printf("\nContainer not added, another container already has number %i.\n", c.containerNum);
	}
}

int getLength(List L)
{
	return L.length;
}

List sortEarliestFirst(int size, List L) //Implemented using selection sort, implementation of traverse
{
	int i , j, min;
	struct Container temp;

	for(i = 0;i < size - 1; i++)
	{
		min = i;
		for(j = i + 1; j < size; j++)
		{
			if(compareDate(L.containers[j].shipDate, L.containers[min].shipDate) < 0)
			{
				min = j;
			}
		}
		temp = L.containers[i];
		L.containers[i] = L.containers[min];
		L.containers[min] = temp;
	}
	return L; //List now sorted
}

//-------------------Container Record Function Definitions----------------------

struct Container createContainer(void)
{
	struct Container container;

	container.containerNum = boundedIntRetrieval("Container #? <4 digits>", 1000, 9999);

	puts("\nDestination?");
	fflush(stdin);
	gets(container.destination);
	fflush(stdin);

	puts("\nDescription of contents?");
	gets(container.description);
	fflush(stdin);
	puts("");
	container.shipDate = readDate("Date to be shipped?");

	return container;
}

void crate(struct Container item)
{
	printf("--------------------------------------------------------------------------------");
	printf("Container #:\t%i\n", item.containerNum);
	printf("Ship.  date:\t");
	printDate(item.shipDate);
	printf("\nDestination:\t%s\n", item.destination);
	printf("Description:\t%s\n", item.description);
	printf("--------------------------------------------------------------------------------");
}

void removeContainer(List *L, int conNum) //Delete operation essentially cancels orders
{
	int i, j = locate(*L, conNum);

	if(j == -1)
	{
		puts("\nContainer does not exist. Removal failure.");
	}
	else
	{
		for(i = j - 1; i < getLength(*L) - 1; i++)
		{
			L->containers[i] = L->containers[i + 1];
		}
		L->length--;

		puts("\nContainer successfully removed!");
	}
}

void shipContainers(List *L)
{
	int number, i;

	if((number = shipping(*L, readDate("Shipment date"))) == -1)
	{
		printf("\nNo containers to be shipped. ");
		system("pause");
	}
	else
	{
		system("cls");
		header();
		puts("Containers being sent for shipping:");
		for(i = 1; i <= number + 1; i++)
		{
			//Temporarily crate, should be replaced by something better
			crate(ship(L));
			if(!(i%3))
			{
				printf("                   Page %i of %i. ", i/3 + !(!(i%3)), (number + 1)/3 + !(!((number + 1)%3)));
				system("pause & cls");
				header();
				puts("Containers being sent for shipping:");
			}
		}
		printf("                   Page %i of %i. ", i/3 + !(!(i%3)), (number + 1)/3 + !(!((number + 1)%3)));
		system("pause & cls");
		header();
		printf("Containers have been sent off! ");
		system("pause");
	}
}

int shipping(List L, struct Date d)
{
	int i = -1;

	while(compareDate(L.containers[i+1].shipDate, d) <= 0 && i + 1 < getLength(L))
	{
		i++;
	}

	return i;
}

void containersOnDate(struct Date d, List L) //shows all containers moving on day
{
	int low, high, mid, i = 0, j = 0, k, pass = 0;
	
	low = 0;
	high = getLength(L) - 1;
	
	do
	{
		mid = (low + high)/2;
		if(compareDate(L.containers[mid].shipDate, d) < 0)
		{
			low = mid + 1;
		}
		else
		{
			if(compareDate(L.containers[mid].shipDate, d) > 0)
			{
				high = mid - 1;
			}
			else
			{
				while(!compareDate(retrieve(L, mid - i).shipDate, d))
				{
					i++;
				}
				while(!compareDate(retrieve(L, mid + j + 2).shipDate, d))
				{
					j++;
				}
				break;
			}
		}
	}while(low <= high);

	if(low <= high)
	{
		system("cls");
		header();
		printf("Containers shipping on %i - %i - %i:\n\n", d.day, d.month, d.year);
		for(k = mid - i; k <= mid + j; k++)
		{
			pass++;
			printf("--------------------------------------------------------------------------------");
			printf("Container #:\t%i\n", L.containers[k].containerNum);
			printf("Destination:\t%s\n", L.containers[k].destination);
			printf("Description:\t%s\n", L.containers[k].description);
			printf("--------------------------------------------------------------------------------");
			if(!(pass%3))
			{
				system("pause & cls");
				header();
				printf("Containers shipping on %i - %i - %i:\n\n", d.day, d.month, d.year);
			}
		}
	}
	else
	{
		printf("\nNothing being shipped on %i - %i - %i. ", d.day, d.month, d.year);
	}
	system("pause");
}

void editContainer(List *L, int num)	
{	
	int index;

	index = locate(*L, num) - 1;

	if(index == -2)
	{
		puts("\nContainer not found in system.");
		return;
	}

	puts("\nCurrent container info.:");
	crate(L->containers[index]);

	puts("\nNew destination?");
	fflush(stdin);
	gets(L->containers[index].destination);
	fflush(stdin);

	puts("\nNew description?");
	fflush(stdin);
	gets(L->containers[index].description);
	fflush(stdin);
}

void Inventory(List L)
{
	int i;

	if(isEmpty(L))
	{
		printf("\nNo containers on board. ");
		system("pause");
	}
	else
	{
		for(i = 1; i <= getLength(L); i++)
		{
			crate(L.containers[i - 1]);
			if(!(i%3) || i == getLength(L))
			{
				printf("\n                   Page %i of %i. ", i/3 + !(!(i%3)), getLength(L)/3 + !(!(getLength(L)%3)));
				system("pause & cls");
				header();
			}
		}
	}
}

struct Container retrieve(List L, int pos)
{
	return (pos > getLength(L) || pos < 1)? emptyContainer : L.containers[pos - 1];
}

struct Container ship(List *L) //Similar to pop/dequeue operation
{
	struct Container c;
	int i;

	c = L->containers[0];

	for(i = 0; i < getLength(*L); i++)
	{
		L->containers[i] = L-> containers[i + 1];
	}
	L->length--;
	return c;
}