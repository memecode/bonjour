cmake_minimum_required (VERSION 3.18)
project(bonjour)

add_executable(bonjour
    src/bonjour-main.cpp)

if (WIN32)
    target_link_libraries(bonjour
        PUBLIC
            Ws2_32.lib
            Iphlpapi.lib)
elseif (HAIKU)
    target_link_libraries(bonjour
        PUBLIC
            network)
endif()

install(TARGETS bonjour)
