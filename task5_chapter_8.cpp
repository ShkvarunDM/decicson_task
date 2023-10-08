#include <iostream>

const unsigned int size_array = 5;

template <typename T>
T max5(T * mas) {
	T max = mas[0];
	for (int i = 1; i < size_array; i++) {
		if (mas[i] > max)
			max = mas[i];
	}
	return max;
}

int main() {

	double mas_d[size_array] = {2.33,4.56,7.89,2.3,4.90};
	int mas_i [size_array] = {4,67,8,12,-5};

	std::cout << "max in massiv double: " << max5(mas_d) << std::endl;
	std::cout << "max in massiv int: " << max5(mas_i) << std::endl;

	return 0;
}

