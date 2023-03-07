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
add_executable(HelloBin main.cpp 
                dog.cpp 
                operations.cpp)
target_compile_features(HelloBin PRIVATE cxx_std_20)
target_include_directories(HelloBin PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)