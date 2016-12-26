#define EXPORT __declspec( dllexport )

#define TAG	">>> [NATIVE] CppLib::"

extern "C"
{
	EXPORT void __stdcall showMessage(const char* message);
	EXPORT int __stdcall add(int a, int b);
	EXPORT int __stdcall multiply(int a, int b);
}
