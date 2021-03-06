
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_key_dh_RFC2631__
#define __gnu_javax_crypto_key_dh_RFC2631__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace security
      {
        namespace hash
        {
            class Sha160;
        }
        namespace util
        {
            class PRNG;
        }
      }
    }
    namespace javax
    {
      namespace crypto
      {
        namespace key
        {
          namespace dh
          {
              class RFC2631;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace math
    {
        class BigInteger;
    }
    namespace security
    {
        class SecureRandom;
    }
  }
}

class gnu::javax::crypto::key::dh::RFC2631 : public ::java::lang::Object
{

public:
  RFC2631(jint, jint, ::java::security::SecureRandom *);
  virtual JArray< ::java::math::BigInteger * > * generateParameters();
private:
  void nextRandomBytes(JArray< jbyte > *);
  ::gnu::java::security::util::PRNG * getDefaultPRNG();
public:
  static const jint DH_PARAMS_SEED = 0;
  static const jint DH_PARAMS_COUNTER = 1;
  static const jint DH_PARAMS_Q = 2;
  static const jint DH_PARAMS_P = 3;
  static const jint DH_PARAMS_J = 4;
  static const jint DH_PARAMS_G = 5;
private:
  static ::java::math::BigInteger * TWO;
  ::gnu::java::security::hash::Sha160 * __attribute__((aligned(__alignof__( ::java::lang::Object)))) sha;
  jint m;
  jint L;
  ::java::security::SecureRandom * rnd;
  ::gnu::java::security::util::PRNG * prng;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_crypto_key_dh_RFC2631__
