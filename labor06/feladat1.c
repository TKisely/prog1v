#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

// 1/a
typedef struct {
	double x;
	double y;
} position;

typedef struct {
	int hours;
	int minutes;
	int seconds;
} time;

/* adattipus, mely egy poziciot es egy idopontot foglal magaba */
typedef struct data
{
	position p;
	time t;
} data;

// 1/b
void printposition(position p)
{
	printf("position: %lf %lf ", p.x, p.y);
}
// 1/b
void printtime(time t)
{
	printf("time: %d %d %d ", t.hours, t.minutes, t.seconds);
}
// 1/b
void printdata(data d)
{
	printposition(d.p);
	printtime(d.t);
}
// 1/c
position readposition()
{
	position p;
	scanf("%lf %lf", &p.x, &p.y);
	return p;
}
// 1/c
time readtime()
{
	time t;
	scanf("%d %d %d", &t.hours, &t.minutes, &t.seconds);
	return t;
}
// 1/c
data readdata()
{
	data d;
	d.p = readposition();
	d.t = readtime();
	return d;
}

int main(void)
{
	// 1/a
	data data1, data2;
	// Kezdõértékek
	data1.p.x = 3.0;
	data1.p.y = 5.2;
	data1.t.hours = 2;
	data1.t.minutes = 17;
	data1.t.seconds = 15;

	data2.p.x = -3.0;
	data2.p.y = 9.7;
	data2.t.hours = 9;
	data2.t.minutes = 2;
	data2.t.seconds = 54;

	// 1/b
	printf("data1: ");
	printdata(data1);
	printf("\n");
	printf("data2: ");
	printdata(data2);

	// 1/c
	printf("\n");
	// position
	printf("Adj meg egy x es egy y koordinatat: ");
	data1.p = readposition();
	printf("megvaltozott data1 position: ");
	printposition(data1.p);
	// time
	printf("\n");
	printf("Add meg az idot: ora, perc, masodperc: ");
	data1.t = readtime();
	printf("megvaltozott data1 time: ");
	printtime(data1.t);
	printf("\n");
	// data
	printf("megvaltozott data1: ");
	printdata(data1);
	printf("\n");
	// eredeti függvényhívás
	data1 = readdata();
	printdata(data1);
	//data2 = readdata();

	/*

	// 1/d
	{
		int secd;
		secd = secdiff(data1.t, data2.t);
		printf("D1-D2 time(sec): %d\n", secd);
	}

	// 1/e
	{
		int cmp;
		cmp = timecmp(data1.t, data2.t);
		printf("D1<?>D2: %d\n", cmp);
	}

	// 1/f
	{
		double len;
		len = sectionlen(data1.pos, data2.pos);
		printf("D1-D2 length: %f\n", len);
	}

	{
		double vel = section_velocity(data1, data2);
	}

	*/

	return 0;
}
