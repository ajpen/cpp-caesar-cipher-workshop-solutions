cmake_minimum_required(VERSION 3.14)
project(cpp_caesar_cipher_workshop)

set(CMAKE_CXX_STANDARD 14)

add_executable(section1_challenge1
        section_1/challenge1_alpha_index/main.cpp
        section_1/challenge1_alpha_index/alphabet.cpp
        section_1/challenge1_alpha_index/tester.h
        section_1/challenge1_alpha_index/alphabet.h)

add_executable(section1_challenge2
        section_1/challenge2_caesar_encoding/main.cpp
        section_1/challenge2_caesar_encoding/alphabet.cpp
        section_1/challenge2_caesar_encoding/tester.h
        section_1/challenge2_caesar_encoding/caesar.h
        section_1/challenge2_caesar_encoding/caesar.cpp
        section_1/challenge2_caesar_encoding/alphabet.h)

add_executable(section2_challenge1
        section_2/challenge_cipher_char_array/main.cpp
        section_2/challenge_cipher_char_array/alphabet.cpp
        section_2/challenge_cipher_char_array/tester.h
        section_2/challenge_cipher_char_array/caesar.h
        section_2/challenge_cipher_char_array/caesar.cpp
        section_2/challenge_cipher_char_array/alphabet.h)


add_executable(section3_challenge1
        section_3/challenge_method/main.cpp
        section_3/challenge_method/alphabet.cpp
        section_3/challenge_method/tester.h
        section_3/challenge_method/caesar.h
        section_3/challenge_method/caesar.cpp
        section_3/challenge_method/alphabet.h
        section_3/challenge_method/encrypt.cpp
        section_3/challenge_method/encrypt.h)