#include <iostream>
#include "CppLib.h"

#define EXPORT __declspec( dllexport )

using namespace std;

extern "C"
{
	EXPORT void __stdcall showMessage(const char* message) {
		cout << TAG << message << endl;
	}
	
	EXPORT int __stdcall add(int a, int b) {
		cout << TAG << "adding " << a << " and " << b << " inside cpp method..." << endl;
		return ( a + b );
	}
	
	EXPORT int __stdcall multiply(int a, int b) {
		cout << TAG << "multiplying " << a << " and " << b << " inside cpp method..." << endl;
		return ( a * b );
	}
}
