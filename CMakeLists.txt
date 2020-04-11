cmake_minimum_required(3.4)
project(leetcode)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug CHCHE STRING "Choose the type of build" FORCE)
endif()

if(NOT DEFINED CMAKE_INSTALL_PREFIX)
    set(CMAKE_INSTALL_PREFIX "${CMAKE_BINARY_DIR}/install" CACHE PATH "Installation Directory")
endif()


# add_subdirectory(examples)
add_subdirectory()

