/*
Name: Romario Maxwell
Date: March 1, 2013
School: Campion College
Purpose: Private header file for password functions
*/

char* readPassword(void) //only backspace and home buttons allowed to undo mistakes
{
	char *test, *pass = NULL;
	
	int ch, i = 0;

	do
	{
		ch = getch(); //get input

		switch(ch)
		{
			default: 
				++i; //resize string length

				if((test = (char *)realloc(pass, (i + 1) * sizeof(char))) != NULL) 
				{
					pass = test; //resizes array for string
				
					pass[i - 1] = ch; //copies input to string
					pass[i] = '\0';

					putchar('*');
				}
				else //in case memory not available, unlikely to occur
				{
					return pass;
				}

				break;

			case 8: //backspace key
				if(i) //check for empty string
				{
					printf("\b \b"); //remove character preceding backspace from screen

					pass[i - 1] = '\0'; //terminating null character for string

					if((test = (char *)realloc(pass, i * sizeof(char))) == NULL) //resize string array
					{
						return pass;
					}
					else
					{
						pass = test;

						--i; //resizes string length
					}
				}
				else
				{
					free(pass);
					pass = NULL;
				}

				break;

			case 13:
				if(!i)
				{
					ch = 0; //to ensure loop continues
				}
				break;

			case 224: 
				ch = getch();
				switch(ch)
				{
					case 72: //up arrow key
						while(i)
						{
							printf("\b \b"); 

							i--;
						}

						free(pass);
						pass = NULL;
						break;

					default:
						break;
				}
				break;

			case 0:
				ch = getch();
				break;

			case 9: //tab key
				break;
		}
	}while(ch !=  13); //Enter key = 13

	return pass;
}

char* verifyPassword(void)
{
	int condition;

	char *pass, *pass_check;
	
	do
	{
		header();
		puts("Create password:");
		pass = readPassword();

		puts("\n\nRe-enter password:");
		pass_check = readPassword();

		if(strcmp(pass, pass_check))
		{
			free(pass);

			condition = 0;
			printf("\n\nFields do not match! ");
			system("pause & cls");
		}
		else
		{
			condition = 1;
		}

		free(pass_check);
	}while(condition != 1);
	
	return pass;
}

int newPassword(void)
{
	FILE *fp;
	
	char *pass;
	
	pass = verifyPassword();

	system("ATTRIB -H  -R password.dat>NUL"); //removes 'read-only' and 'hidden' attributes if file existent

	if((fp = fopen("password.dat", "wb+")) == NULL)
	{
		system("ATTRIB +H +R password.dat>NUL");

		fprintf(stderr, "Password file could not be created. ");
		system("pause & cls");
		
		return 0;
	}
	else
	{
		fwrite(pass, sizeof(char), strlen(pass) + 1, fp);
		fclose(fp);
	}
	system("ATTRIB +H +R password.dat>NUL"); //hides file and makes it read only

	return 1;
}

char* getSavedPassword(void)
{
	int i = 0;
	
	char *saved_pass = NULL, *test;

	FILE *fp;

	system("ATTRIB -H password.dat>NUL"); //redirected to NUL to avoid echo if file doesn't exist, causes read error if not unhidden

	if((fp = fopen("password.dat", "rb")) != NULL)
	{
		do
		{
			i++;

			if((test = (char *)realloc(saved_pass, i * sizeof(char))) == NULL)
			{
				saved_pass[i - 2] = '\0'; 
				break;
			}
			else
			{
				saved_pass = test;

				fread(&saved_pass[i - 1], sizeof(char), 1, fp);
			}
		}while(saved_pass[i - 1] != '\0');
		fclose(fp);
		system("ATTRIB +H password.dat>NUL");
	}

	return saved_pass; //NULL if file doesn't exist
}

int password(void)
{
	int match;

	char *pass, *saved_pass;
	
	if((saved_pass = getSavedPassword()) == NULL)
	{
		system("cls");
		match = newPassword();
	}
	else
	{
		puts("Enter password:");
		pass = readPassword();
		match = !strcmp(pass, saved_pass);

		free(pass);
		free(saved_pass);
	}
	
	return match == 1? (emptyFile("pbs shipping.dat")? 2 : 1) : 0;
}

int login(void)
{
	int match, i = 0;

	do
	{
		i++;
		header();
		printf("Login attempt %i of 4\n\n", i);
		printf((match = password())? "\n\nAccess granted! " : "\n\nAccess denied! ");
		system("pause & cls");
	}while(!match && i < 4);

	return match;
}

void passwordFailure(void)
{
	system("cls");
	header();
	puts("All login attempts exhausted.");
	puts("");
	exitScreen();
}

void changePassword(void)
{
	int match = 0;

	char * storedPass;

	storedPass = getSavedPassword();

	do
	{
		header();
		printf((match = password())? "\n\nAccess granted! " : "\n\nAccess denied! ");
		system("pause & cls");
	}while(!match);
	
	free(storedPass);

	system("ATTRIB -H -R password.dat>NUL");

	newPassword();
}