#pragma once
#include <string>
class PlushStore
{
    public: 
        PlushStore(std::string name)
            :_name{name},
              _wealth_amount{0},
              _stock_size{0},
              _debt_amount{0}
              {

            }

        std::string get_name() const
            {
                return _name;
            }
        
        int get_wealth_amount() const
            {
                return _wealth_amount;
            }

        int get_stock_size() const
            {
                return _stock_size;
            }
        int get_debt_amount() const
            {
                return _debt_amount;
            }
         void loan(int credit){
            _wealth_amount = _wealth_amount + credit;
            _debt_amount += credit + credit *0.1;

         }

         void make_plush(int price){
            if(price >_wealth_amount){
                _stock_size+= 1;
                return;
            }

            _wealth_amount -= price;
            if(_wealth_amount < 0){
                _wealth_amount = 0;
            }
            _stock_size+= 1;
         }
    private:
        std::string _name;
        int _wealth_amount;
        int _stock_size;
        int _debt_amount;
        
};
