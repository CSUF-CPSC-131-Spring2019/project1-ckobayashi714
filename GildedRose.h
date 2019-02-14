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
    size_t sz_,
           capacity_;

public:
    GildedRose();
    GildedRose(size_t size);
    ~GildedRose();

    size_t size();
    Item& get(size_t);
    void add(const Item&);

    Item& operator[](size_t);
};
// Default constructor
GildedRose::GildedRose() {
  sz_ = 0;
  capacity_ = 0;
}
// Non-Defualt Constructor
GildedRose::GildedRose(size_t size) {
  sz_ = 0;
  capacity_ = 0;
}
// Deconstructor - Deallocate memory
GildedRose::~GildedRose() {
  // delete[] Items;
  // Items = nullptr;
}
// Return the size of the current vector.
size_t GildedRose::size() {
  return sz_;
}
// Retrieve the element at the specified index.
// Utilize stdexcept to handle edge cases.
Item& GildedRose::get(size_t index) {
  if (!(index >= 0 && index < Items.size()))
    throw out_of_range("Error: Out of range.");
  return Items.at(index);
}
// Insert an element at the next available index of the array.
// Utilize stdexcept to handle edge cases.
void GildedRose::add(const Item& item) {
  Items.push_back(item);
  sz_++;
}
// Retrieve the element at the specified index.
// Utilize stdexcept to handle edge cases.
Item& GildedRose::operator[](size_t item) {
  return get(item);
}
