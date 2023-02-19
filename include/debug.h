#ifndef __DEBUG_H__
#define __DEBUG_H__

#include <stdio.h>
#include <string.h>
#include <errno.h>

#ifdef NDEBUG
#define debug(M, ...)
#else
#define debug(M, ...) fprintf(stderr, "[DEBUG] %s:%d: " M "\n",\
        __FILE__, __LINE__, ##__VA__ARGS__);
#endif // NDEBUG

#define clean_errno() (errno == 0 ? "None" : strerror(errno))

#endif // !__DEBUG_H__
