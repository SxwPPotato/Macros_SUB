#include <iostream>
#define SUB(a,b) ((a)-(b))

int main()
{
    setlocale(LC_ALL, "russian");
    int a;
    int b;
    int c;

#if !defined(SUB) 
    std::cout << "Определите SUB";
#else
    std::cout << "int a = ";
    std::cin >> a;
    std::cout << "int b = ";
    std::cin >> b;
    std::cout << "int c = ";
    std::cin >> c;
    std::cout << SUB(a, b) << std::endl;
    std::cout << SUB(a, b) * c << std::endl;
    std::cout << SUB(a, b + c) * c << std::endl;   
#endif
#undef SUB
}
