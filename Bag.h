/** @file Bag.h */
#ifndef BAG_H
#define BAG_H

#include "BagInterface.h"
using namespace std;

const int MAX_SIZE = 50;

template<class ItemType>
class Bag : public BagInterface<ItemType>
{
public:
	Bag();

	bool isEmpty();
    
    /** Gets the current number of entries in this bad.
     @return  The integer number of entries currently in the bag */
    int getCurrentSize() const;

    /** Sees whether this is empty
     @return   True if the bag is empty, or false if not */

    /** Adds a new entry to this bag
     @post   If successful, newEntry is stored in the bag and
          the count of items in the bag has increased by 1
     @param newEntry  The object to be added as an new entry
     @return   True is addition was successful, or false if not */
    bool add(const ItemType& newEntry);

    /** Removes one occurrence of a given entry from this bag,
         if possible
     @post   If successful, anEntry has been removed from the bag
          and the count of items in the bad has decreased by 1.
     @param anEntry   The entry to be removed
     @return   True if removal was successful, or false if not */
    bool remove(const ItemType& anEntry);

    /** Removes all entries from this bag
     @post   Bag contains no items, and the count of items is 0 */
    void clear();

    /** Counts the number of times a given entry appears in bag.
     @param anEntry    The entry to be counted
     @return    The numer of times anEntry appears in the bag */
    int getFrequencyOf(const ItemType& anEntry) const;

    /** Tests whether this bag contains an given entry
     @param anEntry   The entry to locate
     @return   True if bag contains anEntry, or false otherwise */
    bool contains(const ItemType& anEntry) const;

    /** Empties and then fills a given vector with all entries that 
          are in this bag
     @return   A vector containing all the entries in the bag */
    vector<ItemType> toVector() const;
private:
	ItemType ary[MAX_SIZE];
	int size;
}; // end BagInterface

#include "Bag.cpp"
#endif