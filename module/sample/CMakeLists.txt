cmake_minimum_required(VERSION 3.12)
project(sample VERSION 1.0.0 LANGUAGES C CXX)

set (CMAKE_CXX_STANDARD 14 CACHE STRING
     "C++ standard to build all targets. Supported values are 98, 11, and 14.")

set(SYSC_ROOT
  /home/jpsix/sysc_env/lib/systemc-2.3.3/built)

set(SYSC_LIB_DIR
  ${SYSC_ROOT}/lib-linux64)

set(MODULE_INC_DIR
  ./include)

set(BASE_INC_DIR
  ../include)

set(UT_INC_DIR
  ./ut/include)

file(GLOB_RECURSE ALL_SRC
  src/*.cc ut/*.cc)

include_directories(${SYSC_ROOT}/include)
include_directories(${MODULE_INC_DIR})
include_directories(${BASE_INC_DIR})
include_directories(${UT_INC_DIR})
link_directories(${SYSC_LIB_DIR})
add_executable(${PROJECT_NAME} ${ALL_SRC})
target_link_libraries(${PROJECT_NAME} systemc)
