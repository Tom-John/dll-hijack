#define __WINCRYPT_H__
#define DLL_NAME "cryptsp"
#include "hijack.h"

EXPORT CheckSignatureInFile() NOP_FUNC(1);
EXPORT CryptAcquireContextA() NOP_FUNC(2);
EXPORT CryptAcquireContextW() NOP_FUNC(3);
EXPORT CryptContextAddRef() NOP_FUNC(4);
EXPORT CryptCreateHash() NOP_FUNC(5);
EXPORT CryptDecrypt() NOP_FUNC(6);
EXPORT CryptDeriveKey() NOP_FUNC(7);
EXPORT CryptDestroyHash() NOP_FUNC(8);
EXPORT CryptDestroyKey() NOP_FUNC(9);
EXPORT CryptDuplicateHash() NOP_FUNC(10);
EXPORT CryptDuplicateKey() NOP_FUNC(11);
EXPORT CryptEncrypt() NOP_FUNC(12);
EXPORT CryptEnumProviderTypesA() NOP_FUNC(13);
EXPORT CryptEnumProviderTypesW() NOP_FUNC(14);
EXPORT CryptEnumProvidersA() NOP_FUNC(15);
EXPORT CryptEnumProvidersW() NOP_FUNC(16);
EXPORT CryptExportKey() NOP_FUNC(17);
EXPORT CryptGenKey() NOP_FUNC(18);
EXPORT CryptGenRandom() NOP_FUNC(19);
EXPORT CryptGetDefaultProviderA() NOP_FUNC(20);
EXPORT CryptGetDefaultProviderW() NOP_FUNC(21);
EXPORT CryptGetHashParam() NOP_FUNC(22);
EXPORT CryptGetKeyParam() NOP_FUNC(23);
EXPORT CryptGetProvParam() NOP_FUNC(24);
EXPORT CryptGetUserKey() NOP_FUNC(25);
EXPORT CryptHashData() NOP_FUNC(26);
EXPORT CryptHashSessionKey() NOP_FUNC(27);
EXPORT CryptImportKey() NOP_FUNC(28);
EXPORT CryptReleaseContext() NOP_FUNC(29);
EXPORT CryptSetHashParam() NOP_FUNC(30);
EXPORT CryptSetKeyParam() NOP_FUNC(31);
EXPORT CryptSetProvParam() NOP_FUNC(32);
EXPORT CryptSetProviderA() NOP_FUNC(33);
EXPORT CryptSetProviderExA() NOP_FUNC(34);
EXPORT CryptSetProviderExW() NOP_FUNC(35);
EXPORT CryptSetProviderW() NOP_FUNC(36);
EXPORT CryptSignHashA() NOP_FUNC(37);
EXPORT CryptSignHashW() NOP_FUNC(38);
EXPORT CryptVerifySignatureA() NOP_FUNC(39);
EXPORT CryptVerifySignatureW() NOP_FUNC(40);
EXPORT SystemFunction006() NOP_FUNC(41);
EXPORT SystemFunction007() NOP_FUNC(42);
EXPORT SystemFunction008() NOP_FUNC(43);
EXPORT SystemFunction009() NOP_FUNC(44);
EXPORT SystemFunction010() NOP_FUNC(45);
EXPORT SystemFunction011() NOP_FUNC(46);
EXPORT SystemFunction012() NOP_FUNC(47);
EXPORT SystemFunction013() NOP_FUNC(48);
EXPORT SystemFunction014() NOP_FUNC(49);
EXPORT SystemFunction015() NOP_FUNC(50);
EXPORT SystemFunction016() NOP_FUNC(51);
EXPORT SystemFunction018() NOP_FUNC(52);
EXPORT SystemFunction020() NOP_FUNC(53);
EXPORT SystemFunction021() NOP_FUNC(54);
EXPORT SystemFunction022() NOP_FUNC(55);
EXPORT SystemFunction023() NOP_FUNC(56);
EXPORT SystemFunction024() NOP_FUNC(57);
EXPORT SystemFunction025() NOP_FUNC(58);
EXPORT SystemFunction026() NOP_FUNC(59);
EXPORT SystemFunction027() NOP_FUNC(60);
EXPORT SystemFunction030() NOP_FUNC(61);
EXPORT SystemFunction031() NOP_FUNC(62);
EXPORT SystemFunction032() NOP_FUNC(63);
EXPORT SystemFunction033() NOP_FUNC(64);
EXPORT SystemFunction035() NOP_FUNC(65);
