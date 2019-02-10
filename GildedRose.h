#pragma once

#include <array>
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
    int* Items;
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
  Items = new int[10];
  sz_ = 0;
}
GildedRose::GildedRose(size_t size) {
  Items = new int[size];
  sz_ = 0;
}
GildedRose::~GildedRose() {
  delete[] Items;
  Items = nullptr;
}
size_t GildedRose::size() {
  int size = *(&Items + 1) - Items;
  return size;
}
// Item& GildedRose::get(size_t index) {
//   return Items[index];
// }
// void GildedRose::add(const Item& item) {
//   Items.push_back(item);
// }
// Item& GildedRose::operator[](size_t item) {
//   return Items[item];
// }
