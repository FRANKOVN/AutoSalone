#pragma once

#include "Auto.h"

namespace AutoSalone {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormCard
	/// </summary>
	public ref class FormCard : public System::Windows::Forms::Form
	{
	public:
		FormCard(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormCard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	public: System::Windows::Forms::ComboBox^  comboBoxMark;
	private:
	public: System::Windows::Forms::ComboBox^  comboBoxBox;
	public: System::Windows::Forms::ComboBox^  comboBoxBody;
	public: System::Windows::Forms::ComboBox^  comboBoxEngine;
	public: System::Windows::Forms::ComboBox^  comboBoxDrive;
	public: System::Windows::Forms::ComboBox^  comboBoxWheel;
	public: System::Windows::Forms::TextBox^  textBoxPower;
	public: System::Windows::Forms::TextBox^  textBoxYear;
	public: System::Windows::Forms::TextBox^  textBoxCost;




















	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->comboBoxMark = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxBox = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxBody = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxEngine = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxDrive = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxWheel = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxPower = (gcnew System::Windows::Forms::TextBox());
			this->textBoxYear = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCost = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Марка";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Коробка передач";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Тип кузова";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 126);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Двигатель";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(16, 157);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(45, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Привод";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(16, 190);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(31, 13);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Руль";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(16, 221);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(78, 13);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Мощность(лс)";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(16, 254);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(71, 13);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Год выпуска";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(16, 289);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(33, 13);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Цена";
			// 
			// comboBoxMark
			// 
			this->comboBoxMark->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxMark->FormattingEnabled = true;
			this->comboBoxMark->Location = System::Drawing::Point(129, 25);
			this->comboBoxMark->Name = L"comboBoxMark";
			this->comboBoxMark->Size = System::Drawing::Size(196, 21);
			this->comboBoxMark->TabIndex = 1;
			// 
			// comboBoxBox
			// 
			this->comboBoxBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxBox->FormattingEnabled = true;
			this->comboBoxBox->Location = System::Drawing::Point(129, 55);
			this->comboBoxBox->Name = L"comboBoxBox";
			this->comboBoxBox->Size = System::Drawing::Size(196, 21);
			this->comboBoxBox->TabIndex = 1;
			// 
			// comboBoxBody
			// 
			this->comboBoxBody->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxBody->FormattingEnabled = true;
			this->comboBoxBody->Location = System::Drawing::Point(129, 86);
			this->comboBoxBody->Name = L"comboBoxBody";
			this->comboBoxBody->Size = System::Drawing::Size(196, 21);
			this->comboBoxBody->TabIndex = 1;
			// 
			// comboBoxEngine
			// 
			this->comboBoxEngine->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxEngine->FormattingEnabled = true;
			this->comboBoxEngine->Location = System::Drawing::Point(129, 118);
			this->comboBoxEngine->Name = L"comboBoxEngine";
			this->comboBoxEngine->Size = System::Drawing::Size(196, 21);
			this->comboBoxEngine->TabIndex = 1;
			// 
			// comboBoxDrive
			// 
			this->comboBoxDrive->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxDrive->FormattingEnabled = true;
			this->comboBoxDrive->Location = System::Drawing::Point(129, 149);
			this->comboBoxDrive->Name = L"comboBoxDrive";
			this->comboBoxDrive->Size = System::Drawing::Size(196, 21);
			this->comboBoxDrive->TabIndex = 1;
			// 
			// comboBoxWheel
			// 
			this->comboBoxWheel->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxWheel->FormattingEnabled = true;
			this->comboBoxWheel->Location = System::Drawing::Point(129, 182);
			this->comboBoxWheel->Name = L"comboBoxWheel";
			this->comboBoxWheel->Size = System::Drawing::Size(196, 21);
			this->comboBoxWheel->TabIndex = 1;
			// 
			// textBoxPower
			// 
			this->textBoxPower->Location = System::Drawing::Point(129, 219);
			this->textBoxPower->Name = L"textBoxPower";
			this->textBoxPower->Size = System::Drawing::Size(191, 20);
			this->textBoxPower->TabIndex = 2;
			this->textBoxPower->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBoxPower->Leave += gcnew System::EventHandler(this, &FormCard::CheckOkay);
			// 
			// textBoxYear
			// 
			this->textBoxYear->Location = System::Drawing::Point(129, 254);
			this->textBoxYear->Name = L"textBoxYear";
			this->textBoxYear->Size = System::Drawing::Size(191, 20);
			this->textBoxYear->TabIndex = 2;
			this->textBoxYear->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBoxYear->Leave += gcnew System::EventHandler(this, &FormCard::CheckOkay);
			// 
			// textBoxCost
			// 
			this->textBoxCost->Location = System::Drawing::Point(129, 286);
			this->textBoxCost->Name = L"textBoxCost";
			this->textBoxCost->Size = System::Drawing::Size(191, 20);
			this->textBoxCost->TabIndex = 2;
			this->textBoxCost->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBoxCost->Leave += gcnew System::EventHandler(this, &FormCard::CheckOkay);
			// 
			// button1
			// 
			this->button1->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->button1->Location = System::Drawing::Point(17, 327);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormCard::button1_Click);
			// 
			// button2
			// 
			this->button2->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button2->Location = System::Drawing::Point(245, 327);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Отмена";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// FormCard
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->button2;
			this->ClientSize = System::Drawing::Size(336, 372);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBoxCost);
			this->Controls->Add(this->textBoxYear);
			this->Controls->Add(this->textBoxPower);
			this->Controls->Add(this->comboBoxWheel);
			this->Controls->Add(this->comboBoxDrive);
			this->Controls->Add(this->comboBoxEngine);
			this->Controls->Add(this->comboBoxBody);
			this->Controls->Add(this->comboBoxBox);
			this->Controls->Add(this->comboBoxMark);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"FormCard";
			this->Text = L"Карточка автомобиля";
			this->Load += gcnew System::EventHandler(this, &FormCard::FormCard_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool CanOK = true; //Разрешение показа кнопки OK
	public: Auto^ A = nullptr; //Редактируемый автомобиль
	//Заполнить combo из списков на главной форме
	public: void FillCombo(ComboBox^ combo, CheckedListBox^ list)
	{
		combo->Items->Clear();
		for each (String^ s in list->Items)
			combo->Items->Add(s);
		combo->SelectedIndex = 0;
	}
	//Контроль правильности заполнения
	private: void SetOK()
	{
		//Проверить правильность всего, если что то не так - то кнопку не показывать
		button1->Visible = false;
		//Если неверно указана цена
		double d;
		if (!double::TryParse(textBoxCost->Text, d)) return;
		//или год
		int y;
		if (!int::TryParse(textBoxYear->Text, y)) return;
		//или мощность
		if (!double::TryParse(textBoxPower->Text, d)) return;
		button1->Visible = CanOK;
	}

	private: System::Void FormCard_Load(System::Object^  sender, System::EventArgs^  e)
	{
		SetOK();
	}
			 //Выбран!
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		A->Mark = comboBoxMark->Text;
		A->Body = comboBoxBody->Text;
		A->Box = comboBoxBox->Text;
		A->Drive = comboBoxDrive->Text;
		A->Engine = comboBoxEngine->Text;
		A->Wheel = comboBoxWheel->Text;
		A->Cost = double::Parse(textBoxCost->Text);
		A->Power = double::Parse(textBoxPower->Text);
		A->Year = int::Parse(textBoxYear->Text);
	}
private: System::Void CheckOkay(System::Object^  sender, System::EventArgs^  e) {
	SetOK();
}
};
}
