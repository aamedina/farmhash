//
//  farmhash.cc
//  farmhash
//
//  Created by Adrian Medina on 4/30/14.
//
//

#include <farmhash.h>

extern "C" {
  size_t Hash(const char* s, size_t len) {
    return util::Hash(s, len);
  }
  uint32_t Hash32(const char* s, size_t len) {
    return util::Hash32(s, len);
  }
  uint32_t Hash32WithSeed(const char* s, size_t len, uint32_t seed) {
    return util::Hash32WithSeed(s, len, seed);
  }
  uint64_t Hash64(const char *str, size_t len) {
    return util::Hash64(str, len);
  }
  uint64_t Hash64WithSeed(const char* s, size_t len, uint64_t seed) {
    return util::Hash64WithSeed(s, len, seed);
  }
  uint64_t Hash64WithSeeds(const char* s, size_t len,
                           uint64_t seed0, uint64_t seed1) {
    return util::Hash64WithSeeds(s, len, seed0, seed1);
  }
  uint32_t Fingerprint32(const char* s, size_t len) {
    return util::Fingerprint32(s, len);
  }
  uint64_t Fingerprint64(const char* s, size_t len) {
    return util::Fingerprint64(s, len);
  }
}

size_t Hash(const char* s, size_t len);
uint32_t Hash32(const char* s, size_t len);
uint32_t Hash32WithSeed(const char* s, size_t len, uint32_t seed);
uint64_t Hash64(const char *str, size_t len);
uint64_t Hash64WithSeed(const char* s, size_t len, uint64_t seed);
uint64_t Hash64WithSeeds(const char* s, size_t len,
                         uint64_t seed0, uint64_t seed1);
uint32_t Fingerprint32(const char* s, size_t len);
uint64_t Fingerprint64(const char* s, size_t len);
