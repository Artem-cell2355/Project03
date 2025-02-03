#include <iostream>

int main()
{
    int v = 10;
    char s = 'g';

    short a = 10;
    int b = 40;
    long c = 11L;
    long long d = 10LL;

    unsigned short a = 10;
    unsigned int b = 10U;
    unsigned long c = 10UL;
    unsigned long long d = 10ULL;

    float a = 1.5f;
    double b = .1;
    long double c = 1.5L;

    char a = u8'd';
    wchar_t b = L'g';
    char16_t c = u'g';
    char32_t d = U'g';

    bool a = true;
    /*Перший рядок
    другий рядок
    третій рядок*/
    return 0;

    //Це буде якийсь коментар
    
    2 + 3;  //+ - оператори
    int a, b;
    std::cout << "Enter two numbers";
    std::cin >> a >> b;

    a = 3; //= це оператор присвоєння
    a = 3 + 5; //оператор додавання
    a = 3 - 5; //оператор віднімання
    a = 3 * 5; //оператор множення 
    a = 3 / 5; //оператор ділення

    std::cout << "Enter two numbers:";
    std::cin >> a >> b;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "+a = " << a << std::endl;
    std::cout << "+b = " << b << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b<< std::endl;

    //оператор дылення по модулю %
    std::cout << "a % b = " << a % b << std::endl;
    std::cout << 2 / 0;

    int number = 4 * 2 / 2  ;
    std::cout << number; 

    std::cout << "Enter a number: ";
    int numberh;
    std::cin >> numberh;
    std::cout << "Number = " << numberh << std::endl;
    numberh += 10;
    std::cout << "Number = " << numberh << std::endl; 
    numberh -= 10;
    std::cout << "Number = " << numberh << std::endl;
    numberh *= 2;
    std::cout << "Number = " << number << std::endl;
    numberh /= 4;
    std::cout << "Number = " << number << std::endl;
    number %= 10;
    std::cout << "Number = " << number << std::endl;
    
    int numbers;
    std::cout << "Number = " << numbers << std::endl;
        numbers++; //інкремент
    std::cout << "Number = " << numbers << std::endl;
        numbers--; //декремент
    std::cout << "Number = " << numbers << std::endl;

    return 0;
}
