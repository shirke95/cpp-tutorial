#include <iostream>

int main()
{
    int a;
    std::cout << "Type a number: " << std::endl;       // Type a number and press enter
    std::cin >> a;                                     // Get user input from the keyboard
    std::cout << "Your number is: " << a << std::endl; // Display the input value

    int x, y;
    int sum;
    std::cout << "Type a number: " << std::endl;
    std::cin >> x;
    std::cout << "Type another number: " << std::endl;
    std::cin >> y;
    sum = x + y;
    std::cout << "Sum is: " << sum << std::endl; // Display the sum of the two numbers

    const int MAX = 3;
    // MAX = 5; // This will cause an error because MAX is a constant and cannot be changed

    std::cout << "this is error " << MAX << std::endl;

    // Student data
    int studentID = 15;
    int studentAge = 23;
    double studentFee = 75.25;
    char studentGrade = 'B';

    // Print variables
    std::cout << "Student ID: " << studentID << std::endl;
    std::cout << "Student Age: " << studentAge << std::endl;
    std::cout << "Student Fee: " << studentFee << std::endl;
    std::cout << "Student Grade: " << studentGrade << std::endl;

    // Create integer variables
    int length = 4;
    int width = 6;

    // Calculate the area of a rectangle
    int area = length * width;

    // Print the variables
    std::cout << "Length is: " << length << std::endl;
    std::cout << "Width is: " << width << std::endl;
    std::cout << "Area of the rectangle is: " << area << std::endl;
    return 0;
}