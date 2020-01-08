#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "encrypt.h"

using namespace std;

int main(){
	encrypt enc;
	string aa, bb;

    enc.read(true, "code.txt");
    cout << enc.get_plain() << endl << endl;
    aa=enc.encode();

    cout << enc.get_cipher() << endl << endl;
    encrypt enc2;
    enc.write(true, "code2.txt");
    enc2.read(false, "code.txt");
    cout << enc2.get_cipher() << endl << endl;
   	bb = enc2.decode();

}