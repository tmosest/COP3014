// *****************************************
// Tyler Moses
// Assignment 2
// *****************************************

#include <iostream>

const double PI = 3.14159;

int main()
{
    // README: When a requirement is given followed by -->, that means
    // to store the result of that calculation in the given variable.
    // example: Calculate the sum --> mySum
    // That means once you calculate the sum store it in the variable mySum
    
    // rectangle variables have been created for you:
    int rectangleBase = 0;
    int rectangleHeight = 0;
    int rectangleArea = 0;
    int rectanglePerimeter = 0;
    std::cout << "Area of a rectangle:\n";
    std::cout << "====================\n";
    
    std::cout << "Enter the base: ";
    std::cin >> rectangleBase;
    std::cout << "Enter the height: ";
    std::cin >> rectangleHeight;
    
    rectangleArea = rectangleHeight * rectangleBase;
    rectanglePerimeter = 2 * rectangleBase + 2 * rectangleHeight;
    
    //////////////////////////////////////////////
    // Do not change these lines that print the results
    //////////////////////////////////////////////
    std::cout << "Rectangle Area = " << rectangleArea << "\n";
    std::cout << "Rectangle Perimeter = " << rectanglePerimeter << std::endl;
    std::cout << "====================\n\n";
    //////////////////////////////////////////////
    
    
    int circleRadius = 0;
    double circleArea = 0;
    double circleCircumference = 0;
    std::cout << "Area and circumference of a circle:\n";
    std::cout << "====================\n";
    
    std::cout << "Enter the circle radius: ";
    std::cin >> circleRadius;
    
    circleArea = PI * circleRadius * circleRadius;
    circleCircumference = 2 * PI * circleRadius;
    
    //////////////////////////////////////////////
    // Do not change these lines that print the results
    //////////////////////////////////////////////
    std::cout << "Circle Area = " << circleArea << "\n";
    std::cout << "Circle Circumference = " << circleCircumference << std::endl;
    std::cout << "====================\n\n";
    //////////////////////////////////////////////
    
    double areaSum = 0;
    double areaAverage = 0;
    double areaProduct = 0;
    double areaSmallest = 0;
    double areaLargest = 0;
 
    areaSum = circleArea + rectangleArea;
    areaAverage = areaSum / 2;
    areaProduct = circleArea * rectangleArea;
    areaSmallest = (circleArea < rectangleArea) ? circleArea : rectangleArea;
    areaLargest = (circleArea > rectangleArea) ? circleArea : rectangleArea;
    
    //////////////////////////////////////////////
    // You don't need to change any of the
    // following lines of code.
    //////////////////////////////////////////////
    std::cout << "Area Arithmetic:\n";
    std::cout << "====================\n";
    std::cout << "Sum = " << areaSum << "\n";
    std::cout << "Average = " << areaAverage << "\n";
    std::cout << "Product = " << areaProduct << "\n";
    std::cout << "Smallest = " << areaSmallest << "\n";
    std::cout << "Largest = " << areaLargest << "\n";
    std::cout << "====================\n\n";
    std::cout << "Goodbye :)" << std::endl;
    //////////////////////////////////////////////
}
