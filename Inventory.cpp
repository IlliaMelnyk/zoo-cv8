//
// Created by xmelnyk on 16.11.2023.
//

#include "Inventory.h"

Inventory::Inventory(int gold,int wheat){
    m_gold=gold;
    m_wheat=wheat;
}
void Inventory::addGold(int amount){
    if(amount<0){
        std::cerr<<"Error";
        return;
    }
    m_gold+=amount;
}
void Inventory::addWheat(int amount){
    if(amount<0){
        std::cerr<<"Error";
        return;
    }
    m_wheat+=amount;
}
void Inventory::print(){
    std::cout<<"----Inventory-----"<<std::endl
    <<"Gold: "<<m_gold
    <<" Wheat: "<<m_wheat<<std::endl;

}