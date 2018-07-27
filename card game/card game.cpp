#include <iostream>
using namespace std;
const int clubs = 0, diamonds = 1, hearts = 2, spades = 3; // suits
const int jack = 11, queen = 12, king = 13, ace = 14; // face cards
/////////////////////////////////////////////////
struct card
{
	int number;
	int suit;
};
void main()
{
	/*//////////////////////////////////////
	         
		      GARD GAME

     *//////////////////////////////////////
	system("color 1A");

           card temp, chosen, prize;       // define cards
	int postion;
           card card1 = { 7, clubs }; // initial card 1
	cout << "card 1 is the 7 of clubs \n";
           card card2 = { jack, hearts }; // intial card 2
	cout << "card 2 is the jack of the heats \n";
           card card3 = { ace, spades }; //intial card 3
	cout << "card 3 is the ace of spades \n";

	prize = card1;//copy this card to remeber it 

	cout << "i'm swapping card 1 and card 3 \n";
	//swap(card1, card3);
	temp = card1; 
	card1 = card3;    // anthor swapping
	card3 = temp;
	cout << "i'm swappimg card 2 and card 3\n";
	temp = card2;
	card2 = card3;
	card3 = temp;
	cout << "i'm swapping card 1 and card 2 \n";
	temp = card1;
	card1 = card2;
	card2 = temp;
	cout << "now , where (1 , 2 or 3 ) is the 7 of clubs \n";
	cin >> postion;

	switch (postion)
	{
	case 1: chosen = card1; break;
	case 2: chosen = card2; break;
	case 3: chosen = card3; break;

	}
	if (chosen.number == prize.number && chosen.suit == prize.suit) // compire cards
		cout << "that's right !! you win the game \n";
	else
		cout << "sorry you lose \n ";

	system("pause");
}