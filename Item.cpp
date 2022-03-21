#include "Item.h"
#include <iostream>
using namespace std;

// 4. Implement Default Constructor Implementation
// 5. Implement Overloaded Constructor Implementation
// 6. Implement Destructor (display "Destructor Called")
// Default Constructor Implementation
Item::Item(){
  itemCode = 0;
  unitPrice = 0;
  discount = 0;
}
//Overloaded Constructor Implementation
Item::Item(int pitemCode, float punitPrice, float 
           pdiscount){
  itemcode = pitemCode;
  unitPrice = punitPrice;
  discount = pdiscount;
}
//Destructor Implementation
Item::~Item(){
  cout << "Destructor Called" << endl;
}
void Item::setDiscount(float pdiscount) {
  discount = pdiscount;
}

float Item::getDiscount() {
  return discount;
}

float Item::discountedPrice() {
   return unitPrice - unitPrice * discount/100;
}

void Item::display() {
  cout << "Item : " << itemCode << endl;
  cout << "Discounted Price " << discountedPrice() << endl;
}
