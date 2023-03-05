#include <iostream>
#include <string>

using namespace std;
class Player {

	int id;
	static int count;
public:
	Player() {
		++count;
	}

	Player(int id) {
		this->id = id;
		++count;
	}

	Player(const Player& obj) {
		id = obj.id;
		++count;
	}

	int getId() {
		return id;
	}

	static int getNoOfObjects() {
		return count;
	}

	~Player() {
		--count;
	}
};
int Player::count = 0;

int foo(Player& var) {
	int val = var.getId();
	cout << Player::getNoOfObjects() << endl;
	return val;
}
Player bar(Player var) {
	Player temp(var);
	cout << Player::getNoOfObjects() << endl;
	return temp;
}

void main() {

	Player obj1, obj2(1234);
	cout << Player::getNoOfObjects() << endl;

	Player obj3(obj2);
	cout << Player::getNoOfObjects() << endl;

	Player obj4 = obj3;
	cout << Player::getNoOfObjects() << endl;

	foo(obj3);
	cout << Player::getNoOfObjects() << endl;

	Player obj5 = bar(obj4);
	cout << Player::getNoOfObjects() << endl;

	bar(obj5);
	cout << Player::getNoOfObjects() << endl;
}
