#pragma once
class encoded {
private:
	int c;
public:
	encoded(int color);
	~encoded();
	void decode(bool output);
};

class rgb {
private:
	int r;
	int g;
	int b;
public:
	rgb(int red, int green, int blue);
	~rgb();
	int encode(bool output);
};