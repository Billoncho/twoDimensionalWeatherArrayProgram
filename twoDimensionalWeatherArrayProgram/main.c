/*
Author: Billy Gene Ridgeway
Purpose: Create a 2D array of hard coded weather data, then loop through it
        to display the average yearly rainfall by year and the monthly average rainfall.
Date: 28 May 2022
*/

#include <stdio.h>
#include <stdlib.h>

#define MONTHS 12
#define YEARS 5



int main()
{
    int yearElement = 0;
    int monthElement = 0;
    float yearAvg = 0;
    float yearlyAvg = 0;
    float monthAvg = 0;
    float monthlyAvg = 0;
    float weather[YEARS][MONTHS] = // Create a 2D array of 12 months of rainfall and 5 years time.
    {
        {4.3,4.3,4.3,5.1,6.7,4.3,3.4,1.1,3.5,2.2,3.4,5.5},
        {5.5,3.5,0.1,2.2,1.1,4.2,7.7,8.4,3.9,1.1,2.1,4.4},
        {3.3,2.2,0.2,0.1,0.6,0.7,2.3,3.1,4.5,3.8,6.4,5.5},
        {3.6,1.2,4.4,2.7,3.3,1.1,1.4,2.2,6.2,4.1,4.0,4.7},
        {3.2,1.2,3.3,0.5,0.5,2.0,4.4,1.0,2.8,3.3,4.4,5.5}
    };

    printf("YEAR   RAINFALL (inches) \n");

    for(int year = 2010; year <= 2014; year++) // Outter loop to loop through the 5 years.
    {
        for(int month = 0; month < 12; month++) // Inner loop to loop through the 12 months of the year.
        {
            yearAvg = (yearAvg + weather[yearElement][month]); // Add the value in the year's month to the variable.
        }

        printf("%i   %.1f \n", year, yearAvg);
        yearlyAvg+=yearAvg;
        yearElement++;
        yearAvg = 0;
    }
    yearAvg = yearlyAvg/5; // Calculate the yearly average over 5 years.

    printf("\nThe yearly average is %.1f inches.\n", yearAvg);
    printf("\n");

    printf("MONTHLY AVERAGES: \n");
    printf("Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");
    printf("\n");

    yearElement = 0; // Reset the year and month variables to point to zero.
    monthElement = 0;

   for(int month = 0; month < 12; month++) // Outter loop through 12 months.
    {
        for(int year = 2010; year <= 2014; year++) // Inner loop loop through 5 years.
        {
            monthAvg = (monthAvg + weather[yearElement][monthElement]); // Calculate and assign the total of 5 months to the variable.

        }
        monthAvg = (monthAvg/5); // Calculate the 5 month average for the month.
        printf("%.1f ", monthAvg);
        monthAvg = 0;
        monthElement++;
    }
    printf("\n");

    return 0;
}
