//
// Created by xmelnyk on 16.11.2023.
//

#include "Tile.h"
Tile:: Tile {
std::string m_appearence;
}
protected:
Tile::Tile()= default;

public:
    virtual void Tile::mineMaterials(Inventory* target)=0{

    }
    virtual void Tile::print()=0{

    }
    virtual Tile::~Tile()=default{

    }
