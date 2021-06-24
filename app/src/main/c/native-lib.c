//
// Created by EJ on 6/24/2021.
//
#include <jni.h>

#include "android/log.h"
static const char *TAG="serial_port";
#define LOGI(fmt, args...) __android_log_print(ANDROID_LOG_INFO,  TAG, fmt, ##args)

JNIEXPORT jstring JNICALL Java_com_exa_ej_cppapp_JniLoader_stringFromJNI
        (JNIEnv *env, jobject thisObj) {
    return (*env)->NewStringUTF(env, "Hello from native code!!!!!!!!!!!!");
}

JNIEXPORT jdouble JNICALL Java_com_exa_ej_cppapp_JniLoader_average
        (JNIEnv *env, jobject thisObj,  jint a, jint b) {
    jdouble result;
    result = ((jdouble)a + b) / 2.0;
    // jint is mapped to int, jdouble is mapped to double
    return result;
}
