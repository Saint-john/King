cmake_minimum_required(VERSION 3.2)
project(helloworld)
include_directories(
  ${KingGame_SOURCE_DIR}/include
  )
  
  find_package(GTest REQUIRED)
  include_directories({GTEST_INCLUDE_DIRS})
 include_directories(
  ${helloworld_SOURCE_DIR}/include
  )
  set(TEST_FILES
  test_GameObject.cpp
  )
  
add_executable(executeTests ${TEST_FILES})
target_link_libraries(executeTests ${GTEST_LIBRARIES} pthread)
