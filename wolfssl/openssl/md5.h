/* md5.h
 *
 * Copyright (C) 2006-2021 wolfSSL Inc.
 *
 * This file is part of wolfSSL.
 *
 * wolfSSL is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * wolfSSL is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1335, USA
 */

/* md5.h for openssl */


#ifndef WOLFSSL_MD5_H_
#define WOLFSSL_MD5_H_

#include <wolfssl/wolfcrypt/settings.h>

#ifndef NO_MD5

#include <wolfssl/wolfcrypt/hash.h>

#ifdef WOLFSSL_PREFIX
#include "prefix_md5.h"
#endif

#ifdef __cplusplus
    extern "C" {
#endif


typedef struct WOLFSSL_MD5_CTX {
    /* big enough to hold wolfcrypt md5, but check on init */
#ifdef STM32_HASH
    void* holder[(112 + WC_ASYNC_DEV_SIZE + sizeof(STM32_HASH_Context)) / sizeof(void*)];
#else
    void* holder[(112 + WC_ASYNC_DEV_SIZE) / sizeof(void*)];
#endif
} WOLFSSL_MD5_CTX;

WOLFSSL_API int wolfSSL_MD5_Init(WOLFSSL_MD5_CTX*);
WOLFSSL_API int wolfSSL_MD5_Update(WOLFSSL_MD5_CTX*, const void*, unsigned long);
WOLFSSL_API int wolfSSL_MD5_Final(unsigned char*, WOLFSSL_MD5_CTX*);
WOLFSSL_API int wolfSSL_MD5_Transform(WOLFSSL_MD5_CTX*, const unsigned char*);

WOLFSSL_API unsigned char *wolfSSL_MD5(const unsigned char*, size_t, unsigned char*);

typedef WOLFSSL_MD5_CTX MD5_CTX;

#define MD5_Init wolfSSL_MD5_Init
#define MD5_Update wolfSSL_MD5_Update
#define MD5_Final wolfSSL_MD5_Final
#define MD5_Transform wolfSSL_MD5_Transform

#ifdef OPENSSL_EXTRA_BSD
    #define MD5Init wolfSSL_MD5_Init
    #define MD5Update wolfSSL_MD5_Update
    #define MD5Final wolfSSL_MD5_Final
#endif

#if (!defined(HAVE_FIPS) || \
        (defined(HAVE_FIPS_VERSION) && HAVE_FIPS_VERSION > 2)) && \
         defined(OPENSSL_EXTRA)
/* For fips v1 defined in wolfssl/wolfcrypt/md5.h as
 * WC_MD5 for compatibility */
#define MD5               wolfSSL_MD5
#endif

#define MD5_DIGEST_LENGTH MD5_DIGEST_SIZE

#ifdef __cplusplus
    }  /* extern "C" */
#endif

#endif /* NO_MD5 */

#endif /* WOLFSSL_MD5_H_ */
