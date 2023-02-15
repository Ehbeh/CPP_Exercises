#include "PC.h"

PC::PC(){
    
};

void PC::transfer(PokemonPtr pokemon){
    _pokemons.emplace_back(std::move(pokemon));
}
