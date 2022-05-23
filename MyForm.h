#pragma once

/*
Марка: Audi BMW Chevrolet Ford Honda Hyundai Kia Lexus Mazda Nissan Volkswagen справочник
Цена (от до)
Год выпуска (от до)
Коробка передач: Автомат Вариатор Робот Механика
Тип кузова: внедорожник кабриолет купе микроавтобус минивэн пикап седан универсал фургон хетчбэк
Двигатель: бензин газ гибрид дизель электро
Привод: задний передний полный
Руль левый правый
Мощность (лс) (от до)
*/
#include "Auto.h"
#include "AutoList.h"
#include "FormLogin.h"
#include "FormCard.h"

namespace AutoSalone {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox;
	protected:


	private: System::Windows::Forms::ListBox^  listBox;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::CheckedListBox^  checkedListBoxMark;



	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::CheckedListBox^  checkedListBoxBody;

	private: System::Windows::Forms::CheckedListBox^  checkedListBoxBox;
	private: System::Windows::Forms::CheckedListBox^  checkedListBoxEngine;


	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::CheckedListBox^  checkedListBoxDrive;
	private: System::Windows::Forms::TextBox^  textBoxCostTo;


	private: System::Windows::Forms::TextBox^  textBoxCostFrom;

	private: System::Windows::Forms::CheckedListBox^  checkedListBoxWheel;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBoxYearTo;
	private: System::Windows::Forms::TextBox^  textBoxPowerTo;


	private: System::Windows::Forms::TextBox^  textBoxYearFrom;
	private: System::Windows::Forms::TextBox^  textBoxPowerFrom;


	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Button^  buttonWheel0;
	private: System::Windows::Forms::Button^  buttonWheelA;
	private: System::Windows::Forms::Button^  buttonDrive0;
	private: System::Windows::Forms::Button^  buttonDriveA;
	private: System::Windows::Forms::Button^  buttonEngine0;
	private: System::Windows::Forms::Button^  buttonEngineA;
	private: System::Windows::Forms::Button^  buttonBody0;
	private: System::Windows::Forms::Button^  buttonBodyA;
	private: System::Windows::Forms::Button^  buttonBox0;
	private: System::Windows::Forms::Button^  buttonBoxA;
	private: System::Windows::Forms::CheckBox^  checkBoxIgnorePower;













	private: System::Windows::Forms::CheckBox^  checkBoxIgnoreYear;

	private: System::Windows::Forms::CheckBox^  checkBoxIgnoreCost;
	private: System::Windows::Forms::Button^  buttonEditList;


	private: System::Windows::Forms::Button^  buttonEditMark;

	private: System::Windows::Forms::Button^  buttonMark0;
	private: System::Windows::Forms::Button^  buttonMarkA;
	private: System::Windows::Forms::Button^  buttonFind;
	private: System::Windows::Forms::Button^  buttonIAmAdmin;
	private: System::Windows::Forms::Button^  buttonAdd;
	private: System::Windows::Forms::Button^  buttonDelete;
	private: System::Windows::Forms::CheckBox^  checkBox;
private: System::Windows::Forms::TextBox^  textBoxDis;

	private: System::Windows::Forms::Label^  label17;





