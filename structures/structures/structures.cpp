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

int main() {
	MyPhone MyPhone;
	MyPhone.ShowInfo();
}