# Population Projection

## 1. Introduction

This program projects the population for each of the next five years using the given assumptions for births, deaths, and immigration.

The initial population is **312,032,486**, and one year is assumed to contain **365 days**.

## 2. Objective

The program is designed to:

- Start with the given current population.
- Calculate the number of births in one year.
- Calculate the number of deaths in one year.
- Calculate the number of new immigrants in one year.
- Update the population for each of the next five years.
- Display the projected population for every year.

## 3. Given Assumptions

- One birth every 7 seconds.
- One death every 13 seconds.
- One new immigrant every 45 seconds.
- Current population = 312,032,486.
- One year = 365 days.

## 4. Method

The number of seconds in one year is calculated as:

**365 × 24 × 60 × 60**

The annual numbers of births, deaths, and immigrants are then calculated by dividing the number of seconds in a year by their respective time intervals.

The population is updated using:

**New population = Current population + Births + Immigrants − Deaths**

A `for` loop repeats this calculation five times.

## 5. Source Code

```cpp
#include <iostream>
using namespace std;

int main(){
    int population = 312032486;
    int births;
    int deaths;
    int immigrants;
    int secondsPerYear;

    secondsPerYear = 365*24*60*60;

    births = secondsPerYear/7;
    deaths = secondsPerYear/13;
    immigrants = secondsPerYear/45;

    for(int i = 0; i < 5; i++){
        population = population + births + immigrants - deaths;

        cout << "Year " << i + 1
             << " population is: " << population << endl;
    }

    return 0;
}
```

## 6. Conclusion

The program uses the given population assumptions to calculate a yearly population increase and projects the population over five years. The `for` loop makes it possible to perform the same calculation for each of the five years.
