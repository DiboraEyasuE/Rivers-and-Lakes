#include <iostream>
#include <string>
using namespace std;

void coffeeCeremony(int stage);

int main ()
{
    int round;
    cout << "What is the stage? 1, 2 or 3? ";
    cin >> round;
    coffeeCeremony(round);
    return 0;
}

void coffeeCeremony(int stage)
{
    if (stage == 1)
    {    
        cout << "Round 1 - Abol " <<
        "\n-  The Strongest" <<
        "\n-  For •	Time for storytelling and sharing information" <<
        "\n-  Sets the tone for conversation" ;
    }
    else if (stage == 2)
    {
        cout << "Round 2 - Tona " <<
        "\n•  Milder than Abol" <<
        "\n•  Time for storytelling and sharing information";
    }
    else if (stage == 3)
    {
        cout << "Round 3 - Baraka " <<
        "\n•  Lightest coffee" <<
        "\n•  Usually for children" <<
        "\n•  Concludes the ceremony with blessings and gratitude" ;
    }
    else
    {
        cout << "Thank you for joining. The ceremony is over at stage 3.";
    }
}