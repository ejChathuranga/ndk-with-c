//
// Created by EJ on 6/24/2021.
//
#include <jni.h>


Java_com_exa_ej_cppapp_MainActivity_stringFromJNI
        (JNIEnv *env, jobject thisObj) {
    return (*env)->NewStringUTF(env, "Hello from native code!");
}
