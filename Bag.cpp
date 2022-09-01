/** @file Bag.cpp */
#ifndef BAG_CPP
#define BAG_CPP

#include "Bag.h"

template<class ItemType>
Bag<ItemType>::Bag()
{
		size = 0;
}

template<class ItemType>
bool Bag<ItemType>::isEmpty()
{
		return size == 0;
}

template<class ItemType>
int Bag<ItemType>::getCurrentSize() const
{
		return size;
}

template<class ItemType>
bool Bag<ItemType>::add(const ItemType& newEntry)
{
		if (size >= MAX_SIZE)
			return false;
		ary[size++] = newEntry;
		return true;
}

template<class ItemType>
bool Bag<ItemType>::remove(const ItemType& anEntry)
{
		int index = 0;
		bool found = false;

		while (!found && index < size)
		{
			if (ary[index] == anEntry)
				found = true;
			else
				index ++;
		}
		if (!found)
			return found;
		for (int x = index; x < size - 1; x++)
			ary[x] = ary[x+1];
		size --;
		return found;
}

template<class ItemType>
void Bag<ItemType>::clear()
{
		size = 0;
}

template<class ItemType>
int Bag<ItemType>::getFrequencyOf(const ItemType& anEntry) const
{
		int count = 0;
		for (int x = 0; x < size; x++)
			if (ary[x] == anEntry)
				count ++;
		return count;
}

template<class ItemType>
bool Bag<ItemType>::contains(const ItemType& anEntry) const
{
		int index = 0;
		bool found = false;

		while (!found && index < size)
		{
			if (ary[index] == anEntry)
				found = true;
			else
				index ++;
		}
		return found;
}

template<class ItemType>
vector<ItemType> Bag<ItemType>::toVector() const
{
	vector<ItemType> temp;
	for (int x = 0; x < size; x++)
		temp.push_back(ary[x]);
	return temp;
}


#endif
