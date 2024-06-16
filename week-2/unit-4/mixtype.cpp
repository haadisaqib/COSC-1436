#include <iostream>

//sum of mixed datatype example
int main()
{
    int a = 5;
    double b = 3.5;
    std::cout << a + b;
    return 0;

//covert wider type to narrow type (using static_cast)    (int)5.6 = 5

    double c = 5.6;
    int d = static_cast<int>(c);
    std::cout << d;
    return 0;
}
