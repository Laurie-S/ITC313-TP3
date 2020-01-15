#ifndef _encrypt_h
#define _encrypt_h
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

class encrypt {

public:

    encrypt();

    string get_plain();

    string get_cipher();

    bool read(bool isPlain, string filename);

    bool write(bool isPlain, string filename);

    string encode();

    string decode();

protected:

    string m_plain;

    string m_cipher;

};

#endif
