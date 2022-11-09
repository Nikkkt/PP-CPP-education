#include <iostream>
using namespace std;

enum Color { RED, BLUE, YELLOW, GREEN, ORANGE, WHITE, BLACK, GREY };

//Просто разнообразить
struct MyPhone {
private:
	string colors[GREY + 1] = {"Red", "Blue", "Yellow", "Green", "Orange", "White", "Black", "Grey"};
	string CaseColor = colors[BLACK];
	string Brand = "Xiaomi";
	string Model = "Redmi Note 8 Pro";
	double Price = 300;
	double Weight = 0.2;
	string DisplayType = "LCD";
	string OS = "Android 9.0 (upgradable to Android 11)";
	short MemoryGB = 64;
	short RAMGB = 6;
public:
	void ShowInfo() {
		cout << "CaseColor: " << CaseColor << endl;
		cout << "Brand: " << Brand << endl;
		cout << "Model: " << Model << endl;
		cout << "Price: " << Price << "$" << endl;
		cout << "Weight: " << Weight << " kg" << endl;
		cout << "DisplayType: " << DisplayType << endl;
		cout << "OS: " << OS << endl;
		cout << "Memory (GB): " << MemoryGB << endl;
		cout << "RAM (GB): " << RAMGB << endl;
	}
};

struct Pen {
private:
	string colors[GREY + 1] = { "Red", "Blue", "Yellow", "Green", "Orange", "White", "Black", "Grey" };
	string PenColor;
	string LeadColor;
	double Length;
	double Price;
	string Type;
};

struct Notebook {
private:
	string colors[GREY + 1] = { "Red", "Blue", "Yellow", "Green", "Orange", "White", "Black", "Grey" };
	string ColorOfPages;
	int NumberOfPages;
	double Height;
	double Width;
	double length;
};

struct Car {
private:
	string colors[GREY + 1] = { "Red", "Blue", "Yellow", "Green", "Orange", "White", "Black", "Grey" };
	string Color;
	string Brand;
	string Transmission;
	string Type;
	int HorsePower;
	int NumberOfDoors;
	double EngineVolume;
};

struct Pet {
private:
	string colors[GREY + 1] = { "Red", "Blue", "Yellow", "Green", "Orange", "White", "Black", "Grey" };
	string PetFamily;
	string KindOfPet;
	string Color;
	string Name;
	int Age;
	double Weight;
};

struct check {
private:
	string indent = "\n";
	string head = "\t\t   Berqhotel\n\t\tGrosse Scheidegg\n\t\t3818 Grindelwald\n\t\tFamilie R.Muller";
	string prebody = "Rech.Nr. 4572\t\t    30.07.2007/13:29:17\nBar\t\t\t\t     Tisch 7/01";
	string body = " 2xLatte Macchiato     a     4.50  CHF    9.00\n 1xGloki               a     5.00  CHF    5.00\n 1xSchweinschnitzel    a    22.00  CHF   22.00\n 1xChasspatzli         a    18.50  CHF   18.50\n                                   --------------\n             Total   :       CHF       54.50";
	string preend = "Incl.  7.6% MwSt    54.50 CHF:        3.85\n" + indent + "Entspricht in Euro    36.33  EUR\nEs bediente Sie: Ursula\n";
	string end = "\t\t  MwSt Nr.: 430 234\n\t\tTel.: 033 853 67 16\n\t\tFax.: 033 853 67 19\n     E-mail: grossescheidegg@bluewin.ch";
public:
	void show() {
		cout << head << indent << prebody << indent << body << indent << preend << indent << end << endl;
	}
};

int main() {
	MyPhone MyPhone;
	MyPhone.ShowInfo();
	cout << endl;
	check ck;
	ck.show();
}