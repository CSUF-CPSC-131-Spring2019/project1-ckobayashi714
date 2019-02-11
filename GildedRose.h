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
    vector<Item> Items;
    size_t sz_;

public:
    GildedRose();
    GildedRose(size_t size);
    ~GildedRose();

    size_t size();
    Item& get(size_t);
    void add(const Item&);

    Item& operator[](size_t);
};

GildedRose::GildedRose() {
  sz_ = 0;
}
GildedRose::GildedRose(size_t size) {
  sz_ = 0;
}
GildedRose::~GildedRose() {
  // delete[] Items;
  // Items = nullptr;
}
size_t GildedRose::size() {
  return sz_;
}
Item& GildedRose::get(size_t index) {
  if (!(index >= 0 && index < Items.size()))
    throw out_of_range("Error: Out of range.");
  return Items.at(index);
}
void GildedRose::add(const Item& item) {
  Items.push_back(item);
  sz_++;
}
Item& GildedRose::operator[](size_t item) {
  return get(item);
}
