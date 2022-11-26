
#include <iostream>

enum Month
{
    january = 1,
    february,
    march,
    april,
    may,
    june,
    july,
    august,
    september,
    october,
    november,
    december
};
int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
  
    Month mn;
    
    int x;
    do {
        std::cout << "Введите номер месяца:";
        std::cin >> x;
        mn = static_cast<Month>(x);
    
    switch (mn)
    {
    case january: std::cout << "Январь" << std::endl;
        break;
    case february:std::cout << "Февраль" << std::endl;
        break;
    case march:std::cout << "Март" << std::endl;
        break;
    case april:std::cout << "Апрель" << std::endl;
        break;
    case may:std::cout << "Май" << std::endl;
        break;
    case june:std::cout << "Июнь" << std::endl;
        break;
    case july:std::cout << "Июль" << std::endl;
        break;
    case august:std::cout << "Авгус" << std::endl;
        break;
    case september:std::cout << "Сентябрь" << std::endl;
        break;
    case october:std::cout << "Октябрь" << std::endl;
        break;
    case november:std::cout << "Ноябрь" << std::endl;
        break;
    case december:std::cout << "Декабрь" << std::endl;
        break;
    default:
        if (mn!=0)
            std::cout << "Неправильный номер!" << std::endl;
        else 
            std::cout << "До свидания!";
        break;
    }
    } while (x != 0);
     
    
}
