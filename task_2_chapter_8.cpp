/*
Структура CandyBar содержит три члена. Первый член хранит название коробки
конфет. Второй — ее вес (который может иметь дробную часть), а третий —
количество калорий (целое значение). Напишите программу, использующую
функцию, которая принимает в качестве аргументов ссылку на CandyBar, указатель
на char, значение double и значение int. Функция использует три последних
значения для установки соответствующих членов структуры. Три последних
аргумента должны иметь значения по умолчанию: "Millennium Munch", 2.85 и 350.
Кроме того, программа должна использовать функцию, которая принимает в
качестве аргумента ссылку на CandyBar и отображает содержимое этой структуры.
Где необходимо, используйте const.
*/

#include <iostream>

struct CandyBar {
	const char * name;
	double weight;
	int count_cal;

};

void set(CandyBar* cb, const char* name = "Millennium Munch", double weight = 2.85,  int cal = 350);
void show(const CandyBar* cb);

int main() {

	CandyBar cb1;
	set( &cb1, "ROSHEN", 4.53, 1500);
	show(&cb1);

	CandyBar cb2;
	set(&cb2);
	show(&cb2);

	return 0;
}


void set(CandyBar* cb, const char* name1,  double weight,  int cal ) {
	cb->name = name1;
	cb->weight = weight;
	cb->count_cal = cal;

}

void show(const CandyBar* cb) {
	std::cout << "name candy: " << cb->name << std::endl;
	std::cout << " weight = " << cb->weight << std::endl;
	std::cout << " count cal = " << cb->count_cal << std::endl;
}
