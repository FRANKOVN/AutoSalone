#pragma once
#include "Auto.h"
using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;

/*
����� - ��������� ��� �����������
*/
public ref class AutoList
{
	//������ - ������ �����������
	List<Auto^>^ data = gcnew List<Auto^>();
public:

	AutoList() //����������� �� ���������
	{
	}

	//����������� � ��������� �� �����
	AutoList(String^ FileName):AutoList()
	{
		LoadFromFile(FileName);
	}

	//��������
	void Add(Auto^ a)
	{
		data->Add(a);
	}

	//�������
	void RemoveAt(int index)
	{
		data->RemoveAt(index);
	}

	//������
	property int Count
	{
		int get() { return data->Count; }
	}

	//�� �����
	void LoadFromFile(String^ FileName)
	{
		data->Clear();
		if (!File::Exists(FileName)) return; //��� ����� - ��� � �����������
		StreamReader^ stream = gcnew StreamReader(FileName);
		int N = int::Parse(stream->ReadLine());
		for (int k = 0; k < N; k++)
			data->Add(gcnew Auto(stream));
		stream->Close();
	}

	//� ����
	void SaveToFile(String^ FileName)
	{
		StreamWriter^ stream = gcnew StreamWriter(FileName);
		stream->WriteLine(Count);
		for each (Auto^ a in data)
			a->SaveToStream(stream);
		stream->Close();
	}

	//����������
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

