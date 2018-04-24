//Header file containing function for the manipulation of files on disk

int emptyFile(const char *filename)
{
	FILE *fp;
	int empty;
	fpos_t start, end;

	if((fp = fopen(filename, "r")) != NULL)
	{
		fgetpos(fp, &start);
		fseek(fp, 0, SEEK_END); //pointer at end of the file
		fgetpos(fp, &end);
		empty = (start == end); //if file is empty, pointer's position will be stationary
		fclose(fp);
	}
	else
	{
		empty = -1;
	}

	return empty; //-1 - file doesn't exist, 1 - file empty, 0 - file not empty or doesn't exist
}

void writeToFile(List L)
{
	FILE *mound;
	int i;

	if((mound = fopen("pbs shipping.dat", "wb")) == NULL)
	{
		fprintf(stderr, "File could not be opened.");
		puts("");
		exitScreen();

		exit(EXIT_FAILURE);
	}
	else
	{
		fseek(mound, 0, SEEK_SET);
		fwrite(&L.length, sizeof(int), 1, mound);

		for(i = 0;i < getLength(L); i++)
		{
			fseek(mound, sizeof(int) + sizeof(struct Container) * i, SEEK_SET);
			fwrite(&L.containers[i], sizeof(struct Container), 1, mound);
		}
		fclose(mound);
	}
}

List readFromFile(void)
{
	FILE *mound;
	List L = createList();
	int i;

	if((mound = fopen("pbs shipping.dat","rb")) == NULL)
	{
		fprintf(stderr, "File could not be opened.");
		puts("");
		exitScreen();

		exit(EXIT_FAILURE);
	}
	else
	{
		fseek(mound, 0, SEEK_SET);
		fread(&L.length, sizeof(int), 1, mound);

		for(i = 0;i < getLength(L); i++)//Should it be read in the same way it was written, we will find out
		{
			fseek(mound, sizeof(int) + sizeof(struct Container) * i, SEEK_SET);
			fread(&L.containers[i], sizeof(struct Container), 1, mound);
		}
		fclose(mound);
	}

	return L;
}