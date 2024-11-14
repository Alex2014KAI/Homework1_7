#include <iostream>

int main() {

	setlocale(LC_ALL, "Russian");

	short dataShort{};
	int dataInt{};
	long dataLong{};
	long long dataLongLong{};
	float dataFloat{};
	double dataDouble{};
	long double dataLongDouble;
	bool dataBool{};

	std::cout << "short: " << &dataShort << " " << sizeof(dataShort) << std::endl;
	std::cout << "int: " << &dataInt << " " << sizeof(dataInt) << std::endl;
	std::cout << "long: " << &dataLong << " " << sizeof(dataLong) << std::endl;
	std::cout << "long long: " << &dataLongLong << " " << sizeof(dataLongLong) << std::endl;
	std::cout << "float: " << &dataFloat << " " << sizeof(dataFloat) << std::endl;
	std::cout << "double: " << &dataDouble << " " << sizeof(dataDouble) << std::endl;
	std::cout << "long double: " << &dataLongDouble << " " << sizeof(dataLongDouble) << std::endl;
	std::cout << "bool: " << &dataBool << " " << sizeof(dataBool) << std::endl;

return 0;
}