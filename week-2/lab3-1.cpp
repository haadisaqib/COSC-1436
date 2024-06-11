#include <iostream>

int main() {
    int num = 10;
    std::cout << "num = " << num << '\n';

    //arthemitic example
    num = num + 1;
    std::cout << "num + 1= " << num << '\n';

    //floating point example
    float num2 = 10.12312;
    std::cout << "num2 = " << num2 << '\n';

    //Character example
    char letter = 'a';
    std::cout << "letter = " << letter << '\n';

    //const example
    const int num3 = 10;
    std::cout << "num3 = " << num3 << '\n';

    //complex example
    int num4 = 10;
    int num5 = 20;
    int num6 = num4 + num5;
    std::cout << "num6 = " << num6 << '\n';
    return 0;
}

