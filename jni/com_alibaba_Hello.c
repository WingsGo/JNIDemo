#include <stdio.h>
#include "com_alibaba_Hello.h"

JNIEXPORT void JNICALL Java_com_alibaba_Hello_sayHi(JNIEnv *env, jobject obj, jstring who, jint times) {
  jint i;
  jboolean iscopy;
  const char* name;
  name = (*env)->GetStringUTFChars(env, who, &iscopy);
  for (i = 0; i < times; i++) {
    printf("Hello %s\n", name);
  }
}
