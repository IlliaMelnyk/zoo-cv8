//
// Created by xmelnyk on 16.11.2023.
//

#ifndef UNTITLED_SOIL_H
#define UNTITLED_SOIL_H
#include "Tile.h"

class Soil :public Tile{
public:
Soil()=default;
void mine(Inventory *inventory) override;
void print() override;
};


#endif //UNTITLED_SOIL_H
