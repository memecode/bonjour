cmake_minimum_required (VERSION 3.18)
project(bonjour)

add_executable(bonjour
    src/bonjour-main.cpp)

target_link_libraries(bonjour
    PUBLIC
        Ws2_32.lib
        Iphlpapi.lib)