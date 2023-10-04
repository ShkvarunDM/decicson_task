//Напишите программу,читающую в массив double до 10 значений пожертвований.
// Программа должна прекращать ввод при получении нечисловой величины
// Она должна вырадать среднее значение полученных числе, а также кол-во значений в массиве больших,чем среднее


#include <iostream>

const int n = 10;

int count_bigger_average(double, double*,int);

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    double sum=0;
    int count=0;
    setlocale(LC_ALL, "Russian");

    double* array2 = new double[n];

    cout << "enter number" << endl;
    int i = 0;
    while (i<n){
        cin >> array2[i];
        if (!cin) {
            cout << "erorr number" << endl;
            break;
        }
        else {
            sum += array2[i];
            count++;
        }
        i++;
    }
    double average = sum / count;
    cout << "average: " << average<<endl;
    cout << "Count bigger than average: " << count_bigger_average(average, array2, count) << endl;
}

 int count_bigger_average(double average2, double* n, int cnt) {
    int k = 0;

    for (int i = 0; i < cnt; i++) {
        if (n[i] > average2)
            k++;
    }
    return k;
}
