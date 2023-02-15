#pragma once
#include<vector>
#include"Pokemon.h"
#include"Pokeball.h"
#include<memory>

// A PC is the place where Pokemons get automagically sent when the trainer's pockets are full.
// When a Pokemon is transferred to the PC, this one takes ownership.
class PC
{
    public:
         PC();
         std::vector<PokemonPtr> pokemons(){
            return _pokemons;
         }

         void transfer(PokemonPtr pokemon);


    private:
        std::vector<PokemonPtr> _pokemons;
};
