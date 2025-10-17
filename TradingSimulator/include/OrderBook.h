#pragma once
#include <unordered_map>
#include <vector>
#include <mutex>
#include "Stock.h"
#include "Trader.h"
#include "Order.h"
#include "ArchivedOrder.h"

class OrderBook{
    private:
        std::unordered_map<int, Stock*> stocks;
        std::unordered_map<int, Trader*> traders;
        std::unordered_map<int, std::vector<ArchivedOrder*>> completedOrders; // Map trader ID to their archived orders
        mutable std::mutex mtx;

    public:
        OrderBook();
        ~OrderBook();

    public:
        void addOrder(Order*);
        void addStock(Stock*);
        void removeOrder(Order*);
        Stock* getStock(int) const;
        Trader* getTrader(int) const;
};