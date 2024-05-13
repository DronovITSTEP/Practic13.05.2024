#pragma once
#include <iostream>
using namespace std;

/*
—оздать класс Airplane (самолет)
— помощью перегрузки операторов реализовать:
? ѕроверка на равенство типов самолетов (операци€ = =)
? ”величение и уменьшение пассажиров в салоне самолета
(операции ++ и - - в префиксной форме)
? —равнение двух самолетов по максимально
возможному количеству пассажиров на борту (операци€>)
*/
class Airplane
{
	char plane[20];
	int num;
public:
	Airplane(char plane[], int num) :num{num} 
	{
		strcpy_s(this->plane, plane);
	}
	bool operator==(Airplane a) {
		return !strcmp(this->plane, a.plane);
	}
	void operator++() {
		this->num++;
	}
	void operator--() {
		this->num--;
	}
	bool operator>(Airplane a) {
		return this->num > a.num;
	}
	bool operator<(Airplane a) {
		return !(*this > a);
	}
};

