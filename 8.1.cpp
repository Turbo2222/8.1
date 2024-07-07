#include <iostream>
#include<string>
int function(std::string str, int forbidden_length) {

    try
    {
        if (str.length() == forbidden_length) {
            throw "Вы ввели слово запретной длины!До свидания!";
        }
        std::cout << "Длина слова: " << str << " равна " << str.length()<<std::endl;
       
            std::cout << "Введите слово: ";
            std::cin >> str;
            function(str, forbidden_length);
    }
    catch (const char* except)
    {
        std::cout << except;
        return false;
        
    }

}

int main()
{
    setlocale(LC_ALL, "ru");
    system("chcp 1251");
    int len;
    std::string str;
    
    
        std::cout << "Введите запретную длину: ";
        std::cin >> len;
        
        
       
         std::cout << "Введите слово: ";
         std::cin >> str;

         function(str, len);
        


    return 0;
}

