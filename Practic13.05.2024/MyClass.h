#pragma once
#include <iostream>
#include <cmath>
using namespace std;
/*
Создайте класс Circle (окружность):
■ Реализуйте через перегруженные операторы;
■ Проверка на равенство радиусов двух окружностей (
операция = =);
■ Сравнения длин двух окружностей (операция >).
Пропорциональное изменение размеров окружности, путем
изменения ее радиуса (операция += и -=)
*/

class Circle {
	const double PI = 3.14;
	int radius = 0;

	double getLenth(int r) {
		return 2 * PI * r;
	}
	
public:
	Circle() = default;
	explicit Circle(int r): radius{r}{}

	bool operator==(Circle c) {
		return this->radius == c.radius;	
	}
	bool operator !=(Circle c) {
		return !(*this == c);
		//return this->radius != c.radius;
	}

	bool operator>(Circle c) {
		//return getLenth(this->radius) > getLenth(c.radius);
		return !(*this < c);
	}
	bool operator<(Circle c) {
		return getLenth(this->radius) < getLenth(c.radius);
		//return !(*this > c);
	}

	void operator+=(Circle c){
		this->radius +=  c.radius;
	}
	void operator+=(int c) {
		this->radius += c;
	}
	void operator-=(Circle c) {
		this->radius -= c.radius;
	}


	void print() {
		std::cout << radius;
	}
	// для вывода в консоль
	friend ostream& operator<<(ostream& out, Circle& c);
	// для ввода в консоль
	friend istream& operator>>(istream& in, Circle& c);
};

