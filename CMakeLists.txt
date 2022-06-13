cmake_minimum_required(VERSION 3.5.1)
project(grimoire_lang)

set(CMAKE_CXX_STANDARD 17)

set(ANTLR4_WITH_STATIC_CRT OFF)

set(CMAKE_BUILD_TYPE Release)

set(DLLVM_TARGETS_TO_BUILD "AArch64;AMDGPU;ARM;AVR;BPF;Hexagon;Lanai;Mips;MSP430;PowerPC;RISCV;Sparc;SystemZ;VE;WebAssembly;X86")

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

find_package(LLVM REQUIRED CONFIG)

message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

# Set your project compile flags.
# E.g. if using the C++ header files
# you will need to enable C++11 support
# for your compiler.

include_directories(${LLVM_INCLUDE_DIRS})
separate_arguments(LLVM_DEFINITIONS_LIST NATIVE_COMMAND ${LLVM_DEFINITIONS})
add_definitions(${LLVM_DEFINITIONS_LIST})

# Find the libraries that correspond to the LLVM components
# that we wish to use
llvm_map_components_to_libnames(llvm_libs support core irreader target)

foreach(t ${LLVM_TARGETS_TO_BUILD})
  list(APPEND targets "LLVM${t}CodeGen")
#   list(APPEND targets "LLVM${t}AsmParser")
endforeach()

foreach(t ${DLLVM_TARGETS_TO_BUILD})
#   list(APPEND targets "LLVM${t}CodeGen")
  list(APPEND targets "LLVM${t}AsmParser")
endforeach()

include_directories(src)
include_directories(src/antlr-generated)
include_directories(antlr4-runtime/runtime/src)
include_directories("C:/Program Files (x86)/LLVM/include")
include(ExternalAntlr4Cpp)
include_directories(${ANTLR4_INCLUDE_DIRS})



# find_package(ANTLR REQUIRED)

link_directories("C:/Program Files (x86)/LLVM/lib")
add_definitions(-DANTLR4CPP_STATIC)

add_executable(grimoire src/main.cpp
        src/antlr-generated/grimoireLexer.cpp
        src/antlr-generated/grimoireParser.cpp
        src/grimoire/compiler.cpp
        src/grimoire/symtab.cpp
        src/grimoire/declaration.cpp
        src/grimoire/parser.cpp
        src/grimoire/generator.cpp )
        # src/grimoire/grimoirejit.h

target_link_libraries(grimoire  antlr4_static ${llvm_libs} ${targets})
# add_custom_command(TARGET grimoire
#                    POST_BUILD
#                    COMMAND ${CMAKE_COMMAND}
#                            -E copy ${ANTLR4_RUNTIME_LIBRARIES} .
#                    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})