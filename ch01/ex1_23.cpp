#include <iostream>
#include "../include/Sales_item.h"

int main() {
	Sales_item currItem, item;
	if(std::cin >> currItem) {
		int cnt = 1;
		while(std::cin >> item) {
			if(item.isbn() == currItem.isbn())
				cnt++;
			else {
				std::cout << currItem.isbn() << " sells " << cnt << std::endl;
			    currItem = item;
			    cnt = 1;
			}	
		}
		std::cout << currItem.isbn() << " sells " << cnt << std::endl;
	} else {
		std::cerr << "No data?!" << std::endl;
		return -1;
	}
	return 0;
}

