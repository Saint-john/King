cmake_minimum_required(VERSION 3.2)
project(KingGame)

include_directories(
  ${KingGame_SOURCE_DIR}/include
  )
 
  add_library( 
  test
  ../common/Game.cpp
  ../common/GameObject.cpp)
   
  
  set(TEST_FILES
  test_GameObject.cpp
  )
  
enable_testing()
add_executable(tests ${TEST_FILES})
target_link_libraries(tests test)
