//
//  tile.cpp
//  Map Test
//
//  Created by Brandon on 4/21/16.
//  Copyright © 2016 Brandon Carr. All rights reserved.
//

#include "tile.h"

void Tile::draw(sf::RenderWindow& window){
    window.draw(this->sprite);
    
    return;
}