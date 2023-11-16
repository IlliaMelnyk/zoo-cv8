//
// Created by xmelnyk on 16.11.2023.
//

#ifndef UNTITLED_TILE_H
#define UNTITLED_TILE_H
#include <iostream>
#include "Inventory.h"

class Tile {
std::string m_appearence;
protected:
    Tile()= default;
public:
    virtual void mineMaterials(Inventory* target)=0;
    virtual void print()=0;
    virtual ~Tile()=default;
};


#endif //UNTITLED_TILE_H
