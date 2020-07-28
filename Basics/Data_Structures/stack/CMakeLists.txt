cmake_minimum_required(VERSION 2.6)

message(STATUS ${CMAKE_SOURCE_DIR})

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set(SRC "${CMAKE_SOURCE_DIR}/src/")
set(UTEST "${CMAKE_SOURCE_DIR}/test/")

project(Stack_Using_Linkedlist)

add_executable(Stack_Using_Linkedlist "${SRC}StackUsingLinkedList.cpp")
add_executable(Stack_Using_LinkedList_Test "${UTEST}StackUsingLinkedList_test.cpp")

find_package(GTest REQUIRED)

target_include_directories(Stack_Using_LinkedList_Test PUBLIC
        ${GTEST_INCLUDE_DIRS}
        ${SRC}
    )

target_link_libraries(Stack_Using_LinkedList_Test PUBLIC
    ${GTEST_BOTH_LIBRARIES}
    ${CMAKE_THREAD_LIBS_INIT}
)

target_compile_options(Stack_Using_LinkedList_Test PUBLIC "-pthread")

include(CPack)