#include <stdio.h>
#include <jni.h>
#include <android/log.h>
#include "com_tsuyogoro_nativetest_NativeManger.h"

JNIEXPORT jstring JNICALL Java_com_tsuyogoro_nativetest_NativeManger_msgFromNDK
        (JNIEnv *env, jobject) {

    __android_log_write(ANDROID_LOG_INFO, "NativeTestTest", "Native msgFromNDK is called");

    return env->NewStringUTF("This is response from Native!!!");
}

//JNIEXPORT jobject JNICALL Java_com_tsuyogoro_nativetest_NativeManger_createDataType
//        (JNIEnv *, jobject, jint, jstring) {
//
//
//    return ;
//}

JNIEXPORT void JNICALL Java_com_tsuyogoro_nativetest_NativeManger_seeDataType
(JNIEnv *env, jobject, jobject dataType) {
    jclass cls = env->FindClass("com/tsuyogoro/nativetest/DataType");
    jfieldID fj = env->GetFieldID(cls, "value", "I");

    jint rj = env->GetIntField(dataType, fj);
    __android_log_print(ANDROID_LOG_INFO, "NativeTestTest", "GetIntField value : %d", rj);

    jstring description = env->Get

    __android_log_write(ANDROID_LOG_INFO, "NativeTestTest", "Native seeDataType is called");
}