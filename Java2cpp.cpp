#include "Java2cpp.h"
#include "dllApi.h"

JNIEXPORT jint JNICALL Java_Java2cpp_DLL_1ADD(JNIEnv* env, jobject obj, jint a, jint b)
{
	int var = 0;

	var = DLL_API_ADD(a, b);

	return var;
}

JNIEXPORT jint JNICALL Java_Java2cpp_DLL_1SUB(JNIEnv* env, jobject obj, jint a, jint b)
{
	int var = 0;

	var = DLL_API_SUB(a, b);

	return var;
}

JNIEXPORT jint JNICALL Java_Java2cpp_DLL_1MUL(JNIEnv* env, jobject obj, jint a, jint b)
{
	int var = 0;

	var = DLL_API_MUL(a, b);

	return var;
}

JNIEXPORT jint JNICALL Java_Java2cpp_DLL_1DIV(JNIEnv* env, jobject obj, jint a, jint b)
{
	int var = 0;

	var = DLL_API_DIV(a, b);

	return var;
}
