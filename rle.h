#pragma once
#include "Crypto.h"

class rle : public Crypto {
	string s;
public:
	rle(string str) : Crypto(str) {
		s = str;
	}
	string dCoder();
	string nCoder();
};