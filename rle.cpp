#include "rle.h"
#include "Crypto.h"

string rle::dCoder()
{
    char a[16] = { '2','1','2','2','0','0','6','7','8','4','Y','E','V','A','G','H' };
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        int k = 1;
        while (s[i] == s[i + 1] && i < s.length() - 1) {
            k++;
            i++;
        }
        //cout << s[i] << k;
        char c = a[k];
        result = result + s[i];
        result = result + c;
    }
    return result;

}

string rle::nCoder()
{
    char a[16] = { '2','1','2','2','0','0','6','7','8','4','Y','E','V','A','G','H' };
    string d = dCoder();
    string result = "";
    int k, l = 0;
    for (int i = 0; i < d.length(); i = i + 2) {
        k = 0;
        while (a) {
            if (d[i + 1] == a[k]) {
                l = k;
                break;
            }
            k++;
        }
        while (l) {
            result = result + d[i];
            l--;
        }
    }
    return result;
}