#include"BaseEntity.cpp"
#include<iostream>
class teacher : public BaseEntity {
	
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