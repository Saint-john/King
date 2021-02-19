cmake_minimum_required(VERSION 3.2)
project(KingGame)

include_directories(
  ${KingGame_SOURCE_DIR}/include
  )
 
  add_library( 
  game
  src/common/Game.cpp
  src/common/GameObject.cpp)
  
   
add_executable("${PROJECT_NAME}"
src/main.cpp)
#install(TARGETS ${PROJECT_NAME} DESTINATION bin)

target_link_libraries(${PROJECT_NAME} game)

#add_executable(tests ${TEST_FILES})
#target_link_libraries(tests game)
