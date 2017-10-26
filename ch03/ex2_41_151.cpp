#include <iostream>
#include <string>

using std::cin; using std::cout; using std::endl;

struct Sale_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main()
{
    Sale_data book;
    double price;
    cin >> book.bookNo >> book.units_sold >> price;
	book.revenue = book.units_sold * price;
    cout << book.bookNo << " " << book.units_sold << " " << book.revenue << " " << price << endl;
    return 0;
}

