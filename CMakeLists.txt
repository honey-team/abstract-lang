cmake_minimum_required(VERSION 3.1)
project(abstract)

set(ABSTR_SRC src/main.c src/abstract/core/lexer.c)

set(CMAKE_C_STANDARD 11)

add_executable(${CMAKE_PROJECT_NAME} ${ABSTR_SRC})

target_include_directories(${CMAKE_PROJECT_NAME} PUBLIC src/abstract)
set_target_properties(${CMAKE_PROJECT_NAME} PROPERTIES LINKER_LANGUAGE C)
