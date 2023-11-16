//
// Created by xmelnyk on 16.11.2023.
//

#include "GoldMine.h"
GoldMine::GoldMine(int gold) {
    if(gold<0){
        std::cerr<<"Error";
        return;
        }
        m_gold = gold;
}
    void GoldMine::mineMaterials(Inventory* target){
        if(m_gold>0){
            target->addGold(1);
            m_gold--;
        }else{
            std::cerr<<"Error";
        }
    }
    void GoldMine::print(){
        std::cout<<m_gold<<std::endl;
    }

