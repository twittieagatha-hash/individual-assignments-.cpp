#include <iostream>
using namespace std;

// Return true if the card number is valid
bool isValid(long long number);

// Get the result from Step 2
int sumOfDoubleEvenPlace(long long number);

// Return this number if it is a single digit,
// otherwise, return the sum of the two digits
int getDigit(int number);

// Return sum of odd place digits in number
int sumOfOddPlace(long long number);

// Return true if the digit d is a prefix for number
bool prefixMatched(long long number, int d);

// Return the number of digits in d
int getSize(long long d);

// Return the first k number of digits from number.
// If the number of digits in number is less than k, return number.
long long getPrefix(long long number, int k);

int main()
{
    long long number;

    cout << "Enter a credit card number as an integer: ";
    cin >> number;

    if (isValid(number))
        cout << number << " is valid" << endl;
    else
        cout << number << " is invalid" << endl;

    return 0;
}

bool isValid(long long number)
{
    int size = getSize(number);

    // Credit card numbers must have 13 to 16 digits
    if (size < 13 || size > 16)
        return false;

    // Card must start with 4, 5, 37, or 6
    if (!(prefixMatched(number, 4) ||
          prefixMatched(number, 5) ||
          prefixMatched(number, 37) ||
          prefixMatched(number, 6)))
        return false;

    // Luhn check
    int total = sumOfDoubleEvenPlace(number)
             + sumOfOddPlace(number);

    return total % 10 == 0;
}

int sumOfDoubleEvenPlace(long long number)
{
    int sum = 0;

    // Start with the second digit from the right
    number /= 10;

    while (number > 0)
    {
        int digit = number % 10;
        sum += getDigit(digit * 2);
        number /= 100;
    }

    return sum;
}

int getDigit(int number)
{
    if (number < 10)
        return number;

    return (number / 10) + (number % 10);
}

int sumOfOddPlace(long long number)
{
    int sum = 0;

    while (number > 0)
    {
        int digit = number % 10;
        sum += digit;
        number /= 100;
    }

    return sum;
}

bool prefixMatched(long long number, int d)
{
    int prefixSize = getSize(d);

    return getPrefix(number, prefixSize) == d;
}

int getSize(long long d)
{
    int count = 0;

    while (d > 0)
    {
        count++;
        d /= 10;
    }

    return count;
}

long long getPrefix(long long number, int k)
{
    int size = getSize(number);

    if (size < k)
        return number;

    for (int i = 0; i < size - k; i++)
        number /= 10;

    return number;
}
