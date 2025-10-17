#include <iostream>
#include "OrderBook.h"

OrderBook::OrderBook(){
    std::cout << "Creating Orderbook" << std::endl;
}

OrderBook::~OrderBook() {
    for(auto& pair : stocks) delete pair.second;
    for(auto& pair : traders) delete pair.second;
    for (auto& pair : completedOrders) {
    for (auto* order : pair.second) delete order;
    }
}