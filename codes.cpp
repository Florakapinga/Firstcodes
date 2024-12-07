#include <iostream>
int main()
{
    std::string name;
    int age;
    std::cout << "what's your name ";
    std::cin >> name;
    std::cout << "how old are you ?";
    std::cin >> age;

    std::cout << "hellow " << name;
    std::cout << "you are adult" << age;
    return 0;
}