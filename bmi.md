# BMI Calculator

## 1. Introduction

This program calculates a person's Body Mass Index (BMI) from their weight in pounds and height in inches. The weight and height are first converted to kilograms and metres respectively, and the BMI is then calculated.

## 2. Objective

The program is designed to:

- Prompt the user to enter their weight in pounds.
- Prompt the user to enter their height in inches.
- Convert pounds to kilograms.
- Convert inches to metres.
- Calculate the BMI.
- Display the BMI and its corresponding category.

## 3. BMI Categories

The program uses the following categories:

| BMI | Category |
|---|---|
| Below 18.5 | Underweight |
| 18.5–24.9 | Normal |
| 25.0–29.9 | Overweight |
| 30.0 and above | Obese |

## 4. Method

The conversions used are:

- 1 pound = 0.45359237 kilograms
- 1 inch = 0.0254 metres

The BMI is calculated using:

**BMI = mass in kilograms / (height in metres)²**

The program then uses `if`, `else if`, and `else` statements to determine the BMI category.

## 5. Source Code

```cpp
#include<iostream>
#include <iomanip>
using namespace std;

int main(){
    double weight, height, bmi;
    double mass_kg, height_m;

    cout << "Enter your weight in pounds: ";
    cin >> weight;

    cout << "Enter your height in inches: ";
    cin >> height;

    mass_kg = weight * 0.45359237;
    height_m = height * 0.0254;

    bmi = mass_kg/((height_m)*(height_m));

    cout << setprecision(4) << "\n" << "BMI is: " << bmi << endl;

    if(bmi < 18.5){
        cout << "Underweight";
    }
    else if(bmi < 25.0 ){
        cout << "Normal";
    }
    else if(bmi < 30.0){
        cout <<"Overweight";
    }
    else{
        cout << "Obese";
    }

    return 0;
}
```

## 6. Example

For a weight of 146 pounds and a height of 70 inches, the program calculates a BMI of approximately 20.95, which falls in the **Normal** category.

## 7. Conclusion

The program successfully calculates BMI after converting the user's measurements into the required units and classifies the result according to the specified BMI ranges.
