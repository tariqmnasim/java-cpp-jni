package com.tariqmnasim.jnitest;

public class CppLibJNITest {

	public native void showMessage(String message);
	public native int add(int a, int b);
	public native int multiply(int a, int b);
	
	static {
		System.loadLibrary("cpplib");
		System.loadLibrary("CppLibJNI");
	}
	
	/**
	 * @param args
	 */
	public static void main(String[] args) {
		new CppLibJNITest().testAdd();
		new CppLibJNITest().testMultiply();
	}
	
	public void testAdd() {
		int a = 5;
		int b = 10;
		int expectedResult = a+b;
		int nativeResult = add(a, b);
		if(nativeResult != expectedResult) {
			System.out.println("testAdd() -- FAILED !");
		} else {
			System.out.println("testAdd() -- SUCCESS !");
		}
	}
	
	public void testMultiply() {
		int a = 5;
		int b = 10;
		int expectedResult = a*b;
		int nativeResult = multiply(a, b);
		if(nativeResult != expectedResult) {
			System.out.println("testMultiply() -- FAILED !");
		} else {
			System.out.println("testMultiply() -- SUCCESS !");
		}
	}

}
