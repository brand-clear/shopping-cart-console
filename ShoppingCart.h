#pragma once
#include <vector>
#include "ItemToPurchase.h"
using namespace std;

class ShoppingCart {

private:
	vector<ItemToPurchase> shoppingCart;
	float totalCost = 0.0;
	float budget = 0.0;
	int quantityToRemove(int hasQty, int removeQty);

public:
	ShoppingCart();
	const float getTotalCost();
	const float getBudget();
	void setBudget(float amount);
	void getItemList();
	void add(string name, float price, int quantity);
	void remove(string name, int quantity);
};