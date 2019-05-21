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
	Tiles();
	Tiles(std::string, int, int, float);
	Tiles(const Tiles &copiedObj);
	~Tiles();
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

Tiles::Tiles() {

}
Tiles::Tiles(std::string s, int h, int w, float p) {
	brand = s;
	size_h = h;
	size_w = w;
	price = p;
}
Tiles::Tiles(const Tiles &copiedObj) {
	brand = copiedObj.brand;
	size_h = copiedObj.size_h;
	size_w = copiedObj.size_w;
	price = copiedObj.price;
}
Tiles::~Tiles() {
	//Do something you want
}