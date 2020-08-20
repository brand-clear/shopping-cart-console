#include <iostream>
#include "ShoppingCart.h"

ShoppingCart::ShoppingCart() {}
const float ShoppingCart::getTotalCost() { return totalCost; }
const float ShoppingCart::getBudget() { return budget; }
void ShoppingCart::setBudget(float amount) { budget = amount; }


// Add a new ItemToPurchase to the shopping list.
void ShoppingCart::add(string name, float price, int quantity) {
	shoppingCart.push_back(ItemToPurchase(name, price, quantity));
	totalCost += price*quantity;
}


// Print the shopping list item names.
void ShoppingCart::getItemList() {
	for (int i = 0; i < size(shoppingCart); i++) {
		cout << shoppingCart.at(i).getName();
	}
}


// Remove an ItemToPurchase quantity from the ShoppingCart.
void ShoppingCart::remove(string name, int quantity=0) {
	ItemToPurchase item;
	for (int i = 0; i < size(shoppingCart); i++) {
		if (shoppingCart.at(i).getName() == name) {
			item = shoppingCart.at(i);
			quantity = quantityToRemove(item.getQuantity(), quantity);
			if (quantity == item.getQuantity()) {
				shoppingCart.erase(shoppingCart.begin() + i);
				return;
			}
			else {
				item.setQuantity(item.getQuantity() - quantity);
			}
		}
	}
}


/*
Return a validated quantity to remove from an ItemToPurchase instance.
@param	hasQty		The existing quantity of an ItemToPurchase instance.
@param	removeQty	The quantity being requested to remove from the ShoppingCart.
*/
int ShoppingCart::quantityToRemove(int hasQty, int removeQty) {
	if (removeQty <= 0) {
		// Default to the instance quantity
		return hasQty;
	}
	else if (removeQty >= hasQty) {
		return hasQty;
	}
	else {
		return removeQty;
	}
}


