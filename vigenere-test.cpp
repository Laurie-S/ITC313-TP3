#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "encrypt.h"
#include "vigenere.h"

using namespace std;

int main(){
	vigenere vin;
	int choix;
	cout << "voulez vous coder (1) ou decoder (2) un message ? ";
	cin >> choix;
	if (choix == 1){
		vin.encode();
	}
	else {
		vin.decode();
	}
}
