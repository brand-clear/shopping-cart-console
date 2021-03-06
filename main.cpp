#include <iostream>
#include <sstream>
#include "ItemToPurchase.h"
#include "ShoppingCart.h"
using namespace std;


bool isQuantity(string value) {
	for (int i = 0; i < value.length(); i++) {
		if (isdigit(value[i]) == false) {
			return false;
		}
	}
	return true;
}


// Split text by whitespace delimiter.
vector<string> getInputAsVector(string input) {
	string subString;
	vector<string> inputVector;
	stringstream inputStream(input);

	while (inputStream.good()) {
		getline(inputStream, subString, ' ');
		inputVector.push_back(subString);
	}
	return inputVector;
}


void addItemToCart(vector<string> input) {
	int quantity = 0;
	if (isQuantity(input[1])) {
		quantity = stoi(input[1]);
	}
	

}





int main()
{
	cout << "Welcome to your shopping cart console!" << endl << endl;
	cout << "To add an item to your shopping cart, type:" << endl;
	cout << "-add QUANTITY NAME PRICE" << endl << endl;
	cout << "Where:" << endl;
	cout << "-QUANTITY is an integer" << endl;
	cout << "-NAME is the item you wish to purchase" << endl;
	cout << "-PRICE is the cost of a single NAME item" << endl;
	cout << "-If QUANTITY is omitted, this value defaults to 1" << endl;
	cout << "-There is only 1 space between each input" << endl << endl;
	cout << "To remove an item from your shopping cart, type:" << endl;
	cout << "-remove QUANTITY NAME" << endl << endl;
	cout << "Where:" << endl;
	cout << "-The same rules apply, but if QUANTITY is omitted, all existing NAME items will be removed" << endl << endl;
	cout << "To view your entire shopping cart, type:" << endl;
	cout << "-cart" << endl;
	cout << "------------------------------------------------------------------------------------------" << endl;
	



	string input;
	vector<string> inputVector;
	ShoppingCart myCart = ShoppingCart();

	bool proceed = true;
	string name;
	float price;
	int quantity;


	while (proceed) {
		getline(cin, input);
		inputVector = getInputAsVector(input);
		if (inputVector[0] == "add") {
			addItemToCart(inputVector);
		}



	}
}

