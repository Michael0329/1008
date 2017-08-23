cmake_minimum_required (VERSION 2.6)
project (1008)

add_definitions(-std=c++11)

find_package(sdl2 REQUIRED)

include_directories(
  include/
  ${SDL2_INCLUDE_DIRS}
)

add_executable(1008
    src/main.cpp
    src/Game.h
    src/Game.cpp
    messagebus/Message.h
    messagebus/Message.cpp
    messagebus/MessageBus.h
    messagebus/MessageBus.cpp
    )
target_link_libraries(1008 SDL2 SDL2_image SDL2_mixer SDL2_ttf)
