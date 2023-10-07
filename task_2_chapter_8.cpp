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