/Visual Studio 2015 Community Edition ile olusturulmustur.
//Basit olarak XOR şifreleme ve şifreyi çözme işlemi gerçekleştirmektedir.

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

//XOR Encryption/Decryption ALGORITMAMIZ 
string XOR(string data, char key[])
{
	string xorstring = data; //XOR verisi icin yeni variable'miz
	for (int i = 0; i < xorstring.size(); i++) { //Dizedeki (strings) bits'leri karıştırmak için döngü
		xorstring[i] = data[i] ^ key[i % (sizeof(key) / sizeof(char))];
		 
	}

	return xorstring;
}

int main()
{
	char key[3] = { 'K', 'E', 'Y' };
	string data =  XOR("VMM", key);
	cout << data;	
	getchar();
	return 0;
}
