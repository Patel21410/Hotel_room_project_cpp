#include<iostream>
using namespace std;
class room {
	protected:
	int id;
	string name;
	int days;
public:
	virtual void calculate(int days) = 0;
	room() {
		id = 0;
		name = "na";
		days = 0;
	}
};

class stdr :public room{
	string sps;
public:
	void calculate(int days) {
		cout << 200 * days;
	}
	void std_room() {
		cout << "woow\n wifi free";
	}
	stdr() {
		id = 0;
		name = "na";
	}
	void accept() {
		cout << "enetr id and name";
		cin >> id >> name;
		cout << "enter no of days" << endl;
		cin >> days;
		this->id = id;
		this->name = name;
	}
	void display() {
		std_room();
		cout << "id and name"<<id<<" "<<name<<endl;
		calculate(days);


	}
};

class dlxr :public room {
	string dps;
public:
	void calculate(int days) {
		cout << 500 * days;
	}
	void dlxr_room() {
		cout << "woow dlx room AC Free TV \n";
	}
	dlxr() {
		id = 0;
		name = "na";
	}
	void accept() {
		cout << "enetr id and name";
		cin >> id >> name;
		cout << "enter no of days" << endl;
		cin >> days;
		this->id = id;
		this->name = name;
	}
	void display() {
		dlxr_room();
		cout << "id and name" << id << " " << name << endl;
		calculate(days);


	}
};



int main() {
	/*int size;
	cin >> size;
	stdr* s1 = new stdr[size];*/
	int press;
	int choise,again;

	do {
		cout << "press 1. for std romm\n press 2. dlxfor room\n press 3 for check details room\n";
		cout << "enter Your choise/n";
		cin >> choise;
		stdr s1;
		dlxr d1;

		switch (choise) {
		case 1:
			cout << "std room" << endl;
			s1.accept();
			s1.display();
			//break;
		case 2:
			cout << "dlx room" << endl;

			d1.accept();
			d1.display();

			//break;
		case 3:
			cout << "which room details you want\n press 1. for stdroom\n press 2 for dlx room";
			cin >> press;
			if (press == 1) {
				s1.display();
			}
			else {
				d1.display();
			}

		}
		cout << "use again press 1<<ok\n";
		cin >> again;
	} while (again == 1);


	/*stdr s1;
	s1.accept();
	s1.display();

	dlxr d1;
	d1.accept();
	d1.display();*/

	return 0;
}
