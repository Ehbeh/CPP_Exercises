#include "Pokeball.h"
#include <memory>




Pokeball::Pokeball(){
    }

bool Pokeball::empty() const{
    return _pokeball == nullptr;
}

void Pokeball::store(PokemonPtr pokemon){
    _pokeball = std::move(pokemon);
}

const Pokemon &Pokeball::pokemon(){
    return *_pokeball;
}

