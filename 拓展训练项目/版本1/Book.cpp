#include <iostream>
#include "Book.h"
using namespace std;
string Book::get_name(){
	return name; 
}
void Book::setName(const string newName){
	name=newName; 
} 
float Book::get_price(){
	return price;
}
void Book::setPrice(const float newPrice){
	price=newPrice;
}
