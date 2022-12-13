#include <iostream>
#include <string>
using namespace std;


class t_shirt {  //родительский класс
public:
	int colvos;//поле
	string color;//поле
	void material() {//метод
		cout << "хлопок 100%" << endl;
	}
};

class over_size : public t_shirt //дочерний класс от футболки
{
public:
	string shop;//поле
	string prodave;//поле
	void country() { //метод
		cout << "США" << endl;
	}
};

class fashionable : public t_shirt //дочерний класс от футболки
{
public:
	string shop;//поле
	string prodave;//поле
	void country() { //метод
		cout << "Германия" << endl;
	}
};

class human { //родительский класс
public:
	int age; //поле
	int height;//поле
	void doxod() { //метод
		cout << "средний" << endl;
	}
};

class korean : public human { //дочерний класс от человека
public:
	string from_where;//поле
	string where_now;//поле
	void country() { //метод
		cout << "Корея" << endl;
	}
};

class american : public human { //дочерний класс от человека

public:
	string from_where;//поле
	string where_now;//поле
	void country() { //метод
		cout << "США" << endl;
	}
};



int main()
{ //дочернему классу доступны поля из родительского класса
	setlocale(LC_ALL, "Russian");
	cout << "футболка MARSELO" << endl;
	fashionable marselo;
	marselo.colvos = 5;
	marselo.color = "чёрный";
	cout << "Материал ";
	marselo.material();
	cout << "Страна производства ";
	marselo.country();
	marselo.shop = "MARCELOMIRACLES";
	cout << "Количество " << marselo.colvos << endl;
	cout << "Цвет " << marselo.color << endl;
	cout << "Магазин " << marselo.shop << endl << endl;

	cout << "оверсайз футболка HALIKY" << endl;
	over_size haliky;
	haliky.colvos = 10;
	haliky.color = "белый";
	cout << "Материал ";
	haliky.material();
	cout << "Страна производства ";
	haliky.country();
	haliky.shop = "HALIKYSPR";
	cout << "Количество " << haliky.colvos << endl;
	cout << "Цвет " << haliky.color << endl;
	cout << "Магазин " << haliky.shop << endl << endl;

	cout << "девушка модель кореянка" << endl;
	korean girl;
	girl.age = 20;
	cout << "Страна рождения ";
	girl.country();
	girl.from_where = "Сеул";
	cout << "доход ";
	girl.doxod();
	girl.height = 173;
	girl.where_now = "Милан";
	cout << "Возраст " << girl.age << endl;
	cout << "Рост " << girl.height << endl;
	cout << "Откуда " << girl.from_where << endl;
	cout << "Где находится сейчас " << girl.where_now << endl << endl;

	cout << "Парень модель американец" << endl;
	american boy;
	boy.age = 17;
	cout << "Страна рождения ";
	boy.country();
	boy.from_where = "Чикаго";
	cout << "доход ";
	boy.doxod();
	boy.height = 190;
	boy.where_now = "Париж";
	cout << "Возраст " << boy.age << endl;
	cout << "Рост " << boy.height << endl;
	cout << "Откуда " << boy.from_where << endl;
	cout << "Где находится сейчас " << boy.where_now << endl << endl;

}
