#include <vector>
#include <cmath>
#include "../common.cpp"

struct ItemPrice {
    float price;
    float comission;
};

struct Total {
    float profit;
    float comission;
};

int main() {
    std::vector<std::vector<int>> table_a={
        {5, 2, 0, 10},
        {3, 5, 2, 5},
        {20, 0, 0, 0}
    };
    std::vector<ItemPrice> table_b={
        {1.2, 0.5},
        {2.8, 0.4},
        {5.0, 1.0},
        {2.0, 1.5}
    };
    std::vector<Total> totals={};

    for (auto sold_items : table_a) {
        auto total=Total{0, 0};
        for (int id : range(0, sold_items.size()-1)) {
            int amount=sold_items[id];
            total.profit += amount*table_b[id].price;
            total.comission += amount*table_b[id].comission;
        }
        totals.push_back(total);
    }
    int
        max_profit_id=0,
        max_comission_id=0;
    float
        max_profit=0,
        max_comission=0,
        total_profits=0,
        total_comissions=0;
    for (int seller_id : range(0, totals.size()-1)) {
        if (totals[seller_id].profit > max_profit) {
            max_profit=totals[seller_id].profit;
            max_profit_id=seller_id;
        }
        if (totals[seller_id].comission > max_comission) {
            max_comission=totals[seller_id].comission;
            max_comission_id=seller_id;
        }
        total_profits+=totals[seller_id].profit;
        total_comissions+=totals[seller_id].comission;
        print(
            "Продавец "+str(seller_id+1)+
            " получил доход "+str(totals[seller_id].profit)+
            " и комиссионные "+str(totals[seller_id].comission)
        );
    }
    print(
        "1) Больше всего денег с продажи получил продавец "+str(max_profit_id+1)+"\n"+
        "2) Больше всего комиссий с продажи получил продавец "+str(max_comission_id+1)+"\n"+
        "3) Всего денег с продажи: "+str(total_profits)+"\n"+
        "4) Всего комиссий с продажи: "+str(total_comissions)+"\n"+
        "5) Всего прошло через руки продавцов: "+str(total_profits+total_comissions)
    );
    return 0;
}