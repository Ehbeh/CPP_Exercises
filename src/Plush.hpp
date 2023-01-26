#pragma once

class Plush{

    public:
        Plush()
            : _cost{10} {

            }

    int get_cost() const
    {   
        return _cost;
    }

    void set_cost(int value)
        {
            _cost = value;
        }

    private:
        int _cost;
};
