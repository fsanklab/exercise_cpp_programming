#ifndef HEADER_11
#define HEADER_11

class Box {
	int width, height;
	char fill;
public:
	Box() :Box(1, 1) {}
	Box(int w, int h);
	void setFill(char f);
	void setSize(int w, int h);
	void draw();
};
#endif