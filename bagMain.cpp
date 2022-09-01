# include <iostream>  // For cout and cin
# include <string>  // For string objects
# include "bag.h" // For ADT bag
using namespace std;
int main()
{
	string clubs[] = { "Joker", "Ace", "Two", "Three",
		"Four", "Five", "Six", "Seven",
		"Eight", "Nine", "Ten", "Jack",
		"Queen", "King" };
	// Create our bag to hold cards.
	Bag < string > grabBag;
	// Place six cards in the bag.
	grabBag.add(clubs[1]);
	grabBag.add(clubs[2]);
	grabBag.add(clubs[4]);
	grabBag.add(clubs[8]);
	grabBag.add(clubs[10]);
	grabBag.add(clubs[12]); //
	// Get friends guess and check it.
	int guess = 0;
	while (!grabBag.isEmpty())
	{
		cout << "What is your guess?"
			<< "(1 for Ace to 13 for King):";
		cin >> guess;
		// Is card in the bag?
		if (grabBag.contains(clubs[guess]))
		{
			cout << clubs[guess] << endl;
			// Good guess  remove card from the bag.
			cout << "You get the card!\n";
			grabBag.remove(clubs[guess]);
		}
		else
		{
			cout << "Sorry, card was not in the bag.\n";
		} // end if
		{
			vector<string> vec = grabBag.toVector();
			for (vector<string>::iterator it = vec.begin();
				it != vec.end(); ++it)
				cout << ' ' << *it;
			cout << endl;
		}
	} // end while


	cout << "No more cards in the bag. Game over!\n";
	system("pause");
	return 0;
}
;  // end main