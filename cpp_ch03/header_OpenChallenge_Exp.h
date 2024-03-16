#ifndef HEADER_OPENCHALLENGE_EXP
#define HEADER_OPENCHALLENGE_EXP

class Exp {
	int base, exp;
public:
	Exp() :Exp(1, 1) {}
	Exp(int b);
	Exp(int b, int e);
	int getValue();
	int getBase();
	int getExp();
	bool equals(Exp b);
};

#endif