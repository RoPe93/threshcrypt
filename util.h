/* threshcrypt util.h
 * Copyright 2012 Ryan Castellucci <code@ryanc.org>
 * This software is published under the terms of the Simplified BSD License.
 * Please see the 'COPYING' file for details.
 */

#ifndef THRESCRYPT_UTIL_H_
#define THRESCRYPT_UTIL_H_

void * safe_malloc(size_t);

#define safe_free(ptr) _safe_free((void **) &ptr, __FILE__, __LINE__)
void _safe_free(void **, const char *, int);

#define wipe_free(ptr, size) _wipe_free((void **) &ptr, size, __FILE__, __LINE__)
void _wipe_free(void **, size_t, const char *, int);

void memxor(unsigned char *, const unsigned char *, size_t);

void fill_rand(unsigned char *, unsigned int);
void fill_prng(unsigned char *, unsigned int);

void free_header(header_data_t *);

/* vim: set ts=2 sw=2 et ai si: */
#endif /* THRESCRYPT_UTIL_H_ */