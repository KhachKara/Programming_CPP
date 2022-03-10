// Описание класса:
class MyMoney {
	public:
// Поля:
		string name;
		double money;
		double rate;
		int time;
// Методы:
		double getMoney() {
			double s=money;
			for(int k=1; k<=time; k++) {
				s*=(1+rate/100);
			}
			return s;
		}
		void showAll() {
			cout<<"Имя: "<<name<<endl;
			cout<<"Вклад: "<<money<<endl;
			cout<<"Ставка (%): "<<rate<<endl;
			cout<<"Период (лет): "<<time<<endl;
			cout<<"Итоговая сумма: "<<getMoney()<<endl;
		}
};