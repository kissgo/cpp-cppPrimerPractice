//
// Created by ROG on 2021/11/24.
//

#include <iostream>
#include "vector"
#include "string"
#include "algorithm"

using namespace std;

class Quote {
public:
    Quote() = default;

    Quote(const string &book, double sales_price) : bookNo(book), price(sales_price) {};

    string isbn() const {
        return bookNo;
    }

    virtual double net_price(size_t n) const {
        return n * price;
    };

    virtual void debug() {
        cout << "bookNO=" << bookNo << " price=" << price << endl;
    };


    virtual ~Quote() = default;

private:
    string bookNo;
protected:
    double price = 0.0;

};

class Disc_quote:public Quote {
public:
    Disc_quote(const string &book = "", double sales_price = 0.0,
               size_t qty = 0, double disc = 0.0) : Quote(book,sales_price),
               quantity(qty),discount(disc){}

    double net_price(size_t n) const = 0;

protected:
    size_t quantity;
    double discount;
};

class Bulk_quote : public Disc_quote {
public:
    Bulk_quote(const string &book = "", double sales_price = 0.0,
               size_t qty = 0, double disc_rate = 0):
               Disc_quote(book,sales_price,qty,disc_rate) {}

    double net_price(size_t cnt) const override {
        if (cnt >= min_qty) {
            return cnt * (1 - discount) * price;
        } else {
            return cnt * price;
        }
    }

    void debug() override {
        Quote::debug();
        cout << "min_qty=" << min_qty << " discount=" << discount << endl;
    }

private:
    size_t min_qty;
    double discount;
};

class Limited_quote:public Disc_quote {
public:
    Limited_quote(const string &book = "", double sales_price = 0.0,
                  size_t qty = 0, double disc = 0.0):
                  Disc_quote(book,sales_price,qty,disc){}

    double net_price(size_t cnt) const override {
        if (cnt <= quantity) {
            return cnt * (1 - discount) * price;
        } else {
            return quantity * (1 - discount) * price + (cnt - quantity) * price;
        }

    }
};

double print_total(ostream &os, const Quote &item, size_t n) {
    double ret = item.net_price(n);
    os << "ISBN: " << item.isbn() << "# sold: " << n << " total due: " << ret << endl;
    return ret;
};



int main() {
    Quote quote;
    Bulk_quote bulkQuote;

    print_total(cout, quote, 5);

    print_total(cout, bulkQuote, 6);

    //Disc_quote discQuote; 不能创建抽象基类对象
    return 0;
}