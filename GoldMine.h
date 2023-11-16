//
// Created by xmelnyk on 16.11.2023.
//

#ifndef UNTITLED_GOLDMINE_H
#define UNTITLED_GOLDMINE_H
#include "Inventory.h"
#include "Tile.h"
#include <iostream>

class GoldMine:public Tile {
private:
    int m_gold;
public:
    GoldMine(int gold);
    void mineMaterials(Inventory* target);
    void print();
};



#endif //UNTITLED_GOLDMINE_H
