#ifndef _SS_UTIL_H_
#define _SS_UTIL_H_

struct str
{
    int len;
    char *s;
};

typedef struct str str;

uint32_t ss_crc32(const void *buf, size_t size);

#endif