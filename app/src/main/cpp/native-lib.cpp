#include <jni.h>
#include <string>
#include "testCurl.h"
extern "C" JNIEXPORT jstring JNICALL
Java_ngoc_dh_curl_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {

    testCurl t = testCurl();

    const char* versionChar = get_curl_version();
    return (*env).NewStringUTF( versionChar);

}