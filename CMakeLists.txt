cmake_minimum_required(VERSION 3.1)
#if(NOT CMAKE_BUILD_TYPE)
# set(CMAKE_BUILD_TYPE Release)
#endif()

project(CXXtest CXX C)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD 99)
# set(CMAKE_C_COMPILER /usr/bin/gcc)
#e set(CMAKE_CXX_COMPILER  /usr/bin/g++)
set(CMAKE_C_FLAGS "-Wall -pthread -pedantic")
set(CMAKE_CXX_FLAGS "-Wall -pedantic -pthread")
set(CMAKE_CXX_FLAGS_DEBUG "-g")
set(CMAKE_CXX_FLAGS_RELEASE "-O4")
set(CMAKE_C_FLAGS_DEBUG "-g")
set(CMAKE_C_FLAGS_RELEASE "-O4")
add_executable(CXXtest main.cpp test/main_test.cpp)
include_directories(third_party/spdlog/include)
add_subdirectory(test)
## Google Testの不要なキャッシュ変数をオフにしておく
option(BUILD_GMOCK "Builds the googlemock subprojects" OFF)
option(INSTALL_GTEST "Enables installation of googletest" OFF)
#
## 親プロジェクトのコンパイラ・リンカ設定を上書きするのを防ぐ（Windowsのみ）
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
#
## Google Testをこのプロジェクトに組み込む
#add_subdirectory(test/googletest)
#
## my_awesome_lib_test
#add_executable(GRIB2_decoder_test
#        test/Utilities_test.cpp
#        )
#target_link_libraries(GRIB2_decoder_test
#        PRIVATE
#        # Google Testをリンクする
#        gtest_main
#        )
