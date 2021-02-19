cmake_minimum_required(VERSION 3.2)
  
  find_package(GTest REQUIRED)
  include_directories({GTEST_INCLUDE_DIRS}
  ../../include)
 
 add_library( 
  game
  src/common/Game.cpp
  src/common/GameObject.cpp)
  
  set(TEST_FILES
  test_GameObject.cpp
  )
  
add_executable(executeTests ${TEST_FILES})
target_link_libraries(executeTests ${GTEST_LIBRARIES} pthread)
