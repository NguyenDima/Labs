#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	system("chcp 1251");
	system("cls");
	long long sec, min, hour, day, year, sum;
	sec = 60;
	min = 60;
	hour = 24;
	day = 365;
	year = 1;
	sum = sec * min * hour * day * year;
	//printf("Секунд в 1 году: %lf \n", sum);
	year = 100;
	sum = sec * min * hour * day * year;
	//printf("Секунд в 100 годах: %lf \n", sum);
	year = 1000;
	sum = sec * min * hour * day * year;
	//printf("Секунд в 1000 годах: %lf", sum);

	system("chcp 1251");
	system("cls");
	int secs, mins, hours, days, years, sums;
	secs = 60;
	mins = 60;
	hours = 24;
	days = 365;
	years = 1;
	sums = secs * mins * hours * days * years;
	//printf("Секунд в 1 году: %d \n", sums);
	years = 100;
	sums = secs * mins * hours * days * years;
	//printf("Секунд в 100 годах: %d \n", sums);
	years = 1000;
	sums = secs * mins * hours * days * years;
	//printf("Секунд в 1000 годах: %d", sums);
}