	protected:

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
			this->groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->buttonWheel0 = (gcnew System::Windows::Forms::Button());
			this->buttonWheelA = (gcnew System::Windows::Forms::Button());
			this->buttonDrive0 = (gcnew System::Windows::Forms::Button());
			this->buttonDriveA = (gcnew System::Windows::Forms::Button());
			this->buttonEngine0 = (gcnew System::Windows::Forms::Button());
			this->buttonEngineA = (gcnew System::Windows::Forms::Button());
			this->buttonBody0 = (gcnew System::Windows::Forms::Button());
			this->buttonBodyA = (gcnew System::Windows::Forms::Button());
			this->buttonMark0 = (gcnew System::Windows::Forms::Button());
			this->buttonMarkA = (gcnew System::Windows::Forms::Button());
			this->buttonBox0 = (gcnew System::Windows::Forms::Button());
			this->buttonBoxA = (gcnew System::Windows::Forms::Button());
			this->checkBoxIgnorePower = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxIgnoreYear = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxIgnoreCost = (gcnew System::Windows::Forms::CheckBox());
			this->textBoxYearTo = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPowerTo = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCostTo = (gcnew System::Windows::Forms::TextBox());
			this->textBoxYearFrom = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPowerFrom = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCostFrom = (gcnew System::Windows::Forms::TextBox());
			this->checkedListBoxWheel = (gcnew System::Windows::Forms::CheckedListBox());
			this->checkedListBoxDrive = (gcnew System::Windows::Forms::CheckedListBox());
			this->checkedListBoxEngine = (gcnew System::Windows::Forms::CheckedListBox());
			this->checkedListBoxBody = (gcnew System::Windows::Forms::CheckedListBox());
			this->checkedListBoxBox = (gcnew System::Windows::Forms::CheckedListBox());
			this->checkedListBoxMark = (gcnew System::Windows::Forms::CheckedListBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listBox = (gcnew System::Windows::Forms::ListBox());
			this->buttonEditList = (gcnew System::Windows::Forms::Button());
			this->buttonEditMark = (gcnew System::Windows::Forms::Button());
			this->buttonFind = (gcnew System::Windows::Forms::Button());
			this->buttonIAmAdmin = (gcnew System::Windows::Forms::Button());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->textBoxDis = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->groupBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox
			// 
			this->groupBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox->Controls->Add(this->buttonWheel0);
			this->groupBox->Controls->Add(this->buttonWheelA);
			this->groupBox->Controls->Add(this->buttonDrive0);
			this->groupBox->Controls->Add(this->buttonDriveA);
			this->groupBox->Controls->Add(this->buttonEngine0);
			this->groupBox->Controls->Add(this->buttonEngineA);
			this->groupBox->Controls->Add(this->buttonBody0);
			this->groupBox->Controls->Add(this->buttonBodyA);
			this->groupBox->Controls->Add(this->buttonMark0);
			this->groupBox->Controls->Add(this->buttonMarkA);
			this->groupBox->Controls->Add(this->buttonBox0);
			this->groupBox->Controls->Add(this->buttonBoxA);
			this->groupBox->Controls->Add(this->checkBoxIgnorePower);
			this->groupBox->Controls->Add(this->checkBoxIgnoreYear);
			this->groupBox->Controls->Add(this->checkBoxIgnoreCost);
			this->groupBox->Controls->Add(this->textBoxYearTo);
			this->groupBox->Controls->Add(this->textBoxPowerTo);
			this->groupBox->Controls->Add(this->textBoxCostTo);
			this->groupBox->Controls->Add(this->textBoxYearFrom);
			this->groupBox->Controls->Add(this->textBoxPowerFrom);
			this->groupBox->Controls->Add(this->textBoxCostFrom);
			this->groupBox->Controls->Add(this->checkedListBoxWheel);
			this->groupBox->Controls->Add(this->checkedListBoxDrive);
			this->groupBox->Controls->Add(this->checkedListBoxEngine);
			this->groupBox->Controls->Add(this->checkedListBoxBody);
			this->groupBox->Controls->Add(this->checkedListBoxBox);
			this->groupBox->Controls->Add(this->checkedListBoxMark);
			this->groupBox->Controls->Add(this->label10);
			this->groupBox->Controls->Add(this->label9);
			this->groupBox->Controls->Add(this->label8);
			this->groupBox->Controls->Add(this->label7);
			this->groupBox->Controls->Add(this->label6);
			this->groupBox->Controls->Add(this->label5);
			this->groupBox->Controls->Add(this->label14);
			this->groupBox->Controls->Add(this->label4);
			this->groupBox->Controls->Add(this->label16);
			this->groupBox->Controls->Add(this->label13);
			this->groupBox->Controls->Add(this->label15);
			this->groupBox->Controls->Add(this->label12);
			this->groupBox->Controls->Add(this->label11);
			this->groupBox->Controls->Add(this->label3);
			this->groupBox->Controls->Add(this->label2);
			this->groupBox->Location = System::Drawing::Point(6, 25);
			this->groupBox->Name = L"groupBox";
			this->groupBox->Size = System::Drawing::Size(952, 183);
			this->groupBox->TabIndex = 0;
			this->groupBox->TabStop = false;
			this->groupBox->Text = L"Условия поиска";
			// 
			// buttonWheel0
			// 
			this->buttonWheel0->Location = System::Drawing::Point(876, 154);
			this->buttonWheel0->Name = L"buttonWheel0";
			this->buttonWheel0->Size = System::Drawing::Size(67, 23);
			this->buttonWheel0->TabIndex = 5;
			this->buttonWheel0->Text = L"Чистить";
			this->buttonWheel0->UseVisualStyleBackColor = true;
			this->buttonWheel0->Click += gcnew System::EventHandler(this, &MyForm::buttonWheel0_Click);
			// 
			// buttonWheelA
			// 
			this->buttonWheelA->Location = System::Drawing::Point(834, 155);
			this->buttonWheelA->Name = L"buttonWheelA";
			this->buttonWheelA->Size = System::Drawing::Size(34, 23);
			this->buttonWheelA->TabIndex = 5;
			this->buttonWheelA->Text = L"Все";
			this->buttonWheelA->UseVisualStyleBackColor = true;
			this->buttonWheelA->Click += gcnew System::EventHandler(this, &MyForm::buttonWheelA_Click);
			// 
			// buttonDrive0
			// 
			this->buttonDrive0->Location = System::Drawing::Point(758, 155);
			this->buttonDrive0->Name = L"buttonDrive0";
			this->buttonDrive0->Size = System::Drawing::Size(67, 23);
			this->buttonDrive0->TabIndex = 5;
			this->buttonDrive0->Text = L"Чистить";
			this->buttonDrive0->UseVisualStyleBackColor = true;
			this->buttonDrive0->Click += gcnew System::EventHandler(this, &MyForm::buttonDrive0_Click);
			// 
			// buttonDriveA
			// 
			this->buttonDriveA->Location = System::Drawing::Point(717, 155);
			this->buttonDriveA->Name = L"buttonDriveA";
			this->buttonDriveA->Size = System::Drawing::Size(34, 23);
			this->buttonDriveA->TabIndex = 5;
			this->buttonDriveA->Text = L"Все";
			this->buttonDriveA->UseVisualStyleBackColor = true;
			this->buttonDriveA->Click += gcnew System::EventHandler(this, &MyForm::buttonDriveA_Click);
			// 
			// buttonEngine0
			// 
			this->buttonEngine0->Location = System::Drawing::Point(642, 155);
			this->buttonEngine0->Name = L"buttonEngine0";
			this->buttonEngine0->Size = System::Drawing::Size(67, 23);
			this->buttonEngine0->TabIndex = 5;
			this->buttonEngine0->Text = L"Чистить";
			this->buttonEngine0->UseVisualStyleBackColor = true;
			this->buttonEngine0->Click += gcnew System::EventHandler(this, &MyForm::buttonEngine0_Click);
			// 
			// buttonEngineA
			// 
			this->buttonEngineA->Location = System::Drawing::Point(602, 156);
			this->buttonEngineA->Name = L"buttonEngineA";
			this->buttonEngineA->Size = System::Drawing::Size(34, 23);
			this->buttonEngineA->TabIndex = 5;
			this->buttonEngineA->Text = L"Все";
			this->buttonEngineA->UseVisualStyleBackColor = true;
			this->buttonEngineA->Click += gcnew System::EventHandler(this, &MyForm::buttonEngineA_Click);
			// 
			// buttonBody0
			// 
			this->buttonBody0->Location = System::Drawing::Point(529, 155);
			this->buttonBody0->Name = L"buttonBody0";
			this->buttonBody0->Size = System::Drawing::Size(67, 23);
			this->buttonBody0->TabIndex = 5;
			this->buttonBody0->Text = L"Чистить";
			this->buttonBody0->UseVisualStyleBackColor = true;
			this->buttonBody0->Click += gcnew System::EventHandler(this, &MyForm::buttonBody0_Click);
			// 
			// buttonBodyA
			// 
			this->buttonBodyA->Location = System::Drawing::Point(489, 155);
			this->buttonBodyA->Name = L"buttonBodyA";
			this->buttonBodyA->Size = System::Drawing::Size(34, 23);
			this->buttonBodyA->TabIndex = 5;
			this->buttonBodyA->Text = L"Все";
			this->buttonBodyA->UseVisualStyleBackColor = true;
			this->buttonBodyA->Click += gcnew System::EventHandler(this, &MyForm::buttonBodyA_Click);
			// 
			// buttonMark0
			// 
			this->buttonMark0->Location = System::Drawing::Point(69, 155);
			this->buttonMark0->Name = L"buttonMark0";
			this->buttonMark0->Size = System::Drawing::Size(67, 23);
			this->buttonMark0->TabIndex = 5;
			this->buttonMark0->Text = L"Чистить";
			this->buttonMark0->UseVisualStyleBackColor = true;
			this->buttonMark0->Click += gcnew System::EventHandler(this, &MyForm::buttonMark0_Click);
			// 
			// buttonMarkA
			// 
			this->buttonMarkA->Location = System::Drawing::Point(9, 155);
			this->buttonMarkA->Name = L"buttonMarkA";
			this->buttonMarkA->Size = System::Drawing::Size(34, 23);
			this->buttonMarkA->TabIndex = 5;
			this->buttonMarkA->Text = L"Все";
			this->buttonMarkA->UseVisualStyleBackColor = true;
			this->buttonMarkA->Click += gcnew System::EventHandler(this, &MyForm::buttonMarkA_Click);
			// 
			// buttonBox0
			// 
			this->buttonBox0->Location = System::Drawing::Point(415, 155);
			this->buttonBox0->Name = L"buttonBox0";
			this->buttonBox0->Size = System::Drawing::Size(67, 23);
			this->buttonBox0->TabIndex = 5;
			this->buttonBox0->Text = L"Чистить";
			this->buttonBox0->UseVisualStyleBackColor = true;
			this->buttonBox0->Click += gcnew System::EventHandler(this, &MyForm::buttonBox0_Click);
			// 
			// buttonBoxA
			// 
			this->buttonBoxA->Location = System::Drawing::Point(375, 155);
			this->buttonBoxA->Name = L"buttonBoxA";
			this->buttonBoxA->Size = System::Drawing::Size(34, 23);
			this->buttonBoxA->TabIndex = 5;
			this->buttonBoxA->Text = L"Все";
			this->buttonBoxA->UseVisualStyleBackColor = true;
			this->buttonBoxA->Click += gcnew System::EventHandler(this, &MyForm::buttonBoxA_Click);
			// 
			// checkBoxIgnorePower
			// 
			this->checkBoxIgnorePower->AutoSize = true;
			this->checkBoxIgnorePower->Checked = true;
			this->checkBoxIgnorePower->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBoxIgnorePower->Location = System::Drawing::Point(296, 156);
			this->checkBoxIgnorePower->Name = L"checkBoxIgnorePower";
			this->checkBoxIgnorePower->Size = System::Drawing::Size(72, 17);
			this->checkBoxIgnorePower->TabIndex = 4;
			this->checkBoxIgnorePower->Text = L"Неважно";
			this->checkBoxIgnorePower->UseVisualStyleBackColor = true;
			// 
			// checkBoxIgnoreYear
			// 
			this->checkBoxIgnoreYear->AutoSize = true;
			this->checkBoxIgnoreYear->Checked = true;
			this->checkBoxIgnoreYear->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBoxIgnoreYear->Location = System::Drawing::Point(218, 156);
			this->checkBoxIgnoreYear->Name = L"checkBoxIgnoreYear";
			this->checkBoxIgnoreYear->Size = System::Drawing::Size(72, 17);
			this->checkBoxIgnoreYear->TabIndex = 4;
			this->checkBoxIgnoreYear->Text = L"Неважно";
			this->checkBoxIgnoreYear->UseVisualStyleBackColor = true;
			// 
			// checkBoxIgnoreCost
			// 
			this->checkBoxIgnoreCost->AutoSize = true;
			this->checkBoxIgnoreCost->Checked = true;
			this->checkBoxIgnoreCost->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBoxIgnoreCost->Location = System::Drawing::Point(142, 156);
			this->checkBoxIgnoreCost->Name = L"checkBoxIgnoreCost";
			this->checkBoxIgnoreCost->Size = System::Drawing::Size(72, 17);
			this->checkBoxIgnoreCost->TabIndex = 4;
			this->checkBoxIgnoreCost->Text = L"Неважно";
			this->checkBoxIgnoreCost->UseVisualStyleBackColor = true;
			// 
			// textBoxYearTo
			// 
			this->textBoxYearTo->Location = System::Drawing::Point(218, 128);
			this->textBoxYearTo->Name = L"textBoxYearTo";
			this->textBoxYearTo->Size = System::Drawing::Size(57, 20);
			this->textBoxYearTo->TabIndex = 3;
			this->textBoxYearTo->Text = L"2022";
			this->textBoxYearTo->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBoxPowerTo
			// 
			this->textBoxPowerTo->Location = System::Drawing::Point(296, 128);
			this->textBoxPowerTo->Name = L"textBoxPowerTo";
			this->textBoxPowerTo->Size = System::Drawing::Size(57, 20);
			this->textBoxPowerTo->TabIndex = 3;
			this->textBoxPowerTo->Text = L"5000";
			this->textBoxPowerTo->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBoxCostTo
			// 
			this->textBoxCostTo->Location = System::Drawing::Point(142, 128);
			this->textBoxCostTo->Name = L"textBoxCostTo";
			this->textBoxCostTo->Size = System::Drawing::Size(57, 20);
			this->textBoxCostTo->TabIndex = 3;
			this->textBoxCostTo->Text = L"10000000";
			this->textBoxCostTo->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBoxYearFrom
			// 
			this->textBoxYearFrom->Location = System::Drawing::Point(218, 82);
			this->textBoxYearFrom->Name = L"textBoxYearFrom";
			this->textBoxYearFrom->Size = System::Drawing::Size(57, 20);
			this->textBoxYearFrom->TabIndex = 3;
			this->textBoxYearFrom->Text = L"1800";
			this->textBoxYearFrom->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBoxPowerFrom
			// 
			this->textBoxPowerFrom->Location = System::Drawing::Point(296, 82);
			this->textBoxPowerFrom->Name = L"textBoxPowerFrom";
			this->textBoxPowerFrom->Size = System::Drawing::Size(57, 20);
			this->textBoxPowerFrom->TabIndex = 3;
			this->textBoxPowerFrom->Text = L"1";
			this->textBoxPowerFrom->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBoxCostFrom
			// 
			this->textBoxCostFrom->Location = System::Drawing::Point(142, 82);
			this->textBoxCostFrom->Name = L"textBoxCostFrom";
			this->textBoxCostFrom->Size = System::Drawing::Size(57, 20);
			this->textBoxCostFrom->TabIndex = 3;
			this->textBoxCostFrom->Text = L"0";
			this->textBoxCostFrom->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// checkedListBoxWheel
			// 
			this->checkedListBoxWheel->FormattingEnabled = true;
			this->checkedListBoxWheel->Location = System::Drawing::Point(830, 45);
			this->checkedListBoxWheel->Name = L"checkedListBoxWheel";
			this->checkedListBoxWheel->Size = System::Drawing::Size(114, 109);
			this->checkedListBoxWheel->TabIndex = 2;
			// 
			// checkedListBoxDrive
			// 
			this->checkedListBoxDrive->FormattingEnabled = true;
			this->checkedListBoxDrive->Location = System::Drawing::Point(715, 45);
			this->checkedListBoxDrive->Name = L"checkedListBoxDrive";
			this->checkedListBoxDrive->Size = System::Drawing::Size(109, 109);
			this->checkedListBoxDrive->TabIndex = 2;
			// 
			// checkedListBoxEngine
			// 
			this->checkedListBoxEngine->FormattingEnabled = true;
			this->checkedListBoxEngine->Location = System::Drawing::Point(602, 45);
			this->checkedListBoxEngine->Name = L"checkedListBoxEngine";
			this->checkedListBoxEngine->Size = System::Drawing::Size(107, 109);
			this->checkedListBoxEngine->TabIndex = 2;
			// 
			// checkedListBoxBody
			// 
			this->checkedListBoxBody->FormattingEnabled = true;
			this->checkedListBoxBody->Location = System::Drawing::Point(488, 45);
			this->checkedListBoxBody->Name = L"checkedListBoxBody";
			this->checkedListBoxBody->Size = System::Drawing::Size(108, 109);
			this->checkedListBoxBody->TabIndex = 2;
			// 
			// checkedListBoxBox
			// 
			this->checkedListBoxBox->FormattingEnabled = true;
			this->checkedListBoxBox->Location = System::Drawing::Point(373, 45);
			this->checkedListBoxBox->Name = L"checkedListBoxBox";
			this->checkedListBoxBox->Size = System::Drawing::Size(109, 109);
			this->checkedListBoxBox->TabIndex = 2;
			// 
			// checkedListBoxMark
			// 
			this->checkedListBoxMark->FormattingEnabled = true;
			this->checkedListBoxMark->Location = System::Drawing::Point(8, 46);
			this->checkedListBoxMark->Name = L"checkedListBoxMark";
			this->checkedListBoxMark->Size = System::Drawing::Size(128, 109);
			this->checkedListBoxMark->TabIndex = 2;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(827, 16);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(35, 13);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Руль";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(712, 16);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(51, 13);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Привод";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(599, 16);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(71, 13);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Двигатель";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(494, 16);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(48, 26);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Тип \r\nкузова";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(370, 16);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(61, 26);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Коробка \r\nпередач";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(293, 16);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(68, 13);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Мощность";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(215, 112);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(22, 13);
			this->label14->TabIndex = 1;
			this->label14->Text = L"До";
			this->label14->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(215, 16);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 26);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Год\r\nвыпуска";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(293, 112);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(22, 13);
			this->label16->TabIndex = 1;
			this->label16->Text = L"До";
			this->label16->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(218, 61);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(20, 13);
			this->label13->TabIndex = 1;
			this->label13->Text = L"От";
			this->label13->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(296, 61);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(20, 13);
			this->label15->TabIndex = 1;
			this->label15->Text = L"От";
			this->label15->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(139, 112);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(22, 13);
			this->label12->TabIndex = 1;
			this->label12->Text = L"До";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(142, 61);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(20, 13);
			this->label11->TabIndex = 1;
			this->label11->Text = L"От";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(145, 16);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Цена";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(6, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Марка";
			// 
			// listBox
			// 
			this->listBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listBox->FormattingEnabled = true;
			this->listBox->Location = System::Drawing::Point(8, 236);
			this->listBox->Name = L"listBox";
			this->listBox->Size = System::Drawing::Size(947, 225);
			this->listBox->TabIndex = 2;
			this->listBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox_SelectedIndexChanged);
			this->listBox->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::listBox_MouseDoubleClick);
			// 
			// buttonEditList
			// 
			this->buttonEditList->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->buttonEditList->Location = System::Drawing::Point(94, 210);
			this->buttonEditList->Name = L"buttonEditList";
			this->buttonEditList->Size = System::Drawing::Size(150, 23);
			this->buttonEditList->TabIndex = 3;
			this->buttonEditList->Text = L"Изменить";
			this->buttonEditList->UseVisualStyleBackColor = true;
			this->buttonEditList->Visible = false;
			this->buttonEditList->Click += gcnew System::EventHandler(this, &MyForm::buttonEditList_Click);
			// 
			// buttonEditMark
			// 
			this->buttonEditMark->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->buttonEditMark->Location = System::Drawing::Point(836, 1);
			this->buttonEditMark->Name = L"buttonEditMark";
			this->buttonEditMark->Size = System::Drawing::Size(121, 23);
			this->buttonEditMark->TabIndex = 3;
			this->buttonEditMark->Text = L"Редактор марок";
			this->buttonEditMark->UseVisualStyleBackColor = true;
			this->buttonEditMark->Visible = false;
			this->buttonEditMark->Click += gcnew System::EventHandler(this, &MyForm::buttonEditMark_Click);
			// 
			// buttonFind
			// 
			this->buttonFind->Location = System::Drawing::Point(9, 209);
			this->buttonFind->Name = L"buttonFind";
			this->buttonFind->Size = System::Drawing::Size(75, 23);
			this->buttonFind->TabIndex = 4;
			this->buttonFind->Text = L"ИСКАТЬ!";
			this->buttonFind->UseVisualStyleBackColor = true;
			this->buttonFind->Click += gcnew System::EventHandler(this, &MyForm::buttonFind_Click);
			// 
			// buttonIAmAdmin
			// 
			this->buttonIAmAdmin->Location = System::Drawing::Point(6, 1);
			this->buttonIAmAdmin->Name = L"buttonIAmAdmin";
			this->buttonIAmAdmin->Size = System::Drawing::Size(115, 23);
			this->buttonIAmAdmin->TabIndex = 5;
			this->buttonIAmAdmin->Text = L"АДМИНИСТРАТОР";
			this->buttonIAmAdmin->UseVisualStyleBackColor = true;
			this->buttonIAmAdmin->Click += gcnew System::EventHandler(this, &MyForm::buttonIAmAdmin_Click);
			// 
			// buttonAdd
			// 
			this->buttonAdd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->buttonAdd->Location = System::Drawing::Point(250, 209);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(150, 23);
			this->buttonAdd->TabIndex = 6;
			this->buttonAdd->Text = L"Добавить";
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Visible = false;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &MyForm::buttonAdd_Click);
			// 
			// buttonDelete
			// 
			this->buttonDelete->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->buttonDelete->Location = System::Drawing::Point(406, 209);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(150, 23);
			this->buttonDelete->TabIndex = 7;
			this->buttonDelete->Text = L"Продать (Удалить)";
			this->buttonDelete->UseVisualStyleBackColor = true;
			this->buttonDelete->Visible = false;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &MyForm::buttonDelete_Click);
			// 
			// checkBox
			// 
			this->checkBox->AutoSize = true;
			this->checkBox->Location = System::Drawing::Point(579, 213);
			this->checkBox->Name = L"checkBox";
			this->checkBox->Size = System::Drawing::Size(105, 17);
			this->checkBox->TabIndex = 9;
			this->checkBox->Text = L"Забронирована";
			this->checkBox->UseVisualStyleBackColor = true;
			this->checkBox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_CheckedChanged);
			// 
			// textBoxDis
			// 
			this->textBoxDis->Location = System::Drawing::Point(764, 210);
			this->textBoxDis->Name = L"textBoxDis";
			this->textBoxDis->Size = System::Drawing::Size(67, 20);
			this->textBoxDis->TabIndex = 10;
			this->textBoxDis->Text = L"0";
			this->textBoxDis->Leave += gcnew System::EventHandler(this, &MyForm::buttonFind_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(688, 214);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(50, 13);
			this->label17->TabIndex = 1;
			this->label17->Text = L"Скидка";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(961, 466);
			this->Controls->Add(this->textBoxDis);
			this->Controls->Add(this->checkBox);
			this->Controls->Add(this->buttonDelete);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(this->buttonIAmAdmin);
			this->Controls->Add(this->buttonFind);
			this->Controls->Add(this->buttonEditMark);
			this->Controls->Add(this->buttonEditList);
			this->Controls->Add(this->listBox);
			this->Controls->Add(this->groupBox);
			this->Controls->Add(this->label17);
			this->Name = L"MyForm";
			this->Text = L"Автосалон \"Москвич\"";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox->ResumeLayout(false);
			this->groupBox->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
			 //Заполнить списки

			 /*
			 Марка: Audi BMW Chevrolet Ford Honda Hyundai Kia Lexus Mazda Nissan Volkswagen справочник
			 Цена (от до)
			 Год выпуска (от до)
			 Коробка передач: Автомат Вариатор Робот Механика
			 Тип кузова: внедорожник кабриолет купе микроавтобус минивэн пикап седан универсал фургон хетчбэк
			 Двигатель: бензин газ гибрид дизель электро
			 Привод: задний передний полный
			 Руль левый правый
			 Мощность (лс) (от до)
			 */
	public: static array<String^>^ Mark = gcnew array<String^>{"Москвич 412", "Москвич 2022"};
	public: static array<String^>^ Box = gcnew array<String^>{"Автомат", " Вариатор", " Робот", " Механика"};
	public: static array<String^>^ Body = gcnew array<String^>{
		"внедорожник", "кабриолет", "купе", "микроавтобус", "минивэн", "пикап", "седан", "универсал", "фургон", "хетчбэк"
	};
	public: static array<String^>^ Engine = gcnew array<String^>{"бензин", "газ", "гибрид", "дизель", "электро"};
	public: static array<String^>^ Wheel = gcnew array<String^>{"левый", "правый"};
	public: static array<String^>^ Drive = gcnew array<String^>{"задний", "передний", "полный"};


	public: AutoList^ list = gcnew AutoList("Database.txt");

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e)
	{
		ArrayToCheckList(Box, checkedListBoxBox);
		ArrayToCheckList(Body, checkedListBoxBody);
		ArrayToCheckList(Engine, checkedListBoxEngine);
		ArrayToCheckList(Wheel, checkedListBoxWheel);
		ArrayToCheckList(Drive, checkedListBoxDrive);
		if (File::Exists("marks.txt"))
			Mark = File::ReadAllLines("marks.txt");
		ArrayToCheckList(Mark, checkedListBoxMark);
		buttonFind_Click(sender, e);
	}
	private:void ArrayToCheckList(array<String^>^ A, CheckedListBox^ clb)
	{
		clb->Items->Clear();
		for each (String^ s in A)
			clb->Items->Add(s, true);
	}

	private:void SetChecked(CheckedListBox^ clb, bool value)
	{
		for (int k = 0; k < clb->Items->Count; k++)
			clb->SetItemChecked(k, value);
	}

	private: System::Void buttonMarkA_Click(System::Object^  sender, System::EventArgs^  e) {
		SetChecked(checkedListBoxMark, true);
	}

	private: System::Void buttonMark0_Click(System::Object^  sender, System::EventArgs^  e) {
		SetChecked(checkedListBoxMark, false);
	}
	private: System::Void buttonWheelA_Click(System::Object^  sender, System::EventArgs^  e) {
		SetChecked(checkedListBoxWheel, true);
	}
	private: System::Void buttonWheel0_Click(System::Object^  sender, System::EventArgs^  e) {
		SetChecked(checkedListBoxWheel, false);
	}
	private: System::Void buttonDrive0_Click(System::Object^  sender, System::EventArgs^  e) {
		SetChecked(checkedListBoxDrive, false);
	}
	private: System::Void buttonDriveA_Click(System::Object^  sender, System::EventArgs^  e) {
		SetChecked(checkedListBoxDrive, true);
	}
	private: System::Void buttonEngineA_Click(System::Object^  sender, System::EventArgs^  e) {
		SetChecked(checkedListBoxEngine, true);
	}
	private: System::Void buttonEngine0_Click(System::Object^  sender, System::EventArgs^  e) {
		SetChecked(checkedListBoxEngine, false);
	}
	private: System::Void buttonBody0_Click(System::Object^  sender, System::EventArgs^  e) {
		SetChecked(checkedListBoxBody, false);
	}
	private: System::Void buttonBodyA_Click(System::Object^  sender, System::EventArgs^  e) {
		SetChecked(checkedListBoxBody, true);
	}
	private: System::Void buttonBox0_Click(System::Object^  sender, System::EventArgs^  e) {
		SetChecked(checkedListBoxBox, false);
	}
	private: System::Void buttonBoxA_Click(System::Object^  sender, System::EventArgs^  e) {
		SetChecked(checkedListBoxBox, true);
	}

			 //Проверить, совпадает ли с хоть каким нибудь отмеченным
	private: bool StringInList(String^ s, CheckedListBox^ list)
	{
		return list->CheckedItems->IndexOf(s) >= 0;
	}

	private: System::Void buttonEditMark_Click(System::Object^  sender, System::EventArgs^  e) {
		Visible = false;
		Process^ myProcess = Process::Start("marks.txt");
		myProcess->WaitForExit();
		Mark = File::ReadAllLines("marks.txt");
		ArrayToCheckList(Mark, checkedListBoxMark);
		Visible = true;
	}

	private: System::Void buttonIAmAdmin_Click(System::Object^  sender, System::EventArgs^  e) {
		FormLogin^ F = gcnew FormLogin();
		if (F->ShowDialog() != System::Windows::Forms::DialogResult::OK) return;
		buttonEditMark->Visible = true;
		buttonEditList->Visible = true;
		buttonAdd->Visible = true;
		buttonDelete->Visible = true;
	}

			 //Удалить
	private: System::Void buttonDelete_Click(System::Object^  sender, System::EventArgs^  e) {
		Auto^ A = (Auto^)(listBox->SelectedItem);
		if (A == nullptr) return;
		list->RemoveByID(A->Id);
		list->SaveToFile("Database.txt");
		buttonFind_Click(sender, e);
	}

	private:FormCard^ CreateFormCard()
	{
		FormCard^ F = gcnew FormCard();
		F->FillCombo(F->comboBoxMark, checkedListBoxMark);
		F->FillCombo(F->comboBoxBody, checkedListBoxBody);
		F->FillCombo(F->comboBoxBox, checkedListBoxBox);
		F->FillCombo(F->comboBoxDrive, checkedListBoxDrive);
		F->FillCombo(F->comboBoxEngine, checkedListBoxEngine);
		F->FillCombo(F->comboBoxWheel, checkedListBoxWheel);
		F->textBoxCost->Text = "";
		F->textBoxPower->Text = "";
		F->textBoxYear->Text = "";
		return F;
	}

			 //Добавить
	private: System::Void buttonAdd_Click(System::Object^  sender, System::EventArgs^  e)
	{
		FormCard^ F = CreateFormCard();
		F->A = gcnew Auto();
		if (F->ShowDialog() != System::Windows::Forms::DialogResult::OK) return;
		list->Add(F->A);
		list->SaveToFile("Database.txt");
		buttonFind_Click(sender, e);
	}
			 //Изменить
	private: System::Void buttonEditList_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (listBox->SelectedItem == nullptr) return;
		//Выбрать Авто
		FormCard^ F = CreateFormCard();
		F->A = (Auto^)listBox->SelectedItem;
		F->CanOK = (sender != nullptr); //Режим только просмотр
		//Заполнить текущими значениями
		F->comboBoxMark->SelectedIndex = F->comboBoxMark->Items->IndexOf(F->A->Mark);
		F->comboBoxBody->SelectedIndex = F->comboBoxBody->Items->IndexOf(F->A->Body);
		F->comboBoxBox->SelectedIndex = F->comboBoxBox->Items->IndexOf(F->A->Box);
		F->comboBoxDrive->SelectedIndex = F->comboBoxDrive->Items->IndexOf(F->A->Drive);
		F->comboBoxEngine->SelectedIndex = F->comboBoxEngine->Items->IndexOf(F->A->Engine);
		F->comboBoxWheel->SelectedIndex = F->comboBoxWheel->Items->IndexOf(F->A->Wheel);
		F->textBoxCost->Text = F->A->Cost.ToString();
		F->textBoxPower->Text = F->A->Power.ToString();
		F->textBoxYear->Text = F->A->Year.ToString();
		//Запустить карточку
		if (F->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			list->SaveToFile("Database.txt");
			buttonFind_Click(sender, e);
		}
	}

			 //Забронировать/снять бронь
	private: System::Void checkBox_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
	{
		if (listBox->SelectedItem == nullptr) return;
		Auto^ A = (Auto^)listBox->SelectedItem;
		A->Reserved = checkBox->Checked;
		list->SaveToFile("DataBase.txt");
		buttonFind_Click(sender, e);
	}

	private: System::Void buttonFind_Click(System::Object^  sender, System::EventArgs^  e)
	{
		double::TryParse(textBoxDis->Text, Auto::Discount);
		int index = listBox->SelectedIndex;
		listBox->Items->Clear();
		for (int k = 0; k < list->Count; k++)
		{
			//Проверить список на соотвествие параметрам:
			//Марка
			if (!StringInList(list[k]->Mark, checkedListBoxMark)) continue;
			//Коробка передач
			if (!StringInList(list[k]->Box, checkedListBoxBox)) continue;
			//Тип кузова
			if (!StringInList(list[k]->Body, checkedListBoxBody)) continue;
			//Двигатель
			if (!StringInList(list[k]->Engine, checkedListBoxEngine)) continue;
			//Привод
			if (!StringInList(list[k]->Drive, checkedListBoxDrive)) continue;
			//Руль
			if (!StringInList(list[k]->Wheel, checkedListBoxWheel)) continue;
			//Цена(от до)
			if (!checkBoxIgnoreCost->Checked)
			{
				double min = 0; double::TryParse(textBoxCostFrom->Text, min);
				double max = 0; double::TryParse(textBoxCostTo->Text, max);
				double value = list[k]->Cost;
				if (value < min) continue;
				if (value > max) continue;
			}
			//Мощность(лс) (от до)
			if (!checkBoxIgnorePower->Checked)
			{
				double min = 0; double::TryParse(textBoxPowerFrom->Text, min);
				double max = 0; double::TryParse(textBoxPowerTo->Text, max);
				double value = list[k]->Power;
				if (value < min) continue;
				if (value > max) continue;
			}
			//Год выпуска(от до)
			if (!checkBoxIgnoreYear->Checked)
			{
				int min = 0; int::TryParse(textBoxYearFrom->Text, min);
				int max = 0; int::TryParse(textBoxYearTo->Text, max);
				int value = list[k]->Year;
				if (value < min) continue;
				if (value > max) continue;
			}
			//Все критерии совпали.
			listBox->Items->Add(list[k]);
		}
		if (index < 0) index = 0;
		if (index >= listBox->Items->Count) index = listBox->Items->Count - 1;
		if (index >= 0)
			listBox->SelectedIndex = index;
		Auto::Discount = 0;
	}

	private: System::Void listBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
	{
		Auto^ A = (Auto^)listBox->SelectedItem;
		checkBox->Checked = A->Reserved;
	}
private: System::Void listBox_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	buttonEditList_Click(nullptr, nullptr);
}
};
}


