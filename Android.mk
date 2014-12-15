LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE_TAGS := optional

LOCAL_MODULE := bma-util

LOCAL_SRC_FILES += \
	i2c-util.c \
	bma2x2.c   \
	bma2x2.h   \
	i2c-util.h \
	main.c \

include $(BUILD_EXECUTABLE)
