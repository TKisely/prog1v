/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

typedef struct {
  int hours;
  int minutes;
  int seconds;
} time_t;

void printTime(time_t t) {
    printf("Time: %02d:%02d:%02d\n", t.hours, t.minutes, t.seconds);
}

time_t seconds2Time(int secondsInput) {
    int hours = secondsInput / 3600;
    int minutes = (secondsInput % 3600) / 60;
    int seconds = secondsInput % 60;
    time_t result = { hours, minutes, seconds };
    return result;
}

int main()
{
    int testCases[] = {45, 60, 65, 120, 125, 600, 660, 661, 3570, 3600, 3720};
    int i;
    const int arrayLength = (sizeof(testCases) / sizeof(int));
    for(i = 0; i < arrayLength; i++)
    {
        printf("Test case: %d\n", testCases[i]);
        printTime(seconds2Time(testCases[i]));
        printf("---\n");
    }

    return 0;
}
