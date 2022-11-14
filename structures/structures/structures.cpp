#include <iostream>
#include <cstdlib>
#include <string>
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

struct Date {
private:
	int day;
	int month;
	int year;

public:

	Date() {
		day = 0;
		month = 0;
		year = 0;
	}

	Date(int Day, int Month, int Year) {
		day = Day;
		month = Month;
		year = Year;
	}

	void SetDay(int day) { this->day = day; }
	void SetMonth(int month) { this->month = month; }
	void SetYear(int year) { this->year = year; }
	
	int GetDay() { return day; }
	int GetMonth() { return month; }
	int GetYear() { return year; }

	void PrintDate() {
		if (day <= 0 || day > 31 || month <= 0 || month > 12 || year < 2022) {
			cout << "Invalid date" << endl;
			return;
		}
		printf("%02d.%02d.%04d\n", day, month, year);
	}

	Date NewDate() {
		Date tmp;
		int day, month, year;

		// Day
		cout << "Please, enter day: ";
		cin >> day;
		tmp.SetDay(day);

		//Month
		cout << "Please, enter month: ";
		cin >> month;
		tmp.SetMonth(month);

		//Year
		cout << "Please, enter year: ";
		cin >> year;
		tmp.SetYear(year);

		cout << endl;
		return tmp;
	}
};

struct Device {
private:
	string typeOfDevice;
	string name;
	string model;
	string brand;
	Date guarantee;
	int price;
	Date dateOfSale;

public:
	// setters
	void SetTypeOfDevice(string typeOfDevice) { this->typeOfDevice = typeOfDevice; }
	void SetName(string name) { this->name = name; }
	void SetModel(string model) { this->model = model; }
	void SetBrand(string brand) { this->brand = brand; }
	void SetGuarantee(Date guarantee) { this->guarantee = guarantee; }
	void SetPrice(int price) { this->price = price; }
	void SetDateOfSale(Date dateOfSale) { this->dateOfSale = dateOfSale; }

	// getters
	string GetTypeOfDevice() { return typeOfDevice; }
	string GetName() { return name; }
	string GetModel() { return model; }
	string GetBrand() { return brand; }
	Date GetGuarantee() { return guarantee; }
	int GetPrice() { return price; }
	Date GetDateOfSale() { return dateOfSale; }

	Device NewDevice() {
		Device tmp;
		string typeOfDevice, name, model, brand;
		int price;
		Date guarantee, dateOfSale;

		// Type Of Device
		cout << "Please, enter type of device: ";
		getline(cin, typeOfDevice);
		cout << endl;
		tmp.SetTypeOfDevice(typeOfDevice);

		// Name
		cout << "Please, enter name of shop: ";
		getline(cin, name);
		cout << endl;
		tmp.SetName(name);

		// Brand
		cout << "Please, enter brand: ";
		getline(cin, brand);
		cout << endl;
		tmp.SetBrand(brand);

		// Model
		cout << "Please, enter model: ";
		getline(cin, model);
		cout << endl;
		tmp.SetModel(model);

		// Guarantee
		cout << "Please, enter guarantee:" << endl;
		guarantee = guarantee.NewDate();
		tmp.SetGuarantee(guarantee);

		// Price
		cout << "Please, enter price: ";
		cin >> price;
		cout << endl;
		tmp.SetPrice(price);

		// Date Of Sale
		cout << "Please, enter date of sale:" << endl;
		dateOfSale = dateOfSale.NewDate();
		tmp.SetDateOfSale(dateOfSale);

		cout << endl;
		return tmp;
	}

	void PrintDataOfDevice() {
		cout << "Type of device: " << typeOfDevice << endl;
		cout << "Name: " << name << endl;
		cout << "Brand: " << brand << endl;
		cout << "Model: " << model << endl;
		cout << "Guarantee date: ";
		guarantee.PrintDate();
		cout << "Price: " << price << endl;
		cout << "Date of sale: ";
		dateOfSale.PrintDate();
	}
};

int main() {
	/*MyPhone MyPhone;
	MyPhone.ShowInfo();
	cout << endl;
	check ck;
	ck.show();*/

	/*Date date;
	date = date.NewDate();
	date.PrintDate();*/

	Device MyDevice;
	MyDevice = MyDevice.NewDevice();
	MyDevice.PrintDataOfDevice();
}