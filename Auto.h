#pragma once
/*
����� "����������"
*/
using namespace System;
using namespace System::IO;

public ref class Auto
{
	//���������� ����� - �������������
	int ID;
	//��� ��������� ����������� ������-��������������
	static int id = 0;

	//�������� ����������
	String^ mark = "";
	String^ box = "";
	String^ body = "";
	String^ engine = "";
	String^ wheel = "";
	String^ drive = "";
	double power = 0; //��������
	int year = 0; //��� �������
	double cost = 0; //����
	bool reserved = false; //�������������


public:

	static double Discount = 0; //������ ��� �������� �������

	Auto()
	{
		ID = ++id;
	}

	//����������� "�� ������"
	Auto(StreamReader^ stream):Auto()
	{
		LoadFromStream(stream);
	}

	//��������
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

	//��������� � �����
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
	//��������� �� ������
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

	//� ���� ������
	String^ ToString() override
	{
		String^ result = "";
		if (reserved) result += " �������������";
		result += " ����� " + mark;
		result += " ���� " + Cost.ToString();
		result += " ������� " + box;
		result += " ����� " + body;
		result += " ��������� " + engine;
		result += " �������� " + power.ToString();
		result += " ������ " + drive;
		result += " ���� " + wheel;
		result += " ��� " + year.ToString();
		return result;
	}

};

