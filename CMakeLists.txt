cmake_minimum_required(VERSION 3.3)
PROJECT(cppTest)

SET(${PROJECT_NAME}_INCLUDE_DIR ${CMAKE_CURRENT_LIST_DIR}/src)

include(Deps/cppunit/CMakeLists.txt)
add_subdirectory(src)
add_subdirectory(test)