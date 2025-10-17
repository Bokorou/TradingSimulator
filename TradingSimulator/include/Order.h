#pragma once
#include "Trader.h"
#include "Stock.h"

class Order{
    private:
        int id;
        Trader* trader;
        Stock* stock;
        int quantity;
    public:
        Order(int id, Trader* trader, Stock* stock, int quantity) : 
                    id(id), trader(trader), stock(stock), quantity(quantity){}
        virtual ~Order() = default;

    public:
        virtual void execute();
        virtual std::string serializeToString();

};