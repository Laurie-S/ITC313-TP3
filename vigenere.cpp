#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "encrypt.h"
#include "vigenere.h"

using namespace std;


vigenere::vigenere(){
	encrypt();
	creer_cle();
}

void vigenere::creer_cle(){
	int i = 1;
	while(i!=0){
		int nbr;
		cout << "Entrer la clé (en nombre) 0 pour finir " << endl;
		cin >> nbr;

		if(nbr!=0){
			cle.push_back(nbr);
		}
		else{i=0;}
	}
}

void vigenere::encode(){
	bool lect = read(false, "code.txt");
	if(lect){
		for(int i =0; i< m_cipher.size(); i++){
			char x = m_cipher.at(i);
			m_plain+=char ((int(x)+cle.at(i%cle.size()))%128);
			}
		write(true, "decode.txt");
	}
}

void vigenere::decode(){
	bool lect = read(true, "decode.txt");
	if(lect){
		for(int i =0; i< m_plain.size(); i++){
			char x = m_plain.at(i);
			if(((int(x)-cle.at(i%cle.size()))%128)<0){
				m_plain+=char (128-(int(x)-cle.at(i%cle.size()))%128);
			}
			else{
				m_cipher+=char ((int(x)-cle.at(i%cle.size()))%128);
			}
		}
		write(false, "code.txt");
	}
}