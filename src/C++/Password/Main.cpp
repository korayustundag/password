#include <iostream>
#include <random>
#include <string>
#include <algorithm>

static std::string GeneratePassword(int length, bool useUppercase, bool useDigits, bool useSpecialChars)
{
    const std::string lowercase = "abcdefghijklmnopqrstuvwxyz";
    const std::string uppercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const std::string digits = "0123456789";
    const std::string specialChars = "/*-+{!#$&?_=@}";

    std::string allChars = lowercase;

    if (useUppercase)
    {
        allChars += uppercase;
    }
    if (useDigits)
    {
        allChars += digits;
    }
    if (useSpecialChars)
    {
        allChars += specialChars;
    }

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, static_cast<int>(allChars.size() - 1));

    std::string password;
    password.reserve(length);

    for (int i = 0; i < length; ++i)
    {
        password.push_back(allChars[dis(gen)]);
    }

    std::shuffle(password.begin(), password.end(), gen);

    return password;
}

int main()
{
    int length;
    bool ucase, digits, spec;
    std::cout << "Welcome to Random Password Generator!" << std::endl;

    std::cout << "Enter the password length: ";
    std::cin >> length;

    std::cout << "Do you want to use uppercase characters? (1: Yes, 0: No): ";
    std::cin >> ucase;

    std::cout << "Do you want to use digits? (1: Yes, 0: No): ";
    std::cin >> digits;

    std::cout << "Do you want to use special characters? (1: Yes, 0: No): ";
    std::cin >> spec;

    std::string password = GeneratePassword(length, ucase, digits, spec);

    std::cout << std::endl;

    std::cout << "Password:" << std::endl;
    std::cout << password << std::endl;

    std::cout << std::endl;

    std::cout << "Press [enter] to exit...";
    std::cin.get();
    std::cin.ignore();
    return 0;
}