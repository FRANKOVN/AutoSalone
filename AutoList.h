#pragma once
#include "Auto.h"
using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;

/*
Класс - контейнер для автомобилей
*/
public ref class AutoList
{
	//Данные - список автомобилей
	List<Auto^>^ data = gcnew List<Auto^>();
public:

	AutoList() //Конструктор по умолчанию
	{
	}

	//Конструктор с загрузкой из файла
	AutoList(String^ FileName):AutoList()
	{
		LoadFromFile(FileName);
	}

	//Добавить
	void Add(Auto^ a)
	{
		data->Add(a);
	}

	//Удалить
	void RemoveAt(int index)
	{
		data->RemoveAt(index);
	}

	//Размер
	property int Count
	{
		int get() { return data->Count; }
	}

	//из файла
	void LoadFromFile(String^ FileName)
	{
		data->Clear();
		if (!File::Exists(FileName)) return; //Нет файла - нет и автомобилей
		StreamReader^ stream = gcnew StreamReader(FileName);
		int N = int::Parse(stream->ReadLine());
		for (int k = 0; k < N; k++)
			data->Add(gcnew Auto(stream));
		stream->Close();
	}

	//В файл
	void SaveToFile(String^ FileName)
	{
		StreamWriter^ stream = gcnew StreamWriter(FileName);
		stream->WriteLine(Count);
		for each (Auto^ a in data)
			a->SaveToStream(stream);
		stream->Close();
	}

	//Индексатор
	Auto^ operator [](int index)
	{
		return data[index]; 
	}

	void RemoveByID(int id)
	{
		for (int k = 0; k < Count; k++)
			if (data[k]->Id == id)
			{
				RemoveAt(k);
				return;
			}
	}

};

