#pragma once
/*
Класс "Автомобиль"
*/
using namespace System;
using namespace System::IO;

public ref class Auto
{
	//Уникальный номер - идентификатор
	int ID;
	//для генерации уникального номера-идентификатора
	static int id = 0;

	//Описание параметров
	String^ mark = "";
	String^ box = "";
	String^ body = "";
	String^ engine = "";
	String^ wheel = "";
	String^ drive = "";
	double power = 0; //мощность
	int year = 0; //год выпуска
	double cost = 0; //цена
	bool reserved = false; //Забронировано


public:

	static double Discount = 0; //Скидка для текущего клиента

	Auto()
	{
		ID = ++id;
	}

	//Конструктор "из потока"
	Auto(StreamReader^ stream):Auto()
	{
		LoadFromStream(stream);
	}

	//Свойства
	property String^ Mark
	{
		String^ get() { return mark; }
		void set(String^ value) { mark = value; }
	}
	property String^ Box
	{
		String^ get() { return box; }
		void set(String^ value) { box = value; }
	}
	property String^ Body
	{
		String^ get() { return body; }
		void set(String^ value) { body = value; }
	}
	property String^ Engine
	{
		String^ get() { return engine; }
		void set(String^ value) { engine = value; }
	}
	property String^ Wheel
	{
		String^ get() { return wheel; }
		void set(String^ value) { wheel = value; }
	}
	property String^ Drive
	{
		String^ get() { return drive; }
		void set(String^ value) { drive = value; }
	}
	property double Power
	{
		double get() { return power; }
		void set(double value) { if (value>=0) power = value; }
	}

	property double Cost
	{
		double get() { return cost*(1-Discount/100); }
		void set(double value) { if (value >= 0) cost = value; }
	}
	property int Year
	{
		int get() { return year; }
		void set(int value) { if (value >= 0) year = value; }
	}

	property int Id
	{
		int get() { return ID; }
	}

	property bool Reserved
	{
		bool get() { return reserved; }
		void set(bool value) { reserved = value; }
	}

	//Сохранить в поток
	void SaveToStream(StreamWriter^ stream)
	{
		stream->WriteLine(mark);
		stream->WriteLine(box);
		stream->WriteLine(body);
		stream->WriteLine(engine);
		stream->WriteLine(wheel);
		stream->WriteLine(drive);
		stream->WriteLine(power);
		stream->WriteLine(year);
		stream->WriteLine(cost);
		stream->WriteLine(reserved);
	}
	//Загрузить из потока
	void LoadFromStream(StreamReader^ stream)
	{
		mark = stream->ReadLine();
		box = stream->ReadLine();
		body = stream->ReadLine();
		engine = stream->ReadLine();
		wheel = stream->ReadLine();
		drive = stream->ReadLine();
		power = double::Parse(stream->ReadLine());
		year = int::Parse(stream->ReadLine());
		cost = double::Parse(stream->ReadLine());
		reserved = bool::Parse(stream->ReadLine());
	}

	//В виде строки
	String^ ToString() override
	{
		String^ result = "";
		if (reserved) result += " Забронировано";
		result += " Марка " + mark;
		result += " Цена " + Cost.ToString();
		result += " Коробка " + box;
		result += " Кузов " + body;
		result += " Двигатель " + engine;
		result += " Мощность " + power.ToString();
		result += " Привод " + drive;
		result += " Руль " + wheel;
		result += " Год " + year.ToString();
		return result;
	}

};

