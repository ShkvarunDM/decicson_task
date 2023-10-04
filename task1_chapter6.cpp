
//Напишите программу, которая читает клавиатурный ввод до символа @ и повтоторяет его, 
//за исключанием десятичных цифр, преобразую каждую букву верхнего регистра в букву нижнего и наоборт.
//(Не забудьте о семействе функций cctype)

#include <iostream>
#include <cctype>

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    char ch;
    setlocale(LC_ALL, "Russian");

    cout << "Введите текст" << endl;
    while ((cin >> ch) && ch != '@') {
        if (isdigit(ch) == false) {
            if (isalpha(ch) && isupper(ch))
                cout << char(tolower(ch));
            else
                cout << char(toupper(ch));
        }
        else continue;
    }
}
