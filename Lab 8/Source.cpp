#include <iostream>
#include <list>
#include <ctime>
using namespace std;

bool isOdd(const int& value) { return value % 2 != 0; }

void base() {

	/*Создать линейный однонаправленый список из вещественных чисел. Вставить в список число 0.99 после
	первого элементом со значение 22.*/
	srand((unsigned)time(0));

	list<double> l = { 10, 2, 22, -14, 5.5 };

	list<double>::iterator p = l.begin();
	for (; p != l.end(); ++p)
		cout << *p << ' ';
	cout << endl;

	for (p = l.begin(); p != l.end();)
	{
		if (*p == 22)
		{
			l.insert(++p, 0.99);
		}
		else
			++p;
	}
	cout << endl;
	for (p = l.begin(); p != l.end(); ++p)
		cout << *p << ' ';
	cout << endl;
 
    
}
void middle() {

	/*Создать линейный двунаправленный список из целых чисел. 
	Вставить в список число 66 после каждого элемента с отрицательным значением.*/
	srand((unsigned)time(0));

	list<int> Li;
	for (int i = 0; i < 50; i++)
		Li.push_back(rand() % 100 - 50);

	std::list<int>::iterator p = Li.begin();
	for (; p != Li.end(); ++p)
		cout << *p << ' ';
	cout << endl;

	for (p = Li.begin(); p != Li.end();)
	{
		if (*p < 0)
		{
			Li.insert(++p, 66);
		}
		else
			++p;
	}

	cout << endl;
	for (p = Li.begin(); p != Li.end(); ++p)
		cout << *p << ' ';
	cout << endl;

}
void hard() {

	/*Дан указатель Р1 на первый элемент двусвязного списка, содержащего не менее двух элементов.
	Удалить из списка все элементы с нечетныминомерами и вывести указатель на первый элемент из списа
	освоюождать память, которую они знимали.*/
	
	srand(time(0));
	list<int> mylist;
	for (int i = 0; i < rand() % 9 + 2; i++)
	{
		mylist.push_back(rand() % 30);
		cout << mylist.back() << "\t";
	}
	//указатель на первый элемент
	int* p1 = &mylist.front();
	cout << "\nList first element pointer: " << p1;

	//удаление нечетных элементов
	mylist.remove_if(isOdd);

	//вывод указателя на первый элемент, если список не пуст
	if (!mylist.empty())
	{
		p1 = &mylist.front();
		cout << "\nUpdated list first element pointer: " << p1;
	}
	else
	{
		cout << "\nUpdated list is empty";
	}
}
int main()
{
	
	base();
	middle();
	hard();
	
}