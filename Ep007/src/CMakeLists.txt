cmake_minimum_required(VERSION 3.5)
project(HelloApp
        VERSION 0.0.1
        DESCRIPTION "The leading Hello World App"
        LANGUAGES CXX)
#List your sources

#TARGET
#alternate way (not recommended?)
        # file(GLOB_RECURSE SRC_FILES src/*.cpp)
        # add_executable(HelloBin main.cpp ${SRC_FILES})
#Target Library for Operations
add_library(operations STATIC operations.cpp)
target_include_directories(operations PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_compile_features(operations PUBLIC cxx_std_20)
#Target Library for Logger
add_library(logger STATIC log.cpp)
target_include_directories(logger PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_compile_features(logger PUBLIC cxx_std_20)
#Target Main
add_executable(HelloBin main.cpp 
                dog.cpp) 
target_include_directories(HelloBin PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_compile_features(HelloBin PUBLIC cxx_std_20)
target_link_libraries(HelloBin PUBLIC operations logger)