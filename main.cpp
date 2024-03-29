#include "Crypto.h"
#include "Shablon.h"
#include "ToxerSyuner.h"
#include "rle.h"

int main() {
	//Shablon
	string s1 = "barevdzez";
	Shablon obj1(s1);
	cout << "Shablon" << endl;
	cout << "Original string is: " << s1 << endl;
	cout << "Encrypted string is: " << obj1.dCoder() << endl;
	cout << "Decrypted string is: " << obj1.nCoder() << endl << endl;

	//Toxer/Syuner
	string s2 = "barevdzez";
	ToxerSyuner obj2(s2, 3);
	cout << "Toxer/Syuner" << endl;
	cout << "Original string is: " << s2 << endl;
	cout << "Encrypted string is: " << obj2.dCoder() << endl;
	cout << "Decrypted string is: " << obj2.nCoder() << endl << endl;

	//RLE
	string s3 = "yevaghazaryan";
	rle obj3(s3);
	cout << "RLE" << endl;
	cout << "Original string is: " << s3 << endl;
	cout << "Encrypted string is: " << obj3.dCoder() << endl;
	cout << "Decrypted string is: " << obj3.nCoder() << endl << endl;
}