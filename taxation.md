# Personal Income Tax

## 1. Introduction

This program calculates personal income tax based on the user's residence status and taxable annual income. The user enters `0` for a resident and `1` for a non-resident.

## 2. Objective

The program is designed to:

- Ask the user for their residence status.
- Ask the user for their taxable income.
- Apply the appropriate tax bracket.
- Calculate the tax payable.
- Display the calculated tax.

## 3. Tax Structure Used

For residents, the program uses:

| Taxable Income (UGX) | Tax calculation |
|---|---|
| 0–2,820,000 | Nil |
| 2,820,000–4,020,000 | `(CY - 2,820,000) × 10%` |
| 4,020,000–4,920,000 | `(CY - 4,020,000) × 20% + 120,000` |
| 4,920,000–120,000,000 | `(CY - 4,920,000) × 30% + 300,000` |
| Above 120,000,000 | Previous calculation + `(CY - 120,000,000) × 10%` |

For non-residents, the program applies the non-resident rates specified in the assignment.

## 4. Method

The program first checks the residence status. It then uses nested `if` and `else if` statements to determine the appropriate income bracket and tax formula.

For income above UGX 120,000,000, an additional 10% is applied to the amount above UGX 120,000,000.

## 5. Source Code

```cpp
#include <iostream>
using namespace std;

int main(){
    int status;
    double income;
    double tax = 0;

    cout << "(0-Resident, 1-Non-resident)" << endl;
    cout << "Enter the residence status: ";
    cin >> status;

    cout << "Enter the taxable income: ";
    cin >> income;

    if(status == 0){
        if(income <= 2820000){
            tax = 0;
        }
        else if(income <= 4020000){
            tax = (income - 2820000) * 0.1;
        }
        else if(income <= 4920000){
            tax = (income - 4020000) * 0.2 + 120000;
        }
        else if(income <= 120000000){
            tax = (income - 4920000) * 0.3 + 300000;
        }
        else{
            tax = (income - 4920000) * 0.3 + 300000
                + (income - 120000000) * 0.1;
        }
    }
    else if(status == 1){
        if(income <= 2820000){
            tax = income * 0.1;
        }
        else if(income <= 4020000){
            tax = income * 0.1;
        }
        else if(income <= 4920000){
            tax = (income - 4020000) * 0.2 + 402000;
        }
        else if(income <= 120000000){
            tax = (income - 4920000) * 0.3 + 582000;
        }
        else{
            tax = (income - 4920000) * 0.3 + 582000
                + (income - 120000000) * 0.1;
        }
    }

    cout << "Tax is " << tax << "." << endl;

    return 0;
}
```

## 6. Example

For a resident with taxable income of UGX 4,000,000:

**Tax = (4,000,000 − 2,820,000) × 10% = UGX 118,000**

Therefore, the program displays:

```text
Tax is 118000.
```

## 7. Conclusion

The program demonstrates how conditional statements can be used to calculate personal income tax according to different residence statuses and income brackets.
