cmake_minimum_required(VERSION 3.2)
project(KingGame)
find_package(GTest REQUIRED)
include_directories(
  ${GTEST_INCLUDE_DIRS}
  ${KingGame_SOURCE_DIR}/include
  )
 
  add_library( 
  game
  src/common/Game.cpp
  src/common/GameObject.cpp)
   
  
  set(TEST_FILES
  src/test/test_GameObject.cpp
  )
  
   
add_executable("${PROJECT_NAME}"
src/main.cpp)
#install(TARGETS ${PROJECT_NAME} DESTINATION bin)

target_link_libraries(${PROJECT_NAME} game)
 
  
add_executable(executeTests ${TEST_FILES})
target_link_libraries(executeTests ${GTEST_LIBRARIES} pthread)

#add_executable(tests ${TEST_FILES})
#target_link_libraries(tests game)
