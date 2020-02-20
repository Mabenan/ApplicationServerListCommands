cmake_minimum_required(VERSION 3.5)

set(target "ApplicationServerListCommands")
project(${target} LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

file(GLOB SRC
    "*.cpp"
)
file(GLOB HEADER
    "*.h"
    "*.hpp"
)
add_library(${target} SHARED ${SRC})
find_package(Qt5Core REQUIRED)
find_package(Qt5HttpServer REQUIRED)
find_package(ApplicationServer)
qt5_use_modules(${target} Core HttpServer)

target_include_directories(ApplicationServerListCommands PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}
)    
target_link_libraries(ApplicationServerListCommands ApplicationServerInterface ApplicationServerCore)

install(TARGETS ${target} DESTINATION "${ApplicationServer_DIR}/plugins")
install(FILES ${HEADER} DESTINATION "${ApplicationServer_DIR}/../include")