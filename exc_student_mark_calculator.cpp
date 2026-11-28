#include <iostream>
#include <string>

int main()
{
    std::string studentName;
    double marks[5];
    double total = 0.0;

    std::cout << "Enter student name: ";
    std::getline(std::cin, studentName);

    for (int i = 0; i < 5; ++i)
    {
        std::cout << "Enter marks for subject " << i + 1 << ": ";
        std::cin >> marks[i];
        total += marks[i];
    }

    double average = total / 5;

    std::cout << "\nStudent Name: " << studentName << std::endl;
    std::cout << "Total Marks: " << total << std::endl;
    std::cout << "Average Marks: " << average << std::endl;

    return 0;
}
