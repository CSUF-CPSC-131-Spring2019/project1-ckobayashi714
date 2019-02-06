#pragma once

#include <string>
#include <vector>
using namespace std;
//using std::string;

// This is already done for you.
class Item {
public:
    string name;
    int sellIn;
    int quality;
    Item(string, int, int);
};

Item::Item(string new_name, int new_sellIn, int new_quality)
: name(new_name), sellIn(new_sellIn), quality(new_quality) {
}
// This class is incomplete.
class GildedRose {
private:
    // Add something to hold at least 10 items.
    vector<Item> list_Items;

public:
    GildedRose();
    ~GildedRose();

    size_t size() const;
    Item& get(size_t);
    void add(const Item&);

    Item& operator[](size_t);
};
GildedRose::GildedRose() {
  list_items(10);
}
GildedRose::~GildedRose() {
  delete list_Items;
}
size_t GildedRose::size() const {
	return list_Items.size();
}
Item& GildedRose::get(size_t index) {
	return list_Items[index];
}
void GildedRose::add(const Item& item) {
	list_Items.push_back(item);
}
Item& GildedRose::operator[](size_t item) {
	return list_Items[item];
}
