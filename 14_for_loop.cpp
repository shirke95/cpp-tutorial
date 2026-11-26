#include <iostream>

int main()
{
    for (int i = 0; i < 5; i++)
    {
        std::cout << i << std::endl;
    }

    for (int countdown = 3; countdown > 0; countdown--)
    {
        std::cout << countdown << std::endl;
    }

    std::cout << "Happy New Year!!" << std::endl;

    for (int j = 0; j < 5; j++)
    {
        std::cout << j << std::endl;
    }

    for (int k = 10; k < 5; k++)
    {
        std::cout << "k is " << k << std::endl;
    }

    for (int countdown1 = 3; countdown1 > 0; countdown1--)
    {
        std::cout << countdown1 << std::endl;
    }

    std::cout << "Happy New Year!!" << std::endl;

    for (int l = 0; l <= 10; l += 2)
    {
        std::cout << l << std::endl;
    }

    for (int i = 0; i < 5; i++)
    {
        std::cout << i << std::endl;
    }
    for (int i = 0; i <= 10; i = i + 2)
    {
        std::cout << i << std::endl;
    }

    int sum = 0;
    for (int i = 1; i <= 5; i++)
    {
        sum = sum + i;
    }
    std::cout << "Sum is " << sum << std::endl;

    for (int i = 5; i > 0; i--)
    {
        std::cout << i << std::endl;
    }

    // Nested for loops are also possible. For example, the following code prints a multiplication table:
    // Outer loop
    for (int i = 1; i <= 2; ++i)
    {
        std::cout << "Outer: " << i << std::endl; // Executes 2 times

        // Inner loop
        for (int j = 1; j <= 3; ++j)
        {
            std::cout << " Inner: " << j << std::endl; // Executes 6 times (2 * 3)
        }
    }

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            std::cout << i * j << " ";
        }
        std::cout << std::endl;
    }
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int num : myNumbers)
    {
        std::cout << num << std::endl;
    }
    std::string word = "Hello";
    for (char c : word)
    {
        std::cout << c << std::endl;
    }
    // program that counts to 100 by tens
    for (int i = 0; i <= 100; i += 10)
    {
        std::cout << i << std::endl;
    }
    // program that only print even numbers between 0 and 10 (inclusive)
    for (int i = 0; i <= 10; i = i + 2)
    {
        std::cout << i << std::endl;
    }
    // print odd numbers:
    for (int i = 1; i <= 10; i = i + 2)
    {
        std::cout << i << std::endl;
    }
    // print the powers of 2 up to 512:
    for (int i = 2; i <= 512; i *= 2)
    {
        std::cout << i << std::endl;
    }
    // program that prints the multiplication table for a specified number
    int number = 2;
    int i;

    // Print the multiplication table for the number 2
    for (i = 1; i <= 10; i++)
    {
        std::cout << number << " x " << i << " = " << number * i << std::endl;
    }
    return 0;
}