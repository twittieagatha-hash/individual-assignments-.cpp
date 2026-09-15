# Triangle Area

## 1. Introduction

This program calculates the area of a triangle when the coordinates of its three vertices are provided by the user.

The program first calculates the lengths of the three sides using the distance formula and then uses Heron's formula to calculate the area.

## 2. Objective

The program is designed to:

- Accept the coordinates of three points.
- Calculate the three side lengths of the triangle.
- Calculate the semi-perimeter.
- Calculate the area using Heron's formula.
- Display the side lengths, semi-perimeter, and area.

## 3. Method

For two points `(x₁, y₁)` and `(x₂, y₂)`, the distance is calculated using:

**Distance = √[(x₂ − x₁)² + (y₂ − y₁)²]**

The semi-perimeter is:

**s = (Side1 + Side2 + Side3) / 2**

Heron's formula is:

**Area = √[s(s − Side1)(s − Side2)(s − Side3)]**

## 4. Source Code

```cpp
#include<iostream>
#include<cmath>

using namespace std;

int main(){

double x1, y1;
double x2, y2;
double x3, y3;

double Side1, Side2, Side3;

double s;
double area;

cout << "Enter x1 and y1: " << endl;
cin >> x1 >> y1;

cout << "Enter x2 and y2: " << endl;
cin >> x2 >> y2;

cout << "Enter x3 and y3: " << endl;
cin >> x3 >> y3;

Side1 = sqrt((x2 - x1)*(x2 - x1) +
             (y2 - y1)*(y2 - y1));

Side2 = sqrt((x3 - x2)*(x3 - x2) +
             (y3 - y2)*(y3 - y2));

Side3 = sqrt((x1 - x3)*(x1 - x3) +
             (y1 - y3)*(y1 - y3));

s = (Side1 + Side2 + Side3)/2;

area = sqrt(s*(s - Side1)*(s - Side2)*(s - Side3));

cout << "Side1 is: " << Side1 << " units" << endl;
cout << "Side2 is: " << Side2 << " units" << endl;
cout << "Side3 is: " << Side3 << " units" << endl;

cout << "The value of s is: " << s << " units" << endl;
cout << "The Area of the triangle is: "
     << area << " square units" << endl;

return 0;
}
```

## 5. Example

For the points:

```text
(1.5, -3.4)
(4.6, 5)
(9.5, -3.4)
```

the program uses the distance formula to obtain the three side lengths and then applies Heron's formula to determine the area.

## 6. Conclusion

The program demonstrates how coordinate geometry, the distance formula, and Heron's formula can be combined to calculate the area of a triangle from its three vertices.
