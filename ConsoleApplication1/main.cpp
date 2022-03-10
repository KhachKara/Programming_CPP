#include<iostream>
#include <cstdlib>
#include <MyMoney.cpp>

using namespace std;

int main() {
// Изменение кодировки консоли:
	system("chcp 1251>nul");
// Создание объекта:
	MyMoney obj;
// Присваивание значений полям:
	obj.name="Иванов Иван Иванович";
	obj.money=1000;
	obj.rate=8;
	obj.time=5;
// Вызов метода:
	obj.showAll();
// Задержка консольного окна:
	system("pause>nul");
	return 0;
}