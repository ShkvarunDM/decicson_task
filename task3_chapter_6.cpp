//Когда Вы вступите в Благотворительный Орден Программистов(БОП),к вам могут обращаться на заседаниях БОП
//по вашему реальному имени, по должности, либо секретному имени БОП. Напишите программу, которая может выводитьсписки членов
//по реальным именам,должностям,секретным именам либо по предпочтению самого члена. В основу положите следующую структуру:
/*struct bop {
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};*/
//В этой программе создайте небольшой массив таких структур и инициализируйте его соответствующими значениями.
//Пусть программма запустит цикл, который даст возможность пользователю выбирать разные альтернативы:
/*
a.display by name
b.display by title
c.display by bopname
d.display by preference
q.quit
*/

#include <iostream>

const int strsize = 20;
const int n = 5;

struct bop {
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};


int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    setlocale(LC_ALL, "Russian");

    bop * bop_array = new bop[n]; //массив структур

    //иницилизация
    for (int i = 0; i < n; i++) {
        cout << "fullname" << endl;
        cin >> bop_array[i].fullname;

        cout << "title" << endl;
        cin >> bop_array[i].title;

        cout << "bopname" << endl;
        cin >> bop_array[i].bopname;

        cout << "preference = 0(fullname), 1(title) or 2(bopname)" << endl;
        cin >> bop_array[i].preference;
        while (bop_array[i].preference != 0 && bop_array[i].preference != 1 && bop_array[i].preference != 2) {
            cout << "Incorrect preference enter new:" << endl;
            cin >> bop_array[i].preference;
        }
    }

    char ch;
    cout << "Choice: a.display by name" << endl;
    cout << "b.display by title" << endl; 
    cout << "c.display by bopname" << endl;
    cout << "d.display by preference" << endl;
    cout << "q.quit" << endl;
    cin >> ch;

    while (ch != 'q') {
        switch (ch) {
        case 'a': {cout << "fullname:"<<endl;
            for (int i = 0; i < n; i++)
                cout << bop_array[i].fullname << endl;
            break;
        }
        case 'b': {
            cout << "title:" << endl;
            for (int i = 0; i < n; i++)
                cout << bop_array[i].title << endl;
            break;
        }

        case 'c': {
            cout << "bopname:" << endl;
            for (int i = 0; i < n; i++)
                cout << bop_array[i].bopname << endl;
            break;
        }
        case 'd': {
            cout << "preference = 0(fullname), 1(title) or 2(bopname):" << endl;
            for (int i = 0; i < n; i++)
                if (bop_array[i].preference == 0) {
                    cout << "fullname:" << endl;
                    cout << bop_array[i].fullname << endl;
                }
                else if (bop_array[i].preference == 1) {
                    cout << "title:" << endl;
                    cout << bop_array[i].title << endl;
                }
                else {
                    cout << "bopname:" << endl;
                    cout << bop_array[i].bopname << endl;
                }
            break;
        default: {cout << "INCORRECT CHAR" << endl; break;}
        }
        case 'q': {
            exit(EXIT_FAILURE);}
        }
        cout << "Next choice:" << endl;
        cin >> ch;

    }
}

