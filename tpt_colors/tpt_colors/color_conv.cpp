#include "color_conv.h"
#include <iostream>
#include <string>
encoded::encoded(int color)
{
	c = color;
}

encoded::~encoded()
{
}

void encoded::decode(bool output)
{
	int r = (c >> 16) & 255;
	int g = (c >> 8) & 255;
	int b = (c) & 255;
	if (output == true) {
		std::cout << "Decoded: r = " << r << ", g = " << g << ", b = " << b << std::endl;
		std::cout << "\x1b[38;2;" << r << ";" << g << ";" << b << "m\xdb\x1b[0m";
	}
}

rgb::rgb(int red, int green, int blue)
{
	r = red;
	g = green;
	b = blue;
}

rgb::~rgb()
{
}

int rgb::encode(bool output)
{
	int color = (r << 16) + (g << 8) + (b);
	if (output == true) {
		std::cout << color;
		std::cout << ": \x1b[38;2;" << r << ";" << g << ";" << b << "m\xdb\x1b[m";
	}
	return color;
}
