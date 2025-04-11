cmake_minimum_required(VERSION 3.10)
project(TKI-141-2SEM)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_EXTENSIONS False)

set(MAIN_SOURCES
    ${CMAKE_SOURCE_DIR}/src/main.cpp
    ${CMAKE_SOURCE_DIR}/src/student.cpp
    ${CMAKE_SOURCE_DIR}/src/department.cpp
    ${CMAKE_SOURCE_DIR}/src/group.cpp
    ${CMAKE_SOURCE_DIR}/src/institute.cpp
    ${CMAKE_SOURCE_DIR}/src/speciality.cpp
)

set(TEST_SOURCES
    ${CMAKE_SOURCE_DIR}/tests/test_student.cpp
    ${CMAKE_SOURCE_DIR}/tests/test_department.cpp
    ${CMAKE_SOURCE_DIR}/tests/test_group.cpp
    ${CMAKE_SOURCE_DIR}/tests/test_institute.cpp
    ${CMAKE_SOURCE_DIR}/tests/test_speciality.cpp
)

foreach(file ${MAIN_SOURCES} ${TEST_SOURCES})
    if(NOT EXISTS ${file})
        message(FATAL_ERROR "File not found: ${file}")
    endif()
endforeach()

add_executable(${PROJECT_NAME} ${MAIN_SOURCES})
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/include)

if(EXISTS ${CMAKE_SOURCE_DIR}/tests)
    enable_testing()
    find_package(GTest REQUIRED)
    
    add_library(core_lib STATIC ${MAIN_SOURCES})
    
    foreach(test ${TEST_SOURCES})
        get_filename_component(test_name ${test} NAME_WE)
        add_executable(${test_name} ${test})
        target_link_libraries(${test_name} PRIVATE core_lib GTest::GTest GTest::Main)
        target_include_directories(${test_name} PRIVATE ${CMAKE_SOURCE_DIR}/include)
        add_test(NAME ${test_name} COMMAND ${test_name})
    endforeach()
endif()
