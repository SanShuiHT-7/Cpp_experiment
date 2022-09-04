#include <iostream>
using namespace std;
class Book{
	private:
		string name;
		float price;
	public:
		string get_name();
		void setName(const string newName);
		float get_price();
		void setPrice(const float newPrice);
};
