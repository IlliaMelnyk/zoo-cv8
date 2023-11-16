//
// Created by xmelnyk on 16.11.2023.
//

#ifndef UNTITLED_INVENTORY_H
#define UNTITLED_INVENTORY_H
#include <iostream>

class Inventory {
private:
   int m_gold;
    int m_wheat;
public:
    Inventory(int gold,int wheat);
    void addGold(int amount);
    void addWheat(int amount);
    void print();
};


#endif //UNTITLED_INVENTORY_H
