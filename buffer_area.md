# Buffer Area

## 1. Introduction

A buffer region is an area created around a geographic feature at a specified distance. In this program, a buffer is created around a specific point using different buffer sizes.

For example, a 1 km buffer around a water point represents all locations that are within 1 km of that water source. Buffers can be used around points, lines, or polygons and are commonly used in GIS for proximity and spatial analysis.

## 2. Objective

The objective of this program is to:

- Take a specific point coordinate as the center location.
- Create buffers of different sizes around that point.
- Use a given set of points.
- Calculate the distance between the center point and each given point.
- Determine which points fall within each buffer.
- Display the points contained in each buffer region.

## 3. Program Description

The program is written in C++ and uses the following libraries:

- `iostream` for input and output.
- `vector` for storing points and buffer sizes.
- `cmath` for mathematical calculations such as `sqrt()` and `pow()`.

The center point is entered by the user using its `x` and `y` coordinates.

The program then uses three example buffer sizes:

- 1.0
- 2.0
- 5.0

It also uses three example points:

- `(0.0, 0.0)`
- `(3.0, 4.0)`
- `(6.0, 8.0)`

These values can be modified in the source code.

## 4. Method Used

For every point, the program calculates its Euclidean distance from the center point using:

**Distance = √[(x₂ - x₁)² + (y₂ - y₁)²]**

The calculated distance is then compared with the current buffer size.

If:

`distance <= buffer size`

the point is considered to be inside that buffer and its coordinates are displayed.

If the distance is greater than the buffer size, the point is not displayed for that buffer.

## 5. Source Code

```cpp
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    //Declarations
    double centerX, centerY;
    vector<pair<double, double>> points;
    vector<double> bufferSizes;

    //inputs
    cout << "Enter the center point coordinates (x y): ";
    cin >> centerX >> centerY;

    // Example buffer sizes (can be modified)
    bufferSizes.push_back(1.0);
    bufferSizes.push_back(2.0);
    bufferSizes.push_back(5.0);

    // Example points (can be modified)
    points.push_back({0.0, 0.0});
    points.push_back({3.0, 4.0});
    points.push_back({6.0, 8.0});

    // Create buffers and determine which points fall within each
    for (double size : bufferSizes) {
        cout << "Buffer of size " << size << ":" << endl;
        for (const auto& point : points) {
            double distance = sqrt(pow(point.first - centerX, 2) +
                                   pow(point.second - centerY, 2));
            if (distance <= size) {
                cout << "  Point (" << point.first << ", "
                     << point.second << ")" << endl;
            }
        }
    }

    return 0;
}
```

## 6. Expected Output

The program first asks the user to enter the center point coordinates.

For example, if the center point entered is:

```text
0 0
```

the distances of the example points from the center are:

- Point `(0, 0)` → distance = 0
- Point `(3, 4)` → distance = 5
- Point `(6, 8)` → distance = 10

Therefore, the output will identify the points that are within each buffer.

For example:

```text
Enter the center point coordinates (x y): 0 0
Buffer of size 1:
  Point (0, 0)
Buffer of size 2:
  Point (0, 0)
Buffer of size 5:
  Point (0, 0)
  Point (3, 4)
```

## 7. Conclusion

The program successfully demonstrates how buffer analysis can be performed around a point using distance calculations. By comparing the distance of each point from the center with different buffer sizes, the program determines which points fall inside each buffer region.

The buffer sizes and example points are stored in vectors, making it possible to modify them in the source code when different values are required.
