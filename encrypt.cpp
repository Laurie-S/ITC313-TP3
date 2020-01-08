#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "encrypt.h"

using namespace std;

encrypt::encrypt(){
	m_plain="";
	m_cipher="";
}

string encrypt::get_plain(){
	return m_plain;
}

string encrypt::get_cipher(){
	return m_cipher;
}

bool encrypt::read(bool isPlain, string filename){
	string line;
	string message;
	ifstream lect(filename); // on ouvre le fichier
	if (lect){ // si on a reussi a l'ouvrir
		cout << "Ouverture du fichier" << endl; // informe l'utilisateur
		while(getline(lect, line)){	
			message+=line;
			if(isPlain==true){
				m_plain=message;
				return true;
			}
			else{
				m_cipher=message;
				return true;
			}
		}
	}
	else{
		cout << "Ouverture du fichier impossible" << endl;
	}

}

bool encrypt::write(bool isPlain, string filename){
	ofstream lect(filename, ios::app); // on ouvre le fichier
	if (lect){ // si on a reussi a l'ouvrir
		cout << "Ouverture du fichier" << endl; // informe l'utilisateur
		if(isPlain){
			lect << m_plain;
		}
		else{
			lect << m_cipher;
		}
	}
	return true;
}

string encrypt::decode(){
	m_plain=m_cipher;
	return m_cipher;
}

string encrypt::encode(){
	m_cipher=m_plain;
	return m_cipher;
}