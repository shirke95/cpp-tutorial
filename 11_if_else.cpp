#include <iostream>

int main()
{
    // int x = 20;
    // int y = 18;

    // bool isGreater = x > y;

    // if (isGreater)
    // {
    //     std::cout << "x is greater than y" << std::endl;
    // }
    // else
    // {
    //     std::cout << "x is not greater than y" << std::endl;
    // }
    // int time = 20;

    // bool isDay = time < 18;

    // if (isDay)
    // {
    //     std::cout << "Good day." << std::endl;
    // }
    // else
    // {
    //     std::cout << "Good evening." << std::endl;
    // }

    // int time1 = 16;

    // bool isMorning = time1 < 12;
    // bool isDay1 = time1 < 18;

    // if (isMorning)
    // {
    //     std::cout << "Good morning." << std::endl;
    // }
    // else if (isDay1)
    // {
    //     std::cout << "Good day." << std::endl;
    // }
    // else
    // {
    //     std::cout << "Good evening." << std::endl;
    // }
    // Short Hand If Else
    // int time3 = 20;
    // std::string result = (time3 < 18) ? "Good day." : "Good evening.";
    // std::cout << result << std::endl;

    // int age = 20;
    // bool isCitizen = true;

    // if (age >= 18)
    // {
    //     std::cout << "Old enough to vote." << std::endl;

    //     if (isCitizen)
    //     {
    //         std::cout << "And you are a citizen, so you can vote!" << std::endl;
    //     }
    //     else
    //     {
    //         std::cout << "But you must be a citizen to vote." << std::endl;
    //     }
    // }
    // else
    // {
    //     std::cout << "Not old enough to vote." << std::endl;
    // }

    // int a = 200;
    // int b = 33;
    // int c = 500;

    // // AND &&
    // if (a > b && c > a)
    // {
    //     std::cout << "Both conditions are true" << std::endl;
    // }

    // // OR ||
    // if (a > b || a > c)
    // {
    //     std::cout << "At least one condition is true" << std::endl;
    // }

    // // NOT !
    // if (!(a > b))
    // {
    //     std::cout << "a is NOT greater than b" << std::endl;
    // }

    // bool isLoggedIn = true;
    // bool isAdmin = false;
    // int securityLevel = 3; // 1 = highest

    // if (isLoggedIn && (isAdmin || securityLevel <= 2))
    // {
    //     std::cout << "Access granted." << std::endl;
    // }
    // else
    // {
    //     std::cout << "Access denied." << std::endl;
    // }

    // int doorCode = 1337;

    // if (doorCode == 1337)
    // {
    //     std::cout << "Correct code.\nThe door is now open.\n"
    //               << std::endl;
    // }
    // else
    // {
    //     std::cout << "Wrong code.\nThe door remains closed.\n"
    //               << std::endl;
    // }

    int myNum = 10; // Is this a positive or negative number?

    if (myNum > 0)
    {
        std::cout << "The value is a positive number." << std::endl;
    }
    else if (myNum < 0)
    {
        std::cout << "The value is a negative number." << std::endl;
    }
    else
    {
        std::cout << "The value is 0." << std::endl;
    }

    int myAge = 25;
    int votingAge = 18;

    if (myAge >= votingAge)
    {
        std::cout << "Old enough to vote!" << std::endl;
    }
    else
    {
        std::cout << "Not old enough to vote." << std::endl;
    }

    int age = 20;
    bool isCitizen = true;

    if (age >= 18)
    {
        std::cout << "Old enough to vote." << std::endl;

        if (isCitizen)
        {
            std::cout << "And you are a citizen, so you can vote!" << std::endl;
        }
        else
        {
            std::cout << "But you must be a citizen to vote." << std::endl;
        }
    }
    else
    {
        std::cout << "Not old enough to vote." << std::endl;
    }

    int myNum1 = 5;

    if (myNum1 % 2 == 0)
    {
        std::cout << myNum1 << " is even." << std::endl;
    }
    else
    {
        std::cout << myNum1 << " is odd." << std::endl;
    }

    int temperature = 30;

    if (temperature < 0)
    {
        std::cout << "It's freezing!" << std::endl;
    }
    else if (temperature < 20)
    {
        std::cout << "It's cool." << std::endl;
    }
    else
    {
        std::cout << "It's warm." << std::endl;
    }
    return 0;
}