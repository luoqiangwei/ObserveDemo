#ifndef __BPF_LOGGING_HEADER__
#define __BPF_LOGGING_HEADER__

#ifndef LOG_TAG
#define LOG_TAG "Observe"
#endif

// Universal log output method, supported by any system.
#include <stdio.h>
#define LogE(format, ...) \
    printf("[%s] [%s] " format "\n", "ERROR", LOG_TAG, ##__VA_ARGS__)
#define LogW(format, ...) \
    printf("[%s] [%s] " format "\n", "WARN", LOG_TAG, ##__VA_ARGS__)
#define LogI(format, ...) \
    printf("[%s] [%s] " format "\n", "INFO", LOG_TAG, ##__VA_ARGS__)
#define LogD(format, ...) \
    if(FS_DEBUG) printf("[CONFIG_FS_DEBUG] [%s] [%s] " format "\n", "DEBUG", LOG_TAG, ##__VA_ARGS__)

#endif // __BPF_LOGGING_HEADER__