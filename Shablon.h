#pragma once
#include "Crypto.h"

class Shablon : public Crypto {
	string s;
	string array1 = "helloworldhelloworldhappyclasssadclass2156165";
	string array2 = "5helloworldhelloworldhappyclasssadclass215616";

public:
	Shablon(string str) : Crypto(str) {
		s = str;
	}
	string dCoder();
	string nCoder();
};
