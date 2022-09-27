#include <stdio.h>

int main() {
	FILE* file;
	int i, sum = 0;
	double average;
	int weightData[1000];
	file = fopen("elephant seal data.txt", "r");
	for (i = 0; i < 1000; i++)
	{
		fscanf(file, "%d 	", &weightData[i]);
	}

	fclose(file);

	for (i = 0; i < 1000; i++)
	{
		sum += weightData[i];
	}

	average = sum / 1000.0;

	printf("Average weight of 1000 elephants is %lf", average);
	return(0);
}