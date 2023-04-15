#pragma once
#include "Leaf.hpp"
#include "NodeKind.hpp"
#include <string>
#include <vector>


class ArrayNode : public Node{

    public:
        
        ~ArrayNode() override{}

        NodeKind kind() const{
            return NodeKind::ARRAY;
        }

        std::string print() const override{
            std::string str = "[";
            for(auto &elem : _array){
                str.append(elem->print()).append(",");
            }
            if(str.length() > 1){
                str.erase(str.length() - 1);
            }
            str.append("]");
            return str;
        }

        static std::unique_ptr<ArrayNode> make_ptr() {
            return std::make_unique<ArrayNode>();
        }

        int child_count() const{
            return _array.size();
        }


        void push_back(NodePtr node){
            _array.push_back(std::move(node));
        }

    
    private:

        std::vector<NodePtr> _array;





 
};