cmake_minimum_required(VERSION 3.5)
if(NOT CMAKE_PROJECT_NAME)
project(${target} LANGUAGES CXX)
endif()
set(target "ApplicationServerListCommands")

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
if(${PACKAGE})
find_package(ApplicationServer)
endif()
qt5_use_modules(${target} Core HttpServer)

target_include_directories(ApplicationServerListCommands PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}
)    
target_link_libraries(ApplicationServerListCommands ApplicationServerInterface ApplicationServerCore)

install(TARGETS ${target} DESTINATION ${PLUGIN_FOLDER})
install(FILES ${HEADER} DESTINATION ${INCLUDE_FOLDER})