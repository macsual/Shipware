//Graphics.h is a header file containing various ASCII art used throughout the Shipware program

#define aniVal 25

void seaShade(void)
{
	puts("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~");
	puts("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~");
	puts("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~");
	puts("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~");
	puts("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~");
	puts("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~");
	puts("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~");
	puts("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~");
}

void animate(int value)
{
	Sleep(value);
	system("cls");
}

void altWave(void)
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hConsole, 1);

	puts(",(   ,(   ,(   ,(   ,(   ,(   ,(   ,(  ,(   ,(   ,(   ,(   ,(    ");
	puts("  `-'  `-'  `-'  `-'  `-'  `-'  `-'  `-'  `-'  `-'  `-'  `-'  `-'  `-'  ");
}

void wave(void)
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hConsole, 1);

	puts("	,(   ,(   ,(   ,(   ,(   ,(   ,(   ,(  ,(   ,(   ,(   ,(   ,(    ");
	puts("`-'  `-'  `-'  `-'  `-'  `-'  `-'  `-'  `-'  `-'  `-'  `-'  `-'  `-'  `-'  ");
}

void blankBlock(void)
{
	puts("");
	puts("");
	puts("");
	puts("");
	puts("");
	puts("");
	puts("");
	puts("");
}

void splash(void)
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	SetConsoleTextAttribute(hConsole, 15);

	puts("   o _    o");
	printf("           o ' ");		printf(" o '");		printf(" o .\n");   //block 1
	printf("              ");		printf("   ");		printf("  \n");
	printf("             . o '");   printf("  o .");    printf("  . \n");
	printf("            .");		printf("  o . o");   printf("    . o\n");
	printf("             o . o");   printf("  .");     printf("  o \n");
	printf("            .");		printf(" ");     printf("   \n");
	printf("             . o ");   printf("  o . o");    printf(" .o\n");



	SetConsoleTextAttribute(hConsole, 12);
	puts("            |==|  |==|  |==|");
	puts("          __|__|__|__|__|__|_");
	SetConsoleTextAttribute(hConsole, 7);
	puts("       __|___________________|___");
	puts("    __|__[]__[]__[]__[]__[]__[]__|___");
	puts("   |............................o.../");
	puts("   |.............................../");
		
		
	wave();

	seaShade();

	animate(aniVal);

	SetConsoleTextAttribute(hConsole, 15);

	puts("   . _    .");
	printf("       o    . ' ");		printf(" . '");		printf(" . o\n");   //block 2
	printf("         .     ");		printf("   ");		printf("  \n");
	printf("             o . '");   printf("  . o");    printf("  o \n");
	printf("            o");		printf("  . o .");   printf("    o .\n");
	printf("             . o .");   printf("  o");     printf("  . \n");
	printf("            o");		printf(" ");     printf("   \n");
	printf("              . o");   printf("   o .");    printf(" o.\n");




	SetConsoleTextAttribute(hConsole, 12);
	puts("             |==|  |==|  |==|");
	puts("           __|__|__|__|__|__|_");
	SetConsoleTextAttribute(hConsole, 7);
	puts("        __|___________________|___");
	puts("     __|__[]__[]__[]__[]__[]__[]__|___");
	puts("    |............................o.../");
	puts("    |.............................../");



	altWave();

	seaShade();

	animate(aniVal);

	SetConsoleTextAttribute(hConsole, 15);
	puts("   o _   o");
	printf("       .    o ' ");		printf(" o '");		printf(" o .\n");   //block 1
	printf("      .   o     ");		printf("   ");		printf("  \n");
	printf("             . o '");   printf("  o .");    printf("  . \n");
	printf("            .");		printf("  o . o");   printf("    . o\n");
	printf("             o . o");   printf("  .");     printf("  o \n");
	printf("            .");		printf(" ");     printf("   \n");
	printf("             . o .");   printf("  o . o");    printf(" .o\n");


	SetConsoleTextAttribute(hConsole, 12);
	puts("              |==|  |==|  |==|");
	puts("            __|__|__|__|__|__|_");
	SetConsoleTextAttribute(hConsole, 7);
	puts("         __|___________________|___");
	puts("      __|__[]__[]__[]__[]__[]__[]__|___");
	puts("     |............................o.../");
	puts("     |.............................../");
		
		

	wave();    	

	seaShade();

	animate(aniVal);

	SetConsoleTextAttribute(hConsole, 15);

	puts("   . _    .");
	printf("       o    . ' ");		printf(" . '");		printf("  . o\n");   //block 2
	printf("         .     ");		printf("   ");		printf("   \n");
	printf("             o . '");   printf("  . o");    printf("   o \n");
	printf("            o");		printf("  . o .");   printf("     o .\n");
	printf("             . o .");   printf("  o");     printf("   . \n");
	printf("            o");		printf(" ");     printf("    \n");
	printf("             o . o");   printf("  . o .");    printf("  o.\n");

	SetConsoleTextAttribute(hConsole, 12);
	puts("              |==|  |==|  |==|");
	puts("            __|__|__|__|__|__|_");
	SetConsoleTextAttribute(hConsole, 7);
	puts("         __|___________________|___");
	puts("      __|__[]__[]__[]__[]__[]__[]__|___");
	puts("     |............................o.../");
	puts("     |.............................../");
		
		

	altWave();     

	seaShade();

	animate(aniVal);

	SetConsoleTextAttribute(hConsole, 15);
	puts("   o _   o");
	printf("       .    o ' ");		printf(" o '");		printf("  o .\n");   //block 1
	printf("      .   o     ");		printf("   ");		printf("   \n");
	printf("         o    . o '");   printf("  o .");    printf("    . \n");
	printf("            .");		printf("  o . o");   printf("      . o\n");
	printf("             o . o");   printf("  .");     printf("    o \n");
	printf("            .");		printf(" ");     printf("     \n");
	printf("             . o .");   printf("  o . o");    printf("   .o\n");

		
	SetConsoleTextAttribute(hConsole, 12);
	puts("               |==|  |==|  |==|");
	puts("             __|__|__|__|__|__|_");
	SetConsoleTextAttribute(hConsole, 7);
	puts("          __|___________________|___");
	puts("       __|__[]__[]__[]__[]__[]__[]__|___");
	puts("      |............................o.../");
	puts("      |.............................../");

		
		
	wave(); 

	seaShade();

	animate(aniVal);

	SetConsoleTextAttribute(hConsole, 15);

	puts("   . _    .");
	printf("       o    . ' ");		printf(" . '");		printf("  . o\n");   //block 2
	printf("      o   .     ");		printf("   ");		printf("   \n");
	printf("             o . '");   printf("  . o");    printf("   o \n");
	printf("            o");		printf("  . o .");   printf("     o .\n");
	printf("             . o .");   printf("  o");     printf("   . \n");
	printf("            o");		printf(" ");     printf("    \n");
	printf("                . o");   printf("     o .");    printf("   o.\n");

	SetConsoleTextAttribute(hConsole, 12);
	puts("                |==|  |==|  |==|");
	puts("              __|__|__|__|__|__|_");
	SetConsoleTextAttribute(hConsole, 7);
	puts("           __|___________________|___");
	puts("        __|__[]__[]__[]__[]__[]__[]__|___");
	puts("       |............................o.../");
	puts("       |.............................../");

		
		
	altWave();  

	seaShade();

	animate(aniVal);

	SetConsoleTextAttribute(hConsole, 15);
	puts("   o _   o");
	printf("       .    o ' ");		printf(" o '");		printf("  o .\n");   //block 1
	printf("      .   o     ");		printf("   ");		printf("   \n");
	printf("         o    . o '");   printf("  o .");    printf("    . \n");
	printf("            .");		printf("  o . o");   printf("      . o\n");
	printf("             o . o");   printf("  .");     printf("    o \n");
	printf("            .");		printf(" ");     printf("     \n");
	printf("                 .o .");   printf("    .o");    printf("   .o\n");

	SetConsoleTextAttribute(hConsole, 12);
	puts("                 |==|  |==|  |==|");
	puts("               __|__|__|__|__|__|_");
	SetConsoleTextAttribute(hConsole, 7);
	puts("            __|___________________|___");
	puts("         __|__[]__[]__[]__[]__[]__[]__|___");
	puts("        |............................o.../");
	puts("        |.............................../");

		
	wave();  

	seaShade();

	animate(aniVal);

	SetConsoleTextAttribute(hConsole, 15);

	puts("   . _    .");
	printf("       o    . ' ");		printf(" . '");		printf("  . o\n");   //block 2
	printf("      o   .     ");		printf("   ");		printf("   \n");
	printf("             o . '");   printf("  . o");    printf("   o \n");
	printf("            o");		printf("  . o .");   printf("     o .\n");
	printf("             . o  .");   printf("  o");     printf("   . \n");
	printf("            . o");		printf(" ");     printf("    \n");
	printf("                 . o");   printf("     o .");    printf("  o.\n");

	SetConsoleTextAttribute(hConsole, 12);
	puts("                  |==|  |==|  |==|");
	puts("                __|__|__|__|__|__|_");
	SetConsoleTextAttribute(hConsole, 7);
	puts("             __|___________________|___");
	puts("          __|__[]__[]__[]__[]__[]__[]__|___");
	puts("         |............................o.../");
	puts("         |.............................../");

	altWave();

	seaShade();

	animate(aniVal);

	SetConsoleTextAttribute(hConsole, 15);
		
	puts("   o _   o");
	printf("       .    o ' ");		printf(" o '");		printf("  o .\n");   //block 1
	printf("       .   o     ");		printf("   ");		printf("   \n");
	printf("          o    . o '");   printf("  o .");    printf("    . \n");
	printf("            .");		printf("  o . o");   printf("      . o\n");
	printf("              o . o");   printf("  .");     printf("    o \n");
	printf("             .");		printf(" ");     printf("     \n");
	printf("                   o .");   printf("    .o");    printf("   .o\n");

	SetConsoleTextAttribute(hConsole, 12);
	puts("                   |==|  |==|  |==|");
	puts("                 __|__|__|__|__|__|_");
	SetConsoleTextAttribute(hConsole, 7);
	puts("              __|___________________|___");
	puts("           __|__[]__[]__[]__[]__[]__[]__|___");
	puts("          |............................o.../");
	puts("          |.............................../");

	wave();

	seaShade();

	animate(aniVal);
		
	SetConsoleTextAttribute(hConsole, 15);

	puts("   . _    .");
	printf("       o    . ' ");		printf(" . '");		printf("  . o\n");   //block 2
	printf("      o   .     ");		printf("   ");		printf("  o \n");
	printf("             o . '");   printf("  . o");    printf("    o \n");
	printf("            o");		printf("  . o .");   printf("      o .\n");
	printf("              . o  .");   printf("  o");     printf("    . \n");
	printf("              . o");		printf(" .");     printf("     o  \n");
	printf("                     . o");   printf("   o .");    printf("  o.\n");

	SetConsoleTextAttribute(hConsole, 12);
	puts("                    |==|  |==|  |==|");
	puts("                  __|__|__|__|__|__|_");
	SetConsoleTextAttribute(hConsole, 7);
	puts("               __|___________________|___");
	puts("            __|__[]__[]__[]__[]__[]__[]__|___");
	puts("           |............................o.../");
	puts("           |.............................../");

	altWave();

	seaShade();
		
	animate(aniVal);

	SetConsoleTextAttribute(hConsole, 15);
		
	puts("   o _   o");
	printf("       .    o ' ");		printf(" o '");		printf("  o .\n");   //block 1
	printf("       .   o     ");		printf("   ");		printf("   \n");
	printf("          o    . o '");   printf("  o .");    printf("    . \n");
	printf("            .");		printf("  o . o");   printf("      . o\n");
	printf("               o . o");   printf("  .");     printf("    o \n");
	printf("            o .");		printf(" o ");     printf("   . o   \n");
	printf("                     o.");   printf("     .o");    printf("   .o\n");


	SetConsoleTextAttribute(hConsole, 12);
	puts("                     |==|  |==|  |==|");
	puts("                   __|__|__|__|__|__|_");
	SetConsoleTextAttribute(hConsole, 7);
	puts("                __|___________________|___");
	puts("             __|__[]__[]__[]__[]__[]__[]__|___");
	puts("            |............................o.../");
	puts("            |.............................../");

	wave();

	seaShade();

	animate(aniVal);

	SetConsoleTextAttribute(hConsole, 15);
	puts("   . _    .");
	printf("       o    . ' ");		printf(" . '");		printf("  . o\n");   //block 2
	printf("      o   .     ");		printf("   ");		printf("  o \n");
	printf("             o . '");   printf("  . o");    printf("    o \n");
	printf("            o");		printf("  . o .");   printf("      o .\n");
	printf("              . o  .");   printf("  o");     printf("    . o \n");
	printf("               . o");		printf(" .");     printf("      o  \n");
	printf("                      . o");   printf("    o .");    printf("   o.\n");

	SetConsoleTextAttribute(hConsole, 12);
	puts("                      |==|  |==|  |==|");
	puts("                    __|__|__|__|__|__|_");
	SetConsoleTextAttribute(hConsole, 7);
	puts("                 __|___________________|___");
	puts("              __|__[]__[]__[]__[]__[]__[]__|___");
	puts("             |............................o.../");
	puts("             |.............................../");

	altWave(); 

	seaShade();

	animate(aniVal);

	SetConsoleTextAttribute(hConsole, 15);
		
	puts("   o _   o");
	printf("       .    o ' ");		printf(" o '");		printf("  o .\n");   //block 1
	printf("       .   o     ");		printf("   ");		printf("   \n");
	printf("          o    . o '");   printf("  o .");    printf("    . \n");
	printf("            .");		printf("  o . o");   printf("      . o\n");
	printf("               o . o");   printf("  .");     printf("    o \n");
	printf("            o .");		printf(" o ");     printf("   . o   \n");
	printf("                     o.");   printf("     .o");    printf("   .o\n");

	SetConsoleTextAttribute(hConsole, 12);
	puts("                      |==|  |==|  |==|");
	puts("                    __|__|__|__|__|__|_");
	SetConsoleTextAttribute(hConsole, 7);
	puts("                 __|___________________|___");
	puts("              __|__[]__[]__[]__[]__[]__[]__|___");
	puts("             |............................o.../");
	puts("             |.............................../");

	
	wave();  

	seaShade();

	animate(aniVal);

	SetConsoleTextAttribute(hConsole, 15);
	puts("   . _    .");
	printf("       o    . ' ");		printf(" . '");		printf("  . o\n");   //block 2
	printf("       o   .     ");		printf("   ");		printf("  o \n");
	printf("             o . '");   printf("  . o");    printf("    o \n");
	printf("            o");		printf("   . o .");   printf("       o .\n");
	printf("              . o  .");   printf("  o");     printf("    .  o \n");
	printf("               . o");		printf(" .o");     printf("       o  \n");
	printf("                      . o");   printf("    o .");    printf("    o.\n");

	SetConsoleTextAttribute(hConsole, 12);
	puts("                       |==|  |==|  |==|");
	puts("                     __|__|__|__|__|__|_");
	SetConsoleTextAttribute(hConsole, 7);
	printf("                  __|___________________|___");			printf("                       _\n");
	printf("               __|__[]__[]__[]__[]__[]__[]__|___");		printf("                  | \n");
	printf("              |............................o.../");		printf("                  | \n");
	printf("              |.............................../");		printf("                   | \n");

	altWave();

	seaShade();

	animate(aniVal);

	SetConsoleTextAttribute(hConsole, 15);
		
	puts("   o _   o");
	printf("        .    o ' ");		printf(" o '");		printf("  o .\n");   //block 1
	printf("        .   o     ");		printf(" .  ");		printf("   \n");
	printf("           o    . o '");   printf("   o .");    printf("   o . \n");
	printf("            .");		printf("    o . o");   printf("      . o\n");
	printf("                 o . o");   printf(" o .");     printf("    o \n");
	printf("            o .");		printf(" o ");     printf("   . o   \n");
	printf("                       o.");   printf("      .o");    printf("    .o\n");

	SetConsoleTextAttribute(hConsole, 12);
	puts("                        |==|  |==|  |==|");
	puts("                      __|__|__|__|__|__|_");
	SetConsoleTextAttribute(hConsole, 7);
	printf("                   __|___________________|___");			printf("                      _\n");
	printf("                __|__[]__[]__[]__[]__[]__[]__|___");		printf("                 | | \n");
	printf("               |............................o.../");		printf("                 | | \n");
	printf("               |.............................../");		printf("                  | | \n");

	wave();

	seaShade();

	animate(aniVal);

	SetConsoleTextAttribute(hConsole, 15);
	puts("   . _    .");
	printf("       o    . ' ");		printf(" . '");		printf("  . o\n");   //block 2
	printf("       o   .     ");		printf("   ");		printf("   o \n");
	printf("             o . '");   printf("  . o");    printf("      o \n");
	printf("            o");		printf("   . o .");   printf("        o .\n");
	printf("              . o  .");   printf("  o");     printf("     .  o \n");
	printf("               . o");		printf(" .o");     printf("        o  \n");
	printf("                       . o");   printf("     o .");    printf("     o.\n");

	SetConsoleTextAttribute(hConsole, 12);
	puts("                         |==|  |==|  |==|");
	puts("                       __|__|__|__|__|__|_");
	SetConsoleTextAttribute(hConsole, 7);
	printf("                    __|___________________|___");			printf("                     _\n");
	printf("                 __|__[]__[]__[]__[]__[]__[]__|___");		printf("                | |_ \n");
	printf("                |............................o.../");		printf("                | |_ \n");
	printf("                |.............................../");		printf("                 | | \n");

	altWave();

	seaShade();

	animate(aniVal);

	SetConsoleTextAttribute(hConsole, 15);
		
	puts("     o _   o");
	printf("         .    o ' ");		printf("  o '");		printf("  o .\n");   //block 1
	printf("         .   o     ");		printf("   .  ");		printf("   \n");
	printf("            o    . o '");   printf("    o .");    printf("   o . \n");
	printf("             .");		printf("     o . o");   printf("      . o\n");
	printf("                  o . o");   printf("  o .");     printf("    o \n");
	printf("             o .");		printf("   o ");     printf("   . o   \n");
	printf("                          o.");   printf("      .o");    printf("   .o\n");

	SetConsoleTextAttribute(hConsole, 12);
	puts("                          |==|  |==|  |==|");
	puts("                        __|__|__|__|__|__|_");
	SetConsoleTextAttribute(hConsole, 7);
	printf("                     __|___________________|___");			printf("                    _\n");
	printf("                  __|__[]__[]__[]__[]__[]__[]__|___");		printf("               | |__ \n");
	printf("                 |............................o.../");		printf("               | |__ \n");
	printf("                 |.............................../");		printf("                | | \n");

	wave();

	seaShade();

	animate(aniVal);

	SetConsoleTextAttribute(hConsole, 15);
	puts("   . _    .");
	printf("           o    . '");		printf(" . '");		printf("  . o\n");   //block 2
	printf("           o   .");		printf("  o");		printf("   o\n");
	printf("                   o . '");   printf("  . o");    printf("      o\n");
	printf("                 o");		printf("   . o .");   printf("        o .\n");
	printf("                    . o  .");   printf("  o");     printf("     .  o\n");
	printf("                  . o");		printf(" .o");     printf("        o  \n");
	printf("                           . o");   printf("    o .");    printf("   o.\n");

	SetConsoleTextAttribute(hConsole, 12);
	puts("                           |==|  |==|  |==|");
	puts("                         __|__|__|__|__|__|_");
	SetConsoleTextAttribute(hConsole, 7);
	printf("                      __|___________________|___");			printf("                   _\n");
	printf("                   __|__[]__[]__[]__[]__[]__[]__|___");		printf("              | |___ \n");
	printf("                  |............................o.../");		printf("              | |___ \n");
	printf("                  |.............................../");		printf("               | | \n");

	altWave();

	seaShade();

	animate(aniVal);

	SetConsoleTextAttribute(hConsole, 15);
		
	puts("     o _   o");
	printf("          .    o ' ");		printf("  o '");		printf("  o .\n");   //block 1
	printf("          .   o     ");		printf("    .  ");		printf("   \n");
	printf("            o    . o '");   printf("    o .");    printf("   o . \n");
	printf("             .");		printf("      o . o");   printf("      . o\n");
	printf("                   o . o");   printf("    o .");     printf("    o \n");
	printf("              o .");		printf("   o ");     printf("   . o   \n");
	printf("                             o.");   printf("    .o");    printf("   .o\n");

	SetConsoleTextAttribute(hConsole, 12);
	puts("                            |==|  |==|  |==|");
	puts("                          __|__|__|__|__|__|_");
	SetConsoleTextAttribute(hConsole, 7);
	printf("                       __|___________________|___");			printf("                  _\n");
	printf("                    __|__[]__[]__[]__[]__[]__[]__|___");		printf("             | |____ \n");
	printf("                   |............................o.../");		printf("             | |____ \n");
	printf("                   |.............................../");		printf("              | | \n");

	wave();

	seaShade();

	animate(aniVal);

	SetConsoleTextAttribute(hConsole, 15);
	puts("   . _    .");
	printf("           o    . '");		printf("  . '");		printf("   . o\n");   //block 2
	printf("           o   .");		printf("   o");		printf("    o\n");
	printf("                   o . '");   printf("   . o");    printf("       o\n");
	printf("                 o");		printf("    . o .");   printf("         o .\n");
	printf("                    . o  .");   printf("   o");     printf("      .  o\n");
	printf("                  . o");		printf("  .o");     printf("         o  \n");
	printf("                            . o");   printf("     o .");    printf("    o.\n");

	SetConsoleTextAttribute(hConsole, 12);
	puts("                             |==|  |==|  |==|");
	puts("                           __|__|__|__|__|__|_");
	SetConsoleTextAttribute(hConsole, 7);
	printf("                        __|___________________|___");			printf("                 _\n");
	printf("                     __|__[]__[]__[]__[]__[]__[]__|___");		printf("            | |_____ \n");
	printf("                    |............................o.../");		printf("            | |_____ \n");
	printf("                    |.............................../");		printf("             | | \n");

	altWave();

	seaShade();

	animate(aniVal);

	SetConsoleTextAttribute(hConsole, 15);
		
	puts("     o _   o");
	printf("          .    o ' ");		printf("  o '");		printf("  o .\n");   //block 1
	printf("          .   o     ");		printf("    .  ");		printf("   \n");
	printf("            o    . o '");   printf("    o .");    printf("   o . \n");
	printf("             .");		printf("      o . o");   printf("      . o\n");
	printf("                   o . o");   printf("    o .");     printf("    o \n");
	printf("              o .");		printf("   o ");     printf("   . o   \n");
	printf("                              o.");   printf("     .o");    printf("    .o\n");

		
	SetConsoleTextAttribute(hConsole, 12);
	puts("                              |==|  |==|  |==|");
	puts("                            __|__|__|__|__|__|_");
	SetConsoleTextAttribute(hConsole, 7);
	printf("                         __|___________________|___");			printf("                _\n");
	printf("                      __|__[]__[]__[]__[]__[]__[]__|___");		printf("           | |______ \n");
	printf("                     |............................o.../");		printf("           | |______ \n");
	printf("                     |.............................../");		printf("            | | \n");

	wave();

	seaShade();

	animate(aniVal);

	SetConsoleTextAttribute(hConsole, 15);
	puts("   . _    .");
	printf("           o    . '");		printf("  . '");		printf("   . o\n");   //block 2
	printf("           o   .");		printf("   o");		printf("    o\n");
	printf("                   o . '");   printf("   . o");    printf("       o\n");
	printf("                 o");		printf("    . o .");   printf("         o .\n");
	printf("                    . o  .");   printf("   o");     printf("      .  o\n");
	printf("                  . o");		printf("   .o");     printf("          o  \n");
	printf("                             . o");   printf("      o .");    printf("    o.\n");

	SetConsoleTextAttribute(hConsole, 12);
	puts("                               |==|  |==|  |==|");
	puts("                             __|__|__|__|__|__|_");
	SetConsoleTextAttribute(hConsole, 7);
	printf("                          __|___________________|___");			printf("               _\n");
	printf("                       __|__[]__[]__[]__[]__[]__[]__|___");		printf("          | |_______ \n");
	printf("                      |............................o.../");		printf("          | |_______ \n");
	printf("                      |.............................../");		printf("           | | \n");

	altWave();

	seaShade();

	animate(aniVal);

	SetConsoleTextAttribute(hConsole, 15);
		
	puts("      o _   o");
	printf("            .    o ' ");		printf("   o '");		printf("  o .\n");   //block 1
	printf("            .   o     ");		printf("     .  ");		printf("   \n");
	printf("             o    . o '");   printf("     o .");    printf("   o . \n");
	printf("               .");		printf("       o . o");   printf("      . o\n");
	printf("                    o . o");   printf("     o .");     printf("    o \n");
	printf("               o .");		printf("    o ");     printf("   . o   \n");
	printf("                                o.");   printf("     .o");    printf("    .o\n");

	SetConsoleTextAttribute(hConsole, 12);
	puts("                                |==|  |==|  |==|");
	puts("                              __|__|__|__|__|__|_");
	SetConsoleTextAttribute(hConsole, 7);
	printf("                           __|___________________|___");			printf("              _\n");
	printf("                        __|__[]__[]__[]__[]__[]__[]__|___");		printf("         | |________ \n");
	printf("                       |............................o.../");		printf("         | |________ \n");
	printf("                       |.............................../");		printf("          | | \n");

	wave();

	seaShade();

	animate(aniVal);

	SetConsoleTextAttribute(hConsole, 15);
	puts("   . _    .");
	printf("           o    . '");		printf("  . '");		printf("   . o\n");   //block 2
	printf("           o   .");		printf("   o");		printf("    o\n");
	printf("                   o . '");   printf("   . o");    printf("       o\n");
	printf("                 o");		printf("    . o .");   printf("         o .\n");
	printf("                    . o  .");   printf("   o");     printf("      .  o\n");
	printf("                  . o");		printf("   .o");     printf("          o  \n");
	printf("                                 . o");   printf("    o.");    printf("   o.\n");
	SetConsoleTextAttribute(hConsole, 12);
	puts("                                 |==|  |==|  |==|");
	puts("                               __|__|__|__|__|__|_");
	SetConsoleTextAttribute(hConsole, 7);
	printf("                            __|___________________|___");			printf("             _\n");
	printf("                         __|__[]__[]__[]__[]__[]__[]__|___");		printf("        | |_________ \n");
	printf("                        |............................o.../");		printf("        | |_________ \n");
	printf("                        |.............................../");		printf("         | | \n");

	altWave();

	seaShade();

	animate(aniVal);

	SetConsoleTextAttribute(hConsole, 15);
		
	puts("      o _   o");
	printf("            .    o ' ");		printf("   o '");		printf("  o .\n");   //block 1
	printf("            .   o     ");		printf("     .  ");		printf("   \n");
	printf("             o    . o '");   printf("     o .");    printf("   o . \n");
	printf("               .");		printf("       o . o");   printf("      . o\n");
	printf("                    o . o");   printf("     o .");     printf("    o \n");
	printf("               o .");		printf("    o ");     printf("    . o   \n");
	printf("                                 o.");   printf("    .o");    printf("   .o\n");

	SetConsoleTextAttribute(hConsole, 12);
	puts("                                 |==|  |==|  |==|");
	puts("                               __|__|__|__|__|__|_");
	SetConsoleTextAttribute(hConsole, 7);
	printf("                            __|___________________|___");			printf("             _\n");
	printf("                         __|__[]__[]__[]__[]__[]__[]__|___");		printf("        | |_________ \n");
	printf("                        |............................o.../");		printf("        | |_________ \n");
	printf("                        |.............................../");		printf("         | | \n");

	wave();

	seaShade();

	animate(aniVal);

	SetConsoleTextAttribute(hConsole, 15);
	puts("   . _    .");
	printf("           o    . '");		printf("   . '");		printf("   . o\n");   //block 2
	printf("           o   .");		printf("   o");		printf("    o\n");
	printf("                   o . '");   printf("    . o");    printf("       o\n");
	printf("                 o");		printf("       . o .");   printf("         o .\n");
	printf("                    . o  .");   printf("    o");     printf("      .  o\n");
	printf("                  . o");		printf("   .o");     printf("          o  \n");
	printf("                                  . o");   printf("    o.");    printf("   o.\n");

	SetConsoleTextAttribute(hConsole, 12);
	puts("                                  |==|  |==|  |==|");
	puts("                                __|__|__|__|__|__|_");
	SetConsoleTextAttribute(hConsole, 7);
	printf("                             __|___________________|___");			printf("            _\n");
	printf("                          __|__[]__[]__[]__[]__[]__[]__|___");		printf("       | |_________ \n");
	printf("                         |............................o.../");		printf("       | |_________ \n");
	printf("                         |.............................../");		printf("        | | \n");

	altWave();

	seaShade();

	animate(aniVal);

	SetConsoleTextAttribute(hConsole, 15);
		
	puts("      o _   o");
	printf("            .    o ' ");		printf("   o '");		printf("  o .\n");   //block 1
	printf("            .   o     ");		printf("     .  ");		printf("   \n");
	printf("             o    . o '");   printf("     o .");    printf("   o . \n");
	printf("               .");		printf("       o . o");   printf("      . o\n");
	printf("                    o . o");   printf("     o .");     printf("    o \n");
	printf("               o .");		printf("    o ");     printf("    . o   \n");
	printf("                                  o.");   printf("     .o");    printf("    .o\n");

	SetConsoleTextAttribute(hConsole, 12);
	puts("                                   |==|  |==|  |==|");
	puts("                                 __|__|__|__|__|__|_");
	SetConsoleTextAttribute(hConsole, 7);
	printf("                              __|___________________|___");			printf("           _\n");
	printf("                           __|__[]__[]__[]__[]__[]__[]__|___");		printf("      | |_________ \n");
	printf("                          |............................o.../");		printf("      | |_________ \n");
	printf("                          |.............................../");		printf("       | | \n");

	wave();

	seaShade();

	animate(aniVal);

	SetConsoleTextAttribute(hConsole, 15);
	puts("   . _    .");
	printf("           o    . '");		printf("   . '");		printf("   . o\n");   //block 2
	printf("           o   .");		printf("   o");		printf("    o\n");
	printf("                   o . '");   printf("    . o");    printf("       o\n");
	printf("                 o");		printf("       . o .");   printf("         o .\n");
	printf("                    . o  .");   printf("    o");     printf("      .  o\n");
	printf("                  . o");		printf("   .o");     printf("          o  \n");
	printf("                                    . o");   printf("    o.");    printf("   o.\n");

	SetConsoleTextAttribute(hConsole, 12);
	puts("                                    |==|  |==|  |==|");
	puts("                                  __|__|__|__|__|__|_");
	SetConsoleTextAttribute(hConsole, 7);
	printf("                               __|___________________|___");			printf("          _\n");
	printf("                            __|__[]__[]__[]__[]__[]__[]__|___");		printf("     | |_________ \n");
	printf("                           |............................o.../");		printf("     | |_________ \n");
	printf("                           |.............................../");		printf("      | | \n");

	altWave();

	seaShade();

	animate(aniVal);

	SetConsoleTextAttribute(hConsole, 15);
		
	puts("      o _   o");
	printf("            .    o ' ");		printf("   o '");		printf("  o .\n");   //block 1
	printf("            .   o     ");		printf("     .  ");		printf("   \n");
	printf("             o    . o '");   printf("     o .");    printf("   o . \n");
	printf("               .");		printf("       o . o");   printf("      . o\n");
	printf("                    o . o");   printf("     o .");     printf("    o \n");
	printf("               o .");		printf("    o ");     printf("    . o   \n");
	printf("                                     o.");   printf("     .o");    printf("   .o\n");
		
	SetConsoleTextAttribute(hConsole, 12);
	puts("                                     |==|  |==|  |==|");
	puts("                                   __|__|__|__|__|__|_");
	SetConsoleTextAttribute(hConsole, 7);
	printf("                                __|___________________|___");			printf("         _\n");
	printf("                             __|__[]__[]__[]__[]__[]__[]__|___");		printf("    | |_________ \n");
	printf("                            |............................o.../");		printf("    | |_________ \n");
	printf("                            |.............................../");		printf("     | | \n");

	wave();

	seaShade();

	animate(aniVal);

	SetConsoleTextAttribute(hConsole, 15);
	puts("      o _   o");
	printf("            .    o ' ");		printf("   o '");		printf("  o .\n");   //block 1
	printf("            .   o     ");		printf("     .  ");		printf("   \n");
	printf("             o    . o '");   printf("     o .");    printf("   o . \n");
	printf("               .");		printf("       o . o");   printf("      . o\n");
	printf("                    o . o");   printf("     o .");     printf("    o \n");
	printf("               o .");		printf("    o ");     printf("    . o   \n");
	printf("                                     ");   printf("     ");    printf("   \n");

	SetConsoleTextAttribute(hConsole, 12);
	puts("                                      |==|  |==|  |==|");
	puts("                                    __|__|__|__|__|__|_");
	SetConsoleTextAttribute(hConsole, 7);
	printf("                                 __|___________________|___");			printf("        _\n");
	printf("                              __|__[]__[]__[]__[]__[]__[]__|___");		printf("   | |_________ \n");
	printf("                             |............................o.../");		printf("   | |_________ \n");
	printf("                             |.............................../");		printf("    | | \n");

	altWave();

	seaShade();

	animate(aniVal);

	blankBlock();

	SetConsoleTextAttribute(hConsole, 12);
	puts("                                       |==|  |==|  |==|");
	puts("                                     __|__|__|__|__|__|_");
	SetConsoleTextAttribute(hConsole, 7);
	printf("                                  __|___________________|___");			printf("       _\n");
	printf("                               __|__[]__[]__[]__[]__[]__[]__|___");		printf("  | |_________ \n");
	printf("                              |............................o.../");		printf("  | |_________ \n");
	printf("                              |.............................../");		printf("   | | \n");

	wave();

	seaShade();

	Sleep(3000);
	system("cls");
}