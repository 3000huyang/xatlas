// This code is in the public domain -- Ignacio Casta�o <castano@gmail.com>
#include <stdio.h>
#include "Debug.h"

/// Shows a message through the message handler.
void NV_CDECL nvDebugPrint(const char *msg, ...)
{
    va_list arg;
    va_start(arg,msg);
    vprintf(msg, arg);
    va_end(arg);
}