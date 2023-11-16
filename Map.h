#ifndef UNTITLED_MAP_H
#define UNTITLED_MAP_H

#include <vector>
#include<iostream>
#include "Tile.h"
#include "Soil.h"
#include "GoldMine.h"
class Map{
    std::vector<std::vector<Tile*>> m_map;
public:
    Map();
    Tile*getTile(int x,int y);
    void replaceTile(int x,int y,Tile*tile);
    void print();
    ~Map();
private:
    bool isinMap(unsigned int x, unsigned int y);

};

#endif //UNTITLED_MAP_H