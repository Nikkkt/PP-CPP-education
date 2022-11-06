#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    int dragon_hp, dragon_damage, spearman_hp, spearman_damage, number_of_spearmen;

    cout << "                                " << endl;
    cout << "      (_                      _)" << endl;
    cout << "      / \\_     (      )     _/ \\" << endl;
    cout << "     /    \\    |\\\\^^//|    /    \\" << endl;
    cout << "    |      |   ( 0  0 )   |      |" << endl;
    cout << "   /        \\   \\    /   /        \\" << endl;
    cout << "  |          |  .(oo).  |          |" << endl;
    cout << " /           \\_/  --  \\_/           \\" << endl;
    cout << "|             (        )             |" << endl;
    cout << " \\/\\/\\/\\/\\/\\/\\/\\      /\\/\\/\\/\\/\\/\\/\\/" << endl;
    cout << " (   (   (   / |  /\\  | \\   )   )   ) " << endl;
    cout << "           <(  | |  | |  )>" << endl;
    cout << "          <__\\.|_|  |_|./__>" << endl;
    cout << "           ^^   ^    ^   ^^" << endl;

    cout << endl << "NAME: Dragon" << endl;
    cout << "HP: ";
    cin >> dragon_hp;
    cout << "DAMAGE: ";
    cin >> dragon_damage;
    system("cls");

    cout << R"(     _____     ^)" << endl;
    cout << R"(    /|||||\    |)" << endl;
    cout << R"(   ||0|||0||   |)" << endl;
    cout << R"(   ||||L||||   |)" << endl;
    cout << R"(    \|---|/    |)" << endl;
    cout << R"(    / ||| \    |)" << endl;
    cout << R"(  /|||||||||\  |)" << endl;
    cout << R"( /|||||||||||\/|)" << endl;
    cout << R"(||/ \|||||/ \|||)" << endl;
    cout << R"(||\ / ||| \  \/|)" << endl;
    cout << R"( \_| ||||| |   |)" << endl;
    cout << R"(   |||||||||   |)" << endl;
    cout << R"(   |||||||||   |)" << endl;
    cout << R"(   | | | | |   |)" << endl;
    cout << R"(   |/`\|/`\|   |)" << endl;

    cout << endl << "NAME: Spearman" << endl;
    cout << "HP: ";
    cin >> spearman_hp;
    cout << "DAMAGE: ";
    cin >> spearman_damage;
    cout << "NUMBER OF SPEARMEN: ";
    cin >> number_of_spearmen;
    system("cls");

    do {
        dragon_hp = dragon_hp - number_of_spearmen * spearman_damage;
        if (dragon_hp < 0) {
            dragon_hp = 0;
        }
        cout << "Spearmen attack (damage = " << number_of_spearmen * spearman_damage << "). Dragon has " << dragon_hp << " HP left." << endl;

        number_of_spearmen = ceil((number_of_spearmen * spearman_hp - dragon_damage) / spearman_hp);
        if (number_of_spearmen < 0) {
            number_of_spearmen = 0;
        }
        cout << "Dragon attacks (damage = " << dragon_damage << "). " << number_of_spearmen << " spearmen left." << "\n\n";

        Sleep(1000);

        if (dragon_hp == 0) {
            cout << "Spearmen are win" << endl;
            break;
        }
        else if (number_of_spearmen == 0) {
            cout << "Dragon is win" << endl;
            break;
        }

    } while (true);
}