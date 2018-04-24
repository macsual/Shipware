/*******************
	Company: We Can Cross It
	
	Date: October 22, 2013
	
	Description:PBS shipping company deals with the shipping of all kinds of products to countries all over 
	the world. They want an efficient way of monitoring the containers on the property to ensure that the 
	containers that will be shipped first are placed on top of the containers that will be shipped later. 
	To do this the company needs the following data:container number, shipping date and destination. The 
	company wants to develop a system that will work out how to place the containers so it decides to test 
	the system using a single mound (pile) with a maximum capacity of 20 containers.
*******************/

#pragma warning(disable: 4996)

#define MAX 20 //Maximum containers that can be in a mound

//-------------- Standard C Header Files ------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <Windows.h>
#include <time.h>
//---------------------------------------------------

#include "Graphics.h"
#include "structures.h"
#include "Date.h"

void header(void)
{
	puts("                          S H I P W A R E by We Can Cross It");
	puts("                          ----------------------------------");
	showDate();
}

int menu(void)
{
	int response;
	
	do
	{
		header();
		puts("\t1\t-\tCreate a new container\n");
		puts("\t2\t-\tShip Container(s)\n");
		puts("\t3\t-\tSearch for container\n");
		puts("\t4\t-\tContainers shipping on date\n");
		puts("\t5\t-\tView inventory\n");
		puts("\t6\t-\tEdit container\n");
		puts("\t7\t-\tRemove container\n");
		puts("\t8\t-\tChange password\n");
		puts("\t9\t-\tExit program\n");

		puts("Choice?");
		scanf("%i", &response);
		fflush(stdin);
		system("cls");
	}while(response > 9 || response < 1);

	return response;
}

void exitScreen(void)
{
	puts("Program ending in");
	puts("3...");
	Sleep(1000);
	puts("2...");
	Sleep(1000);
	puts("1...");
	Sleep(1000);
}

int boundedIntRetrieval(char *display, int min, int max)
{
	int val, i = 0;
	
	do
	{
		if(i > 0)
		{
			system("cls");
			printf("Invalid entry! ");
		}

		puts(display);
		scanf("%i", &val);
		fflush(stdin);
		i++;
	}while(val > max || val < min);
	return val;
}

struct Date readDate(char * display)
{
	struct Date d;
	int i = 0;

	do
	{
		if(i > 0)
		{
			system("cls");
			header();
			printf("Invalid date. ");
		}

		puts(display);
		puts("Enter day");
		scanf("%i", &d.day);

		puts("\nEnter month");
		scanf("%i", &d.month);

		puts("\nEnter year");
		scanf("%i", &d.year);
		i++;
	}while(!valDate(&d));

	d.representation = d.day + d.month * 100 + d.year * 10000;
	return d;
}

#include "ADT and Record Operations.h"
#include "Filing.h"
#include "Password.h"

int main(void)
{
	List mound = createList();
	
	int i, j, condition;

	splash();

	system("color 71 & title Shipware");

	if((i = login())) 
	{
		if(i == 1)
		{
			mound = readFromFile();	
		}
		do
		{
			switch(j = menu())
			{
				case 1:
					do
					{
						header();
						insert(&mound, createContainer());
						mound = sortEarliestFirst(getLength(mound), mound);

						puts("\nAdd another container? (1 - yes, 0 - no)");
						scanf("%i", &condition);
						fflush(stdin);

						system("cls");
					}while(condition == 1);
					break;
				
				case 2:
					header();
					shipContainers(&mound);
					break;
				
				case 3:
					do
					{
						header();
						puts("Container number?");
						scanf("%i", &i);

						if(locate(mound, i) == -1)
						{
							puts("\nContainer not found.");
						}
						else
						{
							printf("\nContainer is in position %i to be shipped.\n", locate(mound, i));
						}

						puts("\nFind another container? (1 - yes, 0 - no)");
						scanf("%i", &condition);
						fflush(stdin);

						system("cls");
					}while(condition == 1);
					break;
				
				case 4:
					header();
					containersOnDate(readDate("Enter date"), mound);
					break;
				
				case 5:
					header();
					Inventory(mound);
					break;
				
				case 6:
					do
					{
						header();
						puts("Container number?");
						scanf("%i", &i);
						editContainer(&mound, i);
						mound = sortEarliestFirst(getLength(mound), mound);

						puts("\nContainer information modified.");

						puts("\nEdit another container's info.? (1 - yes, 0 - no)");
						scanf("%i", &condition);
						fflush(stdin);

						system("cls");
					}while(condition == 1);
					break;
				
				case 7:
					do
					{
						header();
						puts("Container number?");
						scanf("%i", &i);
						removeContainer(&mound, i);
						mound = sortEarliestFirst(getLength(mound), mound);

						puts("\nRemove another container? (1 - yes, 0 - no)");
						scanf("%i", &condition);
						fflush(stdin);

						system("cls");
					}while(condition == 1);
					break;

				case 8:
					changePassword();
					printf("\n\nPassword has been changed. ");
					system("pause");
					break;
			}
			system("cls");
			writeToFile(mound);
		}while(j != 9);
	}
	else
	{
		passwordFailure();
		return 5;
	}
	header();
	exitScreen();
	return 0;
}