#pragma once
#include "Pokemon.h"

// A ball where a Pokemon sleeps.
class Pokeball
{
    public:
        Pokeball();
        bool empty() const;
        void store(PokemonPtr pokemon);
        const Pokemon &pokemon();

    private:
        PokemonPtr _pokeball;
};
