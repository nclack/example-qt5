cmake_minimum_required(VERSION 3.0)
project(example)

include(cmake/ide.cmake)
include(cmake/platform.cmake)

#
# Qt5 Packages
# These are documented in CMake's documentation [1].
# Qt also has a little bit of documentation on their site.
# 
# find_package works in mysterious ways.  Just make sure
# qmake is on your path and all should be well.
find_package(Qt5Widgets REQUIRED)

add_executable(example src/example.cpp)
target_link_libraries(example Qt5::Widgets)


# REFERENCES
# [1]: http://www.cmake.org/cmake/help/v3.2/manual/cmake-qt.7.html?highlight=qt5widgets