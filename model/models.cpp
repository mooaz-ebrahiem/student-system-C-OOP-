#include<iostream>
using namespace std;
//class inhertince
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

void setPhoneNumber(string phonenumber) {
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
}};
//class students
class Teacher{
};
class Student {
 private:

 double gpa;
 Teacher teacher[5];
	public:

		void setTeacher(Teacher teacher[5]) {
			for (int i = 0; i < 5; i++) {
				this->teacher[i] = teacher[i];
            }

		}
	void setGpa(double gpa) {
	this->gpa = gpa;

	}
	double getGpa() {
	return gpa;
	Teacher*getTeacher() {
		return teacher;
	}
	}
};
//class techer 
class Teacher : public BaseEntity {

	private:
	double salary;
	public:
	void setSalary(double salary) {
		this->salary = salary;
	}
	double getSalary() {
		return salary;
	}
};