#pragma once
#include "Leaf.hpp"
#include <string>
#include "NodeKind.hpp"
#include <memory>

class IntLeaf : public Leaf{

    public:
        IntLeaf(int data)
            :_data{data}
            {

            }

        ~IntLeaf() override{} 

        NodeKind kind() const{
            return NodeKind::INT;
        }

        std::string print() const override{
            return std::to_string(_data);
        }

        int data() const{
            return _data;
        }

        static std::unique_ptr<IntLeaf> make_ptr(int data) {
            return std::make_unique<IntLeaf>(data);
        }


    private:
        int _data;
};