//Visual Studio 2015 Community Edition ile olusturulmustur.
//Basit olarak dizeler icin encrypt ve decrypt islemi yapmaktadir.

#include "stdafx.h"
#include "iostream"

using namespace std;


int main()
{
	int i, x;
	char str[100];

	cout << "Please enter the strings: \t";
	cin >> str;

	cout << "\nPLease choose following options: \n";
	cout << "1 = Encrypt the sting. \n";
	cout << "2 = dECrypt the string. \n";
	cin >> x;

	switch (x)
	{
		// string encryption icin ilk case
	   case 1:
		   
		   for (i = 0; (i < 100 && str[i] != '\0'); i++)
			  str[i] = str[i] + 2;

		  cout << "\nEncrypted string: " << str << endl;
		  break;
		//string decryption icin case
	   case 2:
		   
		   for (i = 0; (i < 100 && str[i] != '\0'); i++);
		   str[i] = str[i] - 2;

		  cout << "\nDecrypted string: " << str << endl;
		  break;

	      default:
			  
		      cout << "\nInvalid Input  !!\n";
	 }
     return 0;
}
