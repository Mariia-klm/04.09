#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

//struct Data {
//    string day = "Четверг";
//    int num = 4;
//    string month = "Вересень";
//    int year = 2025;
//};
//
//int main()
//{
//    system("chcp 1251>>null");
//    /*Data less;
//    cout << less.day << ' ' << less.month << ' ' << less.num << ' ' << less.year;
//
//    Data lees2 = { "Суббота",11,"Вересень",2020 };*/
//
//
//
//
//    return 0;
//}





//Exercise 
//struct boiler {
//    string firma = "Samsung";
//    string color = "white";
//    int power = 2000;
//    int volume = 70.5;
//    int temperature = 50;
//};

////Exercise2
//typedef struct {
//    string nm, prd, kl;
//}Animal;
//
//int main()
//{
//    system("chcp 1251>>null");
//    
//    /*Exercise 1
//    boiler b1;
//    cout << "Firma: " << b1.firma << "\nColor: " << b1.color << "\nPower: " << b1.power << "\nVolume: " << b1.volume << "\nTemperature: " << b1.temperature;
//
//    cout << "\n\nVvedit dani boilera: (firma,color,power,volume,temperature" << endl;
//    cin >> b1.firma >> b1.color >> b1.power >> b1.volume >> b1.temperature;*/
//
//   /* Exercise2*/
//    cout << "Skilki tvarin?: ";
//
//    int am;
//    cin >> am;
//
//    vector<Animal> anm;
//    cout<<
//    return 0;
//}

union Life {
	float ptax_speed;
	bool yes_no;
	int iq_human;
};

enum Type {
	ptax=1,
	hudoba,
	human
};

struct St {
	int speed;
	string color;
	Type t;
	Life h;
};

void enter(St& entity) {
	cout << "yakiy tip?: " << endl;
	int choise;
	cin >> choise;
	entity.t = Type(choise);
	switch (entity.t) {
		case Type::ptax:
			cout << "Speed?";
			cin >> entity.h.ptax_speed;
			break;
		case Type::hudoba:
			cout << "Parnokopitne or not?" << endl;
			cin >> entity.h.yes_no;
			break;
		case Type::human:
			cout << "level iq?" << endl;
			cin >> entity.h.iq_human;
			break;
		default:
			cout << "error" << endl;
			break;
	}

	cout << "color?" << endl;
	cin >> entity.color;
	cout << "speed?" << endl;
	cin >> entity.speed;

}

void Info(St& entity) {
	cout << "info anout all creatures: \n";
	cout << "Type: ";

	switch (entity.t) {
	
	case Type::ptax:
		cout << "Fling speed: " << entity.h.ptax_speed << endl;
		break;

	case Type::hudoba:
		cout << "Parnokopitne: " << entity.h.yes_no << endl;
		break;

	case Type::human:
		cout << "IQ: " << entity.h.iq_human << endl;
		break;
	}

	cout << "color: " << entity.color << endl;
	cout << "speed: " << entity.speed << endl;

}

int main() 
{
	system("chcp 1251>>null");

	const int size = 10;
	St array[size];
	int rax = 0;

	cout << "Vvedit dani creature: " << endl;
	for (int i = 0; i < size; i++) {
		int m = 0;
		cout << "Budete vvoditi info?: ";
		cout << i + 1 << ")";
		enter(array[i]);
		rax++;
	}

	for (int i = 0; i < rax; i++) {
		cout << "Creature #" << i + 1 << ")" << endl;
		Info(array[i]);
	}

	return 0;
}