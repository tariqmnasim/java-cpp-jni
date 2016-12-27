# java-cpp-jni

There are three modules:

**cpplib** - a c++ library module that provides some functions. The outcome of this module is a dynamic link library (cpplib.dll).

**TestCppLib** - a test c++ executable module that uses the 'cpplib.dll' generated from above project.

**CppLib-JNI** - a java application that uses the functions exposed by 'cpplib.dll' through Java Native Interfacing.
