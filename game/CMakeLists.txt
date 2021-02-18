cmake_minimum_required(VERSION 3.2)
project(helloworld)

include_directories(
  ${helloworld_SOURCE_DIR}/include
  )
 
  add_library( 
  game
  src/common/Game.cpp
  src/common/GameObject.cpp)
   
  
  set(TEST_FILES
  src/test/test_GameObject.cpp
  )
  
   
add_executable(helloworld
src/main.cpp)


target_link_libraries(helloworld game)

//add_executable(tests ${TEST_FILES})
//target_link_libraries(tests game)
