#pragma once
#include "InstanceCounter.hpp"
#include <string>
#include <memory>


class Node;

using NodePtr = std::unique_ptr<Node>;

class Node : public InstanceCounter{

    public:

        virtual std::string print() const = 0;
        virtual ~Node() = default;
        
        
        

    private:

        
       
};




