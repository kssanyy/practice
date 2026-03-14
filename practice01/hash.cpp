#include "hash.hpp"

#ifdef USE_FASH_HASH
    std::uint32_t hash32(std::string_view s) {
        return fash_hash32(s);
    }
#else
    std::uint32_t hash32(std::string_view s) {
        std::uint32_t hash = 0;
        for (char c : s) {
            hash = hash * 31 + static_cast<unsigned char>(c);
        }
        return hash;
    }
#endif