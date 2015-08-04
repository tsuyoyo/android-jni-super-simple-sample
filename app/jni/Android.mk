LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := HelloJni

LOCAL_SRC_FILES := com_tsuyogoro_nativetest_NativeManger.cpp

LOCAL_LDLIBS := -llog

include $(BUILD_SHARED_LIBRARY)
