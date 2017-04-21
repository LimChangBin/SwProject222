#if(defined(_WIN32) || defined(_WIN64))
#define SR_WIN 1
#else
#define SR_WIN 0
#endif

#if(!SR_WIN)
#define SR_ANDROID 1
#else
#define SR_ANDROID 0
#endif

#if(SR_ANDROID)
#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_engineering_we_swproject_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
#elif (SR_WIN)

#endif