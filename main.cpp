#include <iostream>
#include <string>
#include <sstream>    // stringstream
using namespace std;

// Made to be cross compatible with UNO varients and generic card decks
class Card {
	string name;
	string color;
	
	public:
	string getName() const;
	string getColor() const;
	void setName(string);
	void setColor(string);
	Card();
	Card(string);
	Card(string, string);
};

Card::Card() { }

Card::Card(string _name) {
	name = _name;
}

Card::Card(string _name, string _color) {
	name = _name;
	color = _color;
}

string Card::getName() const {
	return name;
}
void Card::setName(string newName) {
	name = newName;
}

string Card::getColor() const {
	return color;
}
void Card::setColor(string newColor) {
	color = newColor;
}

int main()
{
	cout << "Welcome to deck of cards!" << endl;
	
	Card cards[14];
	short i;
	
	for (i = 0; i < 10; i++)
	{
		Card c;
		string str;
		stringstream stream;
		
		stream << i + 1;
		stream >> str;
		
		c.setName(str);
		cards[i] = c;
	}
	
	Card jack {"J"};
	Card queen {"Q"};
	Card king {"K"};
	Card ace {"A"};
	
	cards[10] = jack;
	cards[11] = queen;
	cards[12] = king;
	cards[13] = ace;
	
	
	for (Card c : cards) {
		cout << c.getName() << " ";
	}
	cout << endl;
	
}
