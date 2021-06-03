#include "Element.h"
#include "Iterator.h"
#include "Element.cpp"
#include "Iterator.cpp"
#include "ForwardList.h"
#include "ForwardListAnotherOne.cpp"

//#define BaseCheck
//#define IteratorCheck
//#define RangeBasedArray
//#define RangeBasedList

int main()
{
	setlocale(LC_ALL, "");
	system("color 0A");



#ifdef BaseCheck
	int n;
	cout << "Введите размер списка: "; cin >> n;

	ForwardList<int> List;

	for (int i = 0; i < n; i++)
	{
		List.push_back(rand() % 100);
	}
	List = List;
	List.Print();
#endif // BaseCheck

#ifdef IteratorCheck
	for (Iterator it = List.getHead(); it != nullptr; it++)
	{
		*it = rand() % 100;
	}

	List.Print();
#endif // IteratorCheck




#ifdef BaseCheck
	/*cout << delimiter << endl;
List.pop_front();
List.Print();
cout << delimiter << endl;
List.pop_back();
List.Print();*/
	int value;
	int index;
	cout << "Добавить: "; cin >> value;
	cout << "Индекс: "; cin >> index;
	List.insert(value, index);
	List.Print();
	cout << "Введите индекс удаляемого элемента: "; cin >> index;
	List.erase(index);
	List.Print();
#endif // BaseCheck


	/*
	cout << "Ещё 1 список:\n";
	ForwardList List2;
	List2.push_back(3);
	List2.push_back(2);
	List2.push_back(1);
	List2.Print();*/

	//ForwardList List2(List); // CopyConstructor - Во время создания
	//List2.Print();

	//ForwardList List3;
	//List3 = List2; // CopyAssignment - После создания
	//List3.Print();

#ifdef RangeBasedArray
	int arr[] = { 3, 5, 8, 13, 21 };
	cout << size(arr) << endl;
	for (int i = 0; i < size(arr); i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	for (int i : arr) // Range-based for (Цикл for для диапазона, для контейнера)
	{
		cout << i << tab;
	}
	cout << endl;
#endif // RangeBasedArray

#ifdef RangeBasedList
	ForwardList<int> List = { 3,5,8,13,21 };
	List.Print();
	for (int i : List)
	{
		cout << i << tab;
	}
	cout << endl;
#endif // RangeBasedList


	ForwardList<double> List = { 2.5, 3.14, 8.3, 5.4, 7.2 };
	for (double i : List)
	{
		cout << i << tab;
	}
	cout << endl;
}