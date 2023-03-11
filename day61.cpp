#include<iostream>
using namespace std;

class Employee {
	float hoursWorked;
	float ratePerHour;

public:
	Employee(float hw, float rph) :hoursWorked(hw), ratePerHour(rph) {}
	virtual void displaySalary() {
	float salary= hoursWorked * ratePerHour;
		cout << "Salary: " << salary;
	}
};
class Manager :public Employee {
	int bonus;

public:
	Manager(float hw, float rph) :bonus(0), Employee(hw, rph) {}

	void addBonus(int amount) {
		bonus += amount;
		//cout << bonus << endl;
	}
	void displaySalary() {
		Employee::displaySalary();
	}
};
int main()
{
	Employee employee1(100, 800);
	employee1.displaySalary();
	cout<< endl;

	Manager manager1(50, 1000);
	manager1.addBonus(1000);
	manager1.addBonus(3000);
	manager1.displaySalary();
	cout << endl;
Employee* employee2 = &manager1;
	//employee2->addBous(1000);			//Doesn't work
	employee2->displaySalary();
	cout << endl;

	Employee* employee3=new Employee(100, 800);
	Manager* manager2 = (Manager*)employee3;
	manager2->addBonus(5000);
	manager2->displaySalary();
	cout << endl;

	Manager* manager3 = (Manager*)employee2;
	manager3->addBonus(5000);		               // ??
	manager3->displaySalary();			//Output same as that of manager1
	cout << endl;

	manager1.displaySalary();
	cout << endl;

	return 0;
}
