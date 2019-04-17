#ifndef GRANDPARENT_H
#define GRANDPARENT_H
#include <assert.h>
#include <stddef.h>
#include <stdint.h>
#endif

size_t encode_varint(uint32_t value, uint8_t* buf);
uint32_t decode_varint(const uint8_t** bufp
