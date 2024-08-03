// A simple typing speed calculator program using C
#include <stdio.h>
#include <time.h>  // For using clock() function
#include <string.h>  // For using strlen() function
#include <math.h>  // For using round() function

int main()
{
    char sentence[200];

    printf("Enter a sentence\n");

    // clock() function returns the time since the program is started
    long initialTime = clock();
    fgets(sentence, 200, stdin);  // Taking input
    long finalTime = clock();

    // Time conversions
    long clockTicks = finalTime - initialTime;  // Time taken in clock ticks
    float timeInSec = clockTicks/CLOCKS_PER_SEC;  // Time taken in seconds
    float timeInMinutes = timeInSec/60;  // Time taken in minutes

    // Calculation of Typing Speed
    unsigned int characters = strlen(sentence);
    float words = characters/5;
    float speed = words/timeInMinutes;

    printf("\nYour typing speed is %d wpm\n", (int)round(speed));

    return 0;
}