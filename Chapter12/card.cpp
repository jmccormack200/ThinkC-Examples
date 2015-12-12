#include <iostream>
#include <vector>

using namespace std;

struct Card{
	int suit, rank;

	Card ();
	Card (int s, int r);
	void print () const;
};

Card::Card(){
	suit = 0; rank = 0;
}

Card::Card(int s, int r){
	suit = s; rank = r;
}

void Card::print () const{
	vector<string> suits (4);
	suits[0] = "Clubs";
	suits[1] = "Diamonds";
	suits[2] = "Hearts";
	suits[3] = "Spades";

	vector<string> ranks(14);
	ranks[1] = "Ace";
	ranks[2] = "2";
	ranks[3] = "3";
	ranks[4] = "4";
	ranks[5] = "5";
	ranks[6] = "6";
	ranks[7] = "7";
	ranks[8] = "8";
	ranks[9] = "9";
	ranks[10] = "10";
	ranks[11] = "Jack";
	ranks[12] = "Queen";
	ranks[13] = "King";

	cout << ranks[rank] << " of " << suits[suit] << endl;
}

int main(){
	Card card (1, 11);
	card.print();
	return 0;
}

