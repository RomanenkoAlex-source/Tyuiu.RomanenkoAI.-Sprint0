
#include <iostream>
#include "../Tyuiu.RomanenkoAI. Sprint0.Task3.V0.Lib/Tyuiu.RomanenkoAI. Sprint0.Task3.V0.Lib.cpp"

int main()
{
    ISprint0Task3* date = new Service1();

    std::cout << "RomanenkoAI\n";
    std::cout << "R = a+b+c\n";
    std::cout << "Rezult = " << date->SummV3(10, 8, 7);
    std::cout << std::endl;

    return 0;
}
