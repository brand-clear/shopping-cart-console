#pragma once
#include <string>
using namespace std;

class ItemToPurchase {

private:
	string name;
	double price;
	int quantity;

public:
	ItemToPurchase();
	ItemToPurchase(string name, float price, int quantity);
	const string getName();
	const float getPrice();
	const int getQuantity();
	void setName(string name);
	void setPrice(float price);
	void setQuantity(int quantity);

};