# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "D:/grimoire_lang/src/antlr4_runtime/src/antlr4_runtime"
  "D:/grimoire_lang/src/antlr4_runtime/src/antlr4_runtime-build"
  "D:/grimoire_lang/src/antlr4_runtime"
  "D:/grimoire_lang/src/antlr4_runtime/tmp"
  "D:/grimoire_lang/src/antlr4_runtime/src/antlr4_runtime-stamp"
  "D:/grimoire_lang/src"
  "D:/grimoire_lang/src/antlr4_runtime/src/antlr4_runtime-stamp"
)

set(configSubDirs Debug;Release;MinSizeRel;RelWithDebInfo)
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "D:/grimoire_lang/src/antlr4_runtime/src/antlr4_runtime-stamp/${subDir}")
endforeach()
