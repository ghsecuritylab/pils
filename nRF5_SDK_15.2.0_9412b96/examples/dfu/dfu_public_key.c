
/* This file was automatically generated by nrfutil on 2018-09-08 (YY-MM-DD) at 06:07:33 */

#include "sdk_config.h"
#include "stdint.h"
#include "compiler_abstraction.h"

#if NRF_CRYPTO_BACKEND_OBERON_ENABLED
/* Oberon backend is changing endianness thus public key must be kept in RAM. */
#define _PK_CONST
#else
#define _PK_CONST const
#endif


/* This file was generated with a throwaway private key, that is only inteded for a debug version of the DFU project.
  Please see https://github.com/NordicSemiconductor/pc-nrfutil/blob/master/README.md to generate a valid public key. */

#ifdef NRF_DFU_DEBUG_VERSION 

/** @brief Public key used to verify DFU images */
__ALIGN(4) _PK_CONST uint8_t pk[64] =
{
    0x40, 0xe5, 0x14, 0xb4, 0x6d, 0xb9, 0x83, 0xc7, 0x1c, 0x33, 0x92, 0x17, 0x35, 0x11, 0xe2, 0x00, 0x8b, 0x52, 0x24, 0xbd, 0xbb, 0x6b, 0x6a, 0xe8, 0x68, 0x1a, 0x32, 0xfb, 0x77, 0x15, 0xe1, 0xe1, 
    0xd9, 0xbc, 0x43, 0xbb, 0x55, 0x6f, 0xf6, 0x9e, 0x3d, 0x04, 0x49, 0x5b, 0xbc, 0x47, 0xa3, 0x69, 0x68, 0x24, 0x15, 0x4b, 0x5e, 0x9c, 0x9d, 0x6b, 0xf4, 0x4e, 0x62, 0x59, 0xd7, 0x24, 0xc4, 0x71
};

#else
#error "Debug public key not valid for production. Please see https://github.com/NordicSemiconductor/pc-nrfutil/blob/master/README.md to generate it"
#endif
