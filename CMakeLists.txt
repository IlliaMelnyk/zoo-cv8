cmake_minimum_required(VERSION 3.26)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp
        Tile.cpp
        Tile.h
        Map.h
        GoldMine.cpp
        GoldMine.h
        Soil.cpp
        Soil.h
        Map.cpp
        Inventory.cpp
        Inventory.h)
