#include <iostream>

double tax(int incom);

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    setlocale(LC_ALL, "Russian");

    int incom;

    cout << "enter incom:" << endl;
    cin >> incom;
    while (cin) {
        cout << "incom:" << incom << endl;
        cout << "tax:";
        cout << tax(incom)<<endl;
        cin >> incom;
    }
}

double tax(int incom) {
    if (incom <= 35000) {
        if (incom <= 5000)
            return 0;
        else if (incom > 5000 && incom <= 15000)
            return 5000 * 0.0 + (incom - 5000) * 0.1;
        else
            return 5000 * 0.0 + 10000 * 0.1 + (incom - 15000) * 0.15;
    }
    else
        return 5000 * 0.0 + 10000 * 0.1 + 20000 * 0.15 + (incom - 35000) * 0.2;
}
