#include <iostream>
#include <string>
#include "color_conv.h"
#include <algorithm>
#include <cctype>

int main() {
	std::string process_string;
	std::cout << "Encode or decode? Valid inputs (not case sensitive): \"ENCODE\", \"DECODE\""<<std::endl;
	std::cin >> process_string;
	std::transform(process_string.begin(),process_string.end(),process_string.begin(),::toupper);
	if (process_string == "ENCODE") {
		int r;
		int g;
		int b;

		std::cout << "\nr: ";
		std::cin >> r;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::cout << "\ng: ";
		std::cin >> g;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::cout << "\nb: ";
		std::cin >> b;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		rgb instance(r, g, b);
		instance.encode(true);
	}
	else if (process_string == "DECODE") {
		std::cout << "\nEncoded color (int): ";
		int color;
		std::cin >> color;
		encoded instance(color);
		instance.decode(true);
	}
	else {
		std::cout << "Not a valid input\n";
		main();
	}
	return 0;
}

