//
// Created by Ngoc on 1/9/2024.
//

#include "testCurl.h"




const char* get_curl_version() {
    curl_version_info_data* data = curl_version_info(CURLVERSION_NOW);
    return data->version;
}

testCurl::testCurl() {
    CURL *curl;
    CURLcode res;
    std::string readBuffer;

    curl = curl_easy_init();
    if(curl) {
        curl_easy_setopt(curl, CURLOPT_URL, "http://www.google.com");
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);

        LOGE("%s",readBuffer.c_str());
    }

}
