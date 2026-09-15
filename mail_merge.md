# Mail Merge

## 1. Introduction

This program generates an acceptance letter for Makerere University using information entered by the user. It demonstrates how user-provided details can be inserted into a standard letter format.

## 2. Objective

The program prompts the user to enter:

- First name
- Last name
- Study program
- Academic year

It also automatically obtains and displays the current date.

## 3. Method

The program uses the `string` library for text input and the `ctime` library to obtain the current date and time.

The date is formatted using:

- Day
- Appropriate ordinal suffix such as `st`, `nd`, `rd`, or `th`
- Month name
- Year

The entered student details are then inserted into the acceptance letter.

## 4. Source Code

```cpp
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main() {
    string firstName;
    string lastName;
    string program;
    string academicYear;

    cout << "Enter your first name: ";
    cin >> firstName;

    cout << "Enter your last name: ";
    cin >> lastName;

    cout << "Enter your study program: ";
    getline(cin >> ws, program);

    cout << "Enter the academic year: ";
    cin >> academicYear;

    time_t now = time(0);
    tm *localTime = localtime(&now);

    int day = localTime->tm_mday;
    int month = localTime->tm_mon;
    int year = localTime->tm_year + 1900;

    string months[] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    string suffix;

    if (day % 100 >= 11 && day % 100 <= 13) {
        suffix = "th";
    }
    else if (day % 10 == 1) {
        suffix = "st";
    }
    else if (day % 10 == 2) {
        suffix = "nd";
    }
    else if (day % 10 == 3) {
        suffix = "rd";
    }
    else {
        suffix = "th";
    }

    cout << "\nDate: " << day << suffix << " "
         << months[month] << " " << year << endl;

    cout << "\nTo: " << firstName << " " << lastName << "," << endl;
    cout << "\nDear " << firstName << "," << endl;

    cout << "\nCONGRATULATIONS! I am pleased to inform you that the Makerere University "
         << "Admissions Board has approved your application for admission to the "
         << academicYear << " academic year." << endl;

    cout << "\nYou have been offered a place for the following course:" << endl;
    cout << "PROGRAM: " << program << endl;

    cout << "\nAs a student of Makerere University, you will be part of a historic "
         << "institution dedicated to academic excellence and innovation. Please ensure "
         << "that you report to the Academic Registrar's office with your original "
         << "academic documents for verification during the orientation week." << endl;

    cout << "\nWe look forward to welcoming you to the Makerere University." << endl;
    cout << "\nYours sincerely," << endl;
    cout << "\n\nJohn Doe" << endl;
    cout << "Registra" << endl;

    return 0;
}
```

## 5. Conclusion

The program demonstrates a simple mail-merge process by combining a predefined acceptance-letter template with information entered by the user. The current date is generated automatically by the program.
