#include<iostream>
using namespace std;
class Course;
//class course
class BaseEntity {
	protected:
	   string name;
	   int id;
	   double hour;

		int age;
	string phonenumber;
	public:
	void setName(string name) {
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
class Teacher : public BaseEntity {

private:
	double salary;
	int StudentId[5];
public:
	void setSalary(double salary) {
		this->salary = salary;
	}
	void setStudentId(int StudentId[5]) {
		for (int i = 0; i < 5; i++) {
			this->StudentId[i] = StudentId[i];
		}
	}

	int* getStudentId() {
		return StudentId;
	}
	double getSalary() {
		return salary;
	}
};
class Student :public BaseEntity {
 private:

 double gpa;
 Teacher teacher[5];
 Course course[5];
	public:

		void setTeacher(Teacher teacher[5]) {
			for (int i = 0; i < 5; i++) {
				this->teacher[i] = teacher[i];
            }

		}
	void setGpa(double gpa) {
	this->gpa = gpa;

	}
	void setCourse(Course course[5]) {
		for (int i = 0; i < 5; i++) {
			this->course[i] = course[i];
		}
	}
	double getGpa() {
		return gpa;
	}
	Teacher*getTeacher() {
		return teacher;
	}
	Course* getCourse() {
		return course;
	}
};
class Course:public BaseEntity {
private:
	int StudentId[5];
public:
	void setHour(double hour) {
		this->hour = hour;
	}
	void setName(string name) {
		this->name = name;
	}
	void setId(int id) {
		this->id = id;
	}
	int getId() {
		return id;
	}
	string getName() {
		return name;
	}
	double getHour() {
		return hour;
	}
	void setStudentId(int StudentId[5]) {
		for (int i = 0; i < 5; i++) {
			this->StudentId[i] = StudentId[i];
		}
	}

	int* getStudentId() {
		return StudentId;
	}


};