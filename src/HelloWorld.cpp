/*
 * HelloWorld.cpp
 *
 *  Created on: 2016Äê11ÔÂ1ÈÕ
 *      Author: Administrator
 */


#include <iostream>
using namespace std;

namespace HelloWorld{

	void test01(){
		cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
		cout << "!!!Hello World!!!"; // prints !!!Hello World!!! and something else.
	}

	void test02(){
		cout << "Size of char : " << sizeof(char) << endl;
		cout << "Size of int : " << sizeof(int) << endl;
		cout << "Size of short int : " << sizeof(short int) << endl;
		cout << "Size of long int : " << sizeof(long int) << endl;
		cout << "Size of float : " << sizeof(float) << endl;
		cout << "Size of double : " << sizeof(double) << endl;
		cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
	}
}

int main() {
	HelloWorld::test01();
	HelloWorld::test02();

	return 0;
}

