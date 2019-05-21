#pragma once
#include <iostream>
#include <string>

class Tiles {
public:
	std::string brand;
	int size_h;
	int size_w;
	float price;
	void getData();
};
void Tiles::getData() {
	std::cout << "Enter brand name: ";
	std::cin >> brand;
	std::cout << "Enter size of height: ";
	std::cin >> size_h;
	std::cout << "Enter size of width: ";
	std::cin >> size_w;
	std::cout << "Enter price: ";
	std::cin >> price;
	std::cout << this->brand << " has " << this->size_h << "*"
		<< this->size_w << " and costs "
		<< this->price << "\n" << std::endl;
	std::cin.get();
}