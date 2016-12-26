//============================================================================
// Name        : TestApp.cpp
// Author      : Nasim
// Version     :
// Copyright   : copyright @ Kona Software Lab Limited
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <TestCppLib.h>
#include <CppLib.h>

using namespace std;

int main() {
	testAdd();
	testMultiply();
	return 0;
}

void testAdd() {
	int a = 10; int b = 20;
	int sumExpected = a+b;

	int sumFromLib = add(a, b);

	if(sumFromLib != sumExpected) {
		cout << TESTAPP_LOG << "testAdd() FAILED !" << endl;
	} else {
		cout << TESTAPP_LOG << "testAdd() PASSED !" << endl;
	}
}

void testMultiply() {
	int a = 10; int b = 20;
	int productExpected = a*b;

	int productFromLib = multiply(a, b);

	if(productFromLib != productExpected) {
		cout << TESTAPP_LOG << "testMultiply() FAILED !" << endl;
	} else {
		cout << TESTAPP_LOG << "testMultiply() PASSED !" << endl;
	}
}
