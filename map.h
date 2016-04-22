//
//  map.hpp
//  Map Test
//
//  Created by Brandon on 4/21/16.
//  Copyright © 2016 Brandon Carr. All rights reserved.
//

#ifndef map_hpp
#define map_hpp

#include <SFML/Graphics.hpp>
#include <vector>
#include "tile.h"

class Map {
    
public:
    uint width;
    uint height;
    std::string filename;
    std::vector<Tile> tiles;
    
    //Constructor
    Map() {}
    Map(int width, int height){
        this->width = width;
        this->height = height;
        this->filename = filename;
        
        load(width,height,filename,this->tiles);
    }
    
    void load(uint width, uint height, std::string filename, std::vector<Tile>& tiles);
};

#endif /* map_hpp */
