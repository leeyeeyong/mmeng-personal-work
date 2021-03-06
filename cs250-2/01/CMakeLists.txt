cmake_minimum_required(VERSION 2.6)
project(CS250 CXX)

if (MSVC)
    message(STATUS "Using MSVC settings.")
    
    set(CMAKE_CXX_FLAGS "/EHsc /W4")
else ()
    message(STATUS "Using gcc settings.")

    set(CMAKE_C_FLAGS "-Wextra -Wall -std=c99 -pedantic")
    set(CMAKE_C_FLAGS_DEBUG "-g")
    set(CMAKE_C_FLAGS_RELEASE "-O2")

    set(CMAKE_CXX_FLAGS "-Wextra -Wall -std=c++0x -pedantic -pipe -m32")
    set(CMAKE_CXX_FLAGS_DEBUG "-g")
    set(CMAKE_CXX_FLAGS_RELEASE "-O2")
    set(CMAKE_CXX_LINK_FLAGS "-mwindows")
endif ()

set(LIBRARIES gdiplus winmm)

set(HEADERS cs250vector.h assignment.hpp)
set(SOURCES driver.cpp cs250vector.cpp assignment.cpp)

add_executable(driver WIN32 ${SOURCES} ${HEADERS})
target_link_libraries(driver ${LIBRARIES})
set_target_properties(driver PROPERTIES CLEAN_DIRECT_OUTPUT 1)

