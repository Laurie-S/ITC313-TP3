#ifndef _vigenere_h
#define _vigenere_h
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "encrypt.h"
using namespace std;

class vigenere: public encrypt {
public:
	vigenere();
	void creer_cle();
	void encode();
	void decode();

private:
	vector<int> cle;

};
#endif