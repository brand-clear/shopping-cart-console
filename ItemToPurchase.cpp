#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase() {
	itemName = "N/A";
	itemPrice = 0.0;
	itemQuantity = 0;
}

ItemToPurchase::ItemToPurchase(string name, float price, int quantity) {
	name = name;
	price = price;
	quantity = quantity;
}

const string ItemToPurchase::getName() { return name; }

const float ItemToPurchase::getPrice() { return price; }

const int ItemToPurchase::getQuantity() { return quantity; }

void ItemToPurchase::setName(string name) { name = name; }

void ItemToPurchase::setPrice(float price) { price = price; }

void ItemToPurchase::setQuantity(int quantity) { quantity = quantity; }

