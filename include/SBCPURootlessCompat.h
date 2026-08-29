#ifndef SBCPU_ROOTLESS_COMPAT_H
#define SBCPU_ROOTLESS_COMPAT_H

#if __has_include_next(<roothide.h>)
#include_next <roothide.h>
#else
#include <rootless.h>

static inline const char *jbroot(const char *path) {
    return ROOT_PATH_VAR(path);
}

static inline const char *rootfs(const char *path) {
    return path;
}
#endif

#endif
