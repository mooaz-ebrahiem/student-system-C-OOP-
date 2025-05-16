#include<iostream>
using namespace std;
class BaseEntity {
private:
	string name;
	int id
		int age;
	string phonenumber;
public:
	void setName(int name) {
		this->name = name;
	}
	void setId(int id) {
		this->id = id;
	}
	
	}void setPhoneNumber(string phonenumber) {
		this->phonenumber = phonenumber;
	}
	void setAge(int age) {
		this->age = age;
	}
	string getName() {
		return name;
	}
	int getAge() {
		return age;
	}
	string getNumber() {
		return phonenumber;
	}
	int getId() {
		return id;
	}
	

};