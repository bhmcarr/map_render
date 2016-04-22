//
//  tile.h
//  Map Test
//
//  Created by Brandon on 4/20/16.
//  Copyright © 2016 Brandon Carr. All rights reserved.
//

#ifndef tile_h
#define tile_h

#include <SFML/Graphics.hpp>
#include <vector>
#include <string>

class Tile {
    
public:
    sf::Texture texture;
    sf::Sprite sprite;
    
    //Constructor
    Tile() {}
    Tile(sf::Texture& texture, sf::Sprite& sprite){
        this->texture = texture;
        this->sprite = sprite;
    }
    
    void draw(sf::RenderWindow& window);
    
};

#endif /* tile_h */
