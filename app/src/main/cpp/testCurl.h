//
// Created by Ngoc on 1/9/2024.
//

#ifndef MY_APPLICATION_TESTCURL_H
#define MY_APPLICATION_TESTCURL_H
#include "curl.h"
#include <iostream>
#include <string>
#include <android/log.h>
#ifndef LOGE
#define LOGE(...) \
  __android_log_print(ANDROID_LOG_ERROR, "hello_ar_example_c", __VA_ARGS__)
#endif  // LOGE

#ifdef __ANDROID__
extern char *CA_BUNDLE_PATH;
#endif
static size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp)
{
    ((std::string*)userp)->append((char*)contents, size * nmemb);
    return size * nmemb;
}
const char* get_curl_version();
class testCurl {
public:
    testCurl();

};


#endif //MY_APPLICATION_TESTCURL_H
