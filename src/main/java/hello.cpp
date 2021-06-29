#include "HelloWorldJni.h"
#include <iostream>
using namespace std;

JNIEXPORT void JNICALL Java_HelloWorldJni_sayHello
  (JNIEnv* env, jobject thisObject) {
    std::cout << "Hello from C++ !!" << std::endl;
}

JNIEXPORT jlong JNICALL Java_HelloWorldJni_sumIntegers (JNIEnv *, jobject thisObject, jint first, jint second) {
    std::cout << "C++: The numbers received are : " << first << " and " << second << std::endl;
    return (long)first + (long)second;
}

JNIEXPORT jstring JNICALL Java_HelloWorldJni_sayHelloTome
  (JNIEnv * env, jobject thisObject, jstring name, jboolean isFemale) {

      const char* nameCharPointer = env->GetStringUTFChars(name, NULL);
          std::string title;
          if(isFemale) {
              title = "Ms. ";
          }
          else {
              title = "Mr. ";
          }

          std::string fullName = title + nameCharPointer;
          return env->NewStringUTF(fullName.c_str());
}

