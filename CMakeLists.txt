cmake_minimum_required(VERSION 3.5)

project("ApplicationServerListCommands" LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
add_library(ApplicationServerListCommands SHARED listcommandscommand.cpp listcommandscommand.h)

find_package(Qt5Core REQUIRED)
qt5_use_modules(ApplicationServerListCommands Core)
target_include_directories(ApplicationServerListCommands PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}
)    
target_link_libraries(ApplicationServerListCommands ApplicationServerCore ApplicationServerInterface)