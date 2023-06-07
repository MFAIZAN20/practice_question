/*Exercise Practice Questions : 4 || Question No. 2 */
#include <iostream>
#include <iomanip>
#include <string>
#include <random>
#include <ctime>
using namespace std;

class Card
{
    int face;
    int suit;
    static const string faces [];
    static const string suits [];
    public:

    Card(int f = 0,int s = 0)
    {
        face = f;
        suit = s;
    }

    string to_string()
    {
        return (faces[face] + " of " + suits[suit]);
    }

};
const string Card :: faces [] = {"One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King"};
const string Card :: suits [] = {"Heart","Diamond","clube","Spades"};
class DuckofCard
{
    int current_card;
    Card duck [52];
    public:

    DuckofCard()
    {
        current_card = 0;
        for (int i = 0; i < 52; ++i) 
        {
            duck[i] = Card(i % 13, i / 13);
        }
    }

    void shuffle_card()
    {
        for (int i = 0; i < 52; i++)
        {
            int j = rand() % 52;
            Card temp = duck[i];
            duck[j] = duck[i];
            duck[i] = temp;
        }   
    }
    
    Card dealCard()
    {
        return duck[current_card++];
    }

    bool moreCard() const
    {
        return current_card < 52;
    }

};
int main()
{
    srand(time(0));

    DuckofCard duck;

    duck.shuffle_card();

    for (int i = 0; i < 52; i++)
    {
        cout<<"The Card :"<<duck.dealCard().to_string()<<endl;
    }
    
}