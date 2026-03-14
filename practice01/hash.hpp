#pragma once

#include <cstdint>
#include <string_view>

#ifndef __has_include
    #error "Компилятор не поддерживает __has_include"
#endif

#if __has_include("fash_hash.hpp")
    #define USE_FAST_HASH
    #include "fash_hash.hpp"
#endif

std::uint32_t hash32(std::string_view s);