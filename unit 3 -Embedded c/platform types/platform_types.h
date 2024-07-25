//mohamed maher

#ifndef PLATFORM_TYPES_H_INCLUDED
    #define PLATFORM_TYPES_H_INCLUDED
#include <stdbool.h>
#include <stdint.h>

#ifndef _Bool
#define _Bool unsigned char
#endif // _Bool

//types:

typedef unsigned char       boolean;

typedef signed char         sint8;
typedef unsigned char       uint8;
typedef signed short        sint16;
typedef unsigned short      uint16;
typedef signed long         sint32;
typedef unsigned long       uint32;

typedef float               float32;
typedef double              float64;

typedef volatile sint8      vint8;
typedef volatile uint8      vuint8;

typedef volatile sint16     vsint16;
typedef volatile uint16     vuint16;

typedef volatile sint32     vsint32;
typedef volatile uint32     vuint32;

typedef volatile float32    vfloat32;
typedef volatile float64    vfloat64;


//mohamed maher
#endif // PLATFORM_TYPES_H_INCLUDED
