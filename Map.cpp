
#include "Tile.h"
#include "Map.h"
#include "Soil.h"
#include "GoldMine.h"
Map::Map(){
       m_tiles = {
            {new Soil(),      new Soil(),      new GoldMine(10)},
            {new Soil(),      new GoldMine(4), new GoldMine(1)},
            {new GoldMine(3), new Soil(),      new Soil()},
    };
}
    Tile*Map::getTile(int x,int y){
        if(isinMap(x,y)){
            return m_map.at(x)(y);
        }
    void Map::replaceTile(int x,int y,Tile*tile){
            if(isinMap)(x)(y)){
    delete m_map.at(x)(y);
    m_map.at(x)(y)=tile;
}
        }
    }
    void Map::print(){
        std::cout << "---Map---" << std::endl;
        for (std::vector<Tile* > row: m_tiles) {
            for (Tile* tile: row) {
                tile->print();
            }
            std::cout << std::endl;
        }
    }
   Map::~Map(){
for(auto row: m_map){
    for(auto tile: row){
        delete tile;
    }
}
    }
        bool Map::isinMap(unsigned int x, unsigned int y){
            if (x >= m_tiles.size()) {
                std::cerr << "Out of x index" << std::endl;
                return false;
            }
            if (y >= m_tiles.at(0).size()) {
                std::cerr << "Out of y index" << std::endl;
                return false;
            }
            return true;
        }