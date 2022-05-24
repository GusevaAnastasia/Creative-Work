#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iomanip>
#include <ctime>

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ Year1;

	private: System::Windows::Forms::TextBox^ DoM2;

	private: System::Windows::Forms::TextBox^ DoM1;
	private: System::Windows::Forms::ComboBox^ FormatCB1;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ Year2;

	private: System::Windows::Forms::TextBox^ DoM2_2;

	private: System::Windows::Forms::TextBox^ DoM1_1;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ ClearButton;

	private: System::Windows::Forms::Button^ resultButton;
	private: System::Windows::Forms::Button^ ExitButton;


	private: System::Windows::Forms::TextBox^ Result;
	private: System::Windows::Forms::ComboBox^ FormatCB2;


	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ ClearButton2;

	private: System::Windows::Forms::Button^ resultButton2;



	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ YearToday;

	private: System::Windows::Forms::TextBox^ DoMToday2;

	private: System::Windows::Forms::TextBox^ DoMToday;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ Year3;

	private: System::Windows::Forms::TextBox^ DoM2_3;

	private: System::Windows::Forms::TextBox^ DoM1_3;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label15;

	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ Result3;

	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ Result2;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ ResultT3;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ ResultT2;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ ResultT1;
	private: System::Windows::Forms::Label^ label18;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->Result3 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->Result2 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->Result = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->ClearButton = (gcnew System::Windows::Forms::Button());
			this->resultButton = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Year2 = (gcnew System::Windows::Forms::TextBox());
			this->DoM2_2 = (gcnew System::Windows::Forms::TextBox());
			this->DoM1_1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Year1 = (gcnew System::Windows::Forms::TextBox());
			this->DoM2 = (gcnew System::Windows::Forms::TextBox());
			this->DoM1 = (gcnew System::Windows::Forms::TextBox());
			this->FormatCB1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->ResultT3 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->ResultT2 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->ResultT1 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->FormatCB2 = (gcnew System::Windows::Forms::ComboBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->ClearButton2 = (gcnew System::Windows::Forms::Button());
			this->resultButton2 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->YearToday = (gcnew System::Windows::Forms::TextBox());
			this->DoMToday2 = (gcnew System::Windows::Forms::TextBox());
			this->DoMToday = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->Year3 = (gcnew System::Windows::Forms::TextBox());
			this->DoM2_3 = (gcnew System::Windows::Forms::TextBox());
			this->DoM1_3 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(631, 317);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tabPage1->Controls->Add(this->label19);
			this->tabPage1->Controls->Add(this->Result3);
			this->tabPage1->Controls->Add(this->label20);
			this->tabPage1->Controls->Add(this->Result2);
			this->tabPage1->Controls->Add(this->label15);
			this->tabPage1->Controls->Add(this->Result);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->ClearButton);
			this->tabPage1->Controls->Add(this->resultButton);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->Year2);
			this->tabPage1->Controls->Add(this->DoM2_2);
			this->tabPage1->Controls->Add(this->DoM1_1);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->Year1);
			this->tabPage1->Controls->Add(this->DoM2);
			this->tabPage1->Controls->Add(this->DoM1);
			this->tabPage1->Controls->Add(this->FormatCB1);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 26);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(623, 287);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Рассчет времени между двумя датами";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label19->Location = System::Drawing::Point(514, 180);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(33, 21);
			this->label19->TabIndex = 33;
			this->label19->Text = L"лет";
			// 
			// Result3
			// 
			this->Result3->Location = System::Drawing::Point(440, 180);
			this->Result3->Name = L"Result3";
			this->Result3->ReadOnly = true;
			this->Result3->Size = System::Drawing::Size(63, 25);
			this->Result3->TabIndex = 32;
			this->Result3->TextChanged += gcnew System::EventHandler(this, &MyForm::Result3_TextChanged);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label20->Location = System::Drawing::Point(341, 180);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(93, 21);
			this->label20->TabIndex = 31;
			this->label20->Text = L"месяцев  = ";
			// 
			// Result2
			// 
			this->Result2->Location = System::Drawing::Point(268, 180);
			this->Result2->Name = L"Result2";
			this->Result2->ReadOnly = true;
			this->Result2->Size = System::Drawing::Size(63, 25);
			this->Result2->TabIndex = 30;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label15->Location = System::Drawing::Point(194, 180);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(68, 21);
			this->label15->TabIndex = 17;
			this->label15->Text = L"дней   =";
			// 
			// Result
			// 
			this->Result->Location = System::Drawing::Point(122, 180);
			this->Result->Name = L"Result";
			this->Result->ReadOnly = true;
			this->Result->Size = System::Drawing::Size(63, 25);
			this->Result->TabIndex = 16;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label7->Location = System::Drawing::Point(24, 180);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(80, 21);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Результат";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// ClearButton
			// 
			this->ClearButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ClearButton->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->ClearButton->Location = System::Drawing::Point(518, 234);
			this->ClearButton->Name = L"ClearButton";
			this->ClearButton->Size = System::Drawing::Size(90, 33);
			this->ClearButton->TabIndex = 14;
			this->ClearButton->Text = L"Очистить";
			this->ClearButton->UseVisualStyleBackColor = true;
			this->ClearButton->Click += gcnew System::EventHandler(this, &MyForm::ClearButton_Click);
			// 
			// resultButton
			// 
			this->resultButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->resultButton->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->resultButton->Location = System::Drawing::Point(413, 234);
			this->resultButton->Name = L"resultButton";
			this->resultButton->Size = System::Drawing::Size(90, 33);
			this->resultButton->TabIndex = 13;
			this->resultButton->Text = L"Рассчитать";
			this->resultButton->UseVisualStyleBackColor = true;
			this->resultButton->Click += gcnew System::EventHandler(this, &MyForm::resultButton_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label6->Location = System::Drawing::Point(342, 124);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(115, 21);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Конечная дата";
			// 
			// Year2
			// 
			this->Year2->Location = System::Drawing::Point(540, 125);
			this->Year2->Name = L"Year2";
			this->Year2->Size = System::Drawing::Size(40, 25);
			this->Year2->TabIndex = 11;
			this->Year2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Year2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// DoM2_2
			// 
			this->DoM2_2->Location = System::Drawing::Point(509, 125);
			this->DoM2_2->Name = L"DoM2_2";
			this->DoM2_2->Size = System::Drawing::Size(25, 25);
			this->DoM2_2->TabIndex = 10;
			this->DoM2_2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->DoM2_2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// DoM1_1
			// 
			this->DoM1_1->Location = System::Drawing::Point(478, 125);
			this->DoM1_1->Name = L"DoM1_1";
			this->DoM1_1->Size = System::Drawing::Size(25, 25);
			this->DoM1_1->TabIndex = 9;
			this->DoM1_1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->DoM1_1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label5->Location = System::Drawing::Point(24, 124);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(123, 21);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Начальная дата";
			// 
			// Year1
			// 
			this->Year1->Location = System::Drawing::Point(222, 125);
			this->Year1->Name = L"Year1";
			this->Year1->Size = System::Drawing::Size(40, 25);
			this->Year1->TabIndex = 7;
			this->Year1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// DoM2
			// 
			this->DoM2->Location = System::Drawing::Point(191, 125);
			this->DoM2->Name = L"DoM2";
			this->DoM2->Size = System::Drawing::Size(25, 25);
			this->DoM2->TabIndex = 6;
			this->DoM2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// DoM1
			// 
			this->DoM1->Location = System::Drawing::Point(160, 125);
			this->DoM1->Name = L"DoM1";
			this->DoM1->Size = System::Drawing::Size(25, 25);
			this->DoM1->TabIndex = 5;
			this->DoM1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// FormatCB1
			// 
			this->FormatCB1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->FormatCB1->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->FormatCB1->FormattingEnabled = true;
			this->FormatCB1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"ДД/ММ/ГГГГ", L"ММ/ДД/ГГГГ" });
			this->FormatCB1->Location = System::Drawing::Point(487, 87);
			this->FormatCB1->Name = L"FormatCB1";
			this->FormatCB1->Size = System::Drawing::Size(121, 25);
			this->FormatCB1->TabIndex = 4;
			this->FormatCB1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label4->Location = System::Drawing::Point(342, 87);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(139, 21);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Выберите формат";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label3->Location = System::Drawing::Point(23, 51);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(441, 21);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Введите начальную и конечную дату и получите результат!";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label2->Location = System::Drawing::Point(23, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(460, 21);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Калькулятор вычисляет количество дней между двумя датами";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Location = System::Drawing::Point(117, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(399, 30);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Сколько времени между двумя датами\?";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->ResultT3);
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->ResultT2);
			this->tabPage2->Controls->Add(this->label17);
			this->tabPage2->Controls->Add(this->ResultT1);
			this->tabPage2->Controls->Add(this->label18);
			this->tabPage2->Controls->Add(this->FormatCB2);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->ClearButton2);
			this->tabPage2->Controls->Add(this->resultButton2);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->YearToday);
			this->tabPage2->Controls->Add(this->DoMToday2);
			this->tabPage2->Controls->Add(this->DoMToday);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->Year3);
			this->tabPage2->Controls->Add(this->DoM2_3);
			this->tabPage2->Controls->Add(this->DoM1_3);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Location = System::Drawing::Point(4, 26);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(623, 287);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Рассчет времени от сегодняшнего дня";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label13->Location = System::Drawing::Point(515, 184);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(33, 21);
			this->label13->TabIndex = 40;
			this->label13->Text = L"лет";
			// 
			// ResultT3
			// 
			this->ResultT3->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->ResultT3->Location = System::Drawing::Point(441, 184);
			this->ResultT3->Name = L"ResultT3";
			this->ResultT3->ReadOnly = true;
			this->ResultT3->Size = System::Drawing::Size(63, 25);
			this->ResultT3->TabIndex = 39;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label16->Location = System::Drawing::Point(342, 184);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(93, 21);
			this->label16->TabIndex = 38;
			this->label16->Text = L"месяцев  = ";
			// 
			// ResultT2
			// 
			this->ResultT2->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->ResultT2->Location = System::Drawing::Point(269, 184);
			this->ResultT2->Name = L"ResultT2";
			this->ResultT2->ReadOnly = true;
			this->ResultT2->Size = System::Drawing::Size(63, 25);
			this->ResultT2->TabIndex = 37;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label17->Location = System::Drawing::Point(195, 184);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(68, 21);
			this->label17->TabIndex = 36;
			this->label17->Text = L"дней   =";
			// 
			// ResultT1
			// 
			this->ResultT1->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->ResultT1->Location = System::Drawing::Point(123, 184);
			this->ResultT1->Name = L"ResultT1";
			this->ResultT1->ReadOnly = true;
			this->ResultT1->Size = System::Drawing::Size(63, 25);
			this->ResultT1->TabIndex = 35;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label18->Location = System::Drawing::Point(25, 184);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(80, 21);
			this->label18->TabIndex = 34;
			this->label18->Text = L"Результат";
			// 
			// FormatCB2
			// 
			this->FormatCB2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->FormatCB2->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->FormatCB2->FormattingEnabled = true;
			this->FormatCB2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"ДД/ММ/ГГГГ", L"ММ/ДД/ГГГГ" });
			this->FormatCB2->Location = System::Drawing::Point(487, 87);
			this->FormatCB2->Name = L"FormatCB2";
			this->FormatCB2->Size = System::Drawing::Size(121, 25);
			this->FormatCB2->TabIndex = 22;
			this->FormatCB2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::FormatCB2_SelectedIndexChanged);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label14->Location = System::Drawing::Point(342, 87);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(139, 21);
			this->label14->TabIndex = 21;
			this->label14->Text = L"Выберите формат";
			// 
			// ClearButton2
			// 
			this->ClearButton2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ClearButton2->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->ClearButton2->Location = System::Drawing::Point(518, 234);
			this->ClearButton2->Name = L"ClearButton2";
			this->ClearButton2->Size = System::Drawing::Size(90, 33);
			this->ClearButton2->TabIndex = 20;
			this->ClearButton2->Text = L"Очистить";
			this->ClearButton2->UseVisualStyleBackColor = true;
			this->ClearButton2->Click += gcnew System::EventHandler(this, &MyForm::ClearButton2_Click);
			// 
			// resultButton2
			// 
			this->resultButton2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->resultButton2->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->resultButton2->Location = System::Drawing::Point(413, 234);
			this->resultButton2->Name = L"resultButton2";
			this->resultButton2->Size = System::Drawing::Size(90, 33);
			this->resultButton2->TabIndex = 19;
			this->resultButton2->Text = L"Рассчитать";
			this->resultButton2->UseVisualStyleBackColor = true;
			this->resultButton2->Click += gcnew System::EventHandler(this, &MyForm::resultButton2_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label12->Location = System::Drawing::Point(23, 141);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(69, 21);
			this->label12->TabIndex = 16;
			this->label12->Text = L"Сегодня";
			// 
			// YearToday
			// 
			this->YearToday->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->YearToday->Location = System::Drawing::Point(221, 141);
			this->YearToday->Name = L"YearToday";
			this->YearToday->ReadOnly = true;
			this->YearToday->Size = System::Drawing::Size(40, 25);
			this->YearToday->TabIndex = 15;
			this->YearToday->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// DoMToday2
			// 
			this->DoMToday2->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->DoMToday2->Location = System::Drawing::Point(190, 141);
			this->DoMToday2->Name = L"DoMToday2";
			this->DoMToday2->ReadOnly = true;
			this->DoMToday2->Size = System::Drawing::Size(25, 25);
			this->DoMToday2->TabIndex = 14;
			this->DoMToday2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// DoMToday
			// 
			this->DoMToday->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->DoMToday->Location = System::Drawing::Point(159, 141);
			this->DoMToday->Name = L"DoMToday";
			this->DoMToday->ReadOnly = true;
			this->DoMToday->Size = System::Drawing::Size(25, 25);
			this->DoMToday->TabIndex = 13;
			this->DoMToday->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label11->Location = System::Drawing::Point(23, 91);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(104, 21);
			this->label11->TabIndex = 12;
			this->label11->Text = L"Введите дату";
			// 
			// Year3
			// 
			this->Year3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Year3->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->Year3->Location = System::Drawing::Point(221, 92);
			this->Year3->Name = L"Year3";
			this->Year3->Size = System::Drawing::Size(40, 25);
			this->Year3->TabIndex = 11;
			this->Year3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// DoM2_3
			// 
			this->DoM2_3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->DoM2_3->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->DoM2_3->Location = System::Drawing::Point(190, 92);
			this->DoM2_3->Name = L"DoM2_3";
			this->DoM2_3->Size = System::Drawing::Size(25, 25);
			this->DoM2_3->TabIndex = 10;
			this->DoM2_3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// DoM1_3
			// 
			this->DoM1_3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->DoM1_3->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->DoM1_3->Location = System::Drawing::Point(159, 92);
			this->DoM1_3->Name = L"DoM1_3";
			this->DoM1_3->Size = System::Drawing::Size(25, 25);
			this->DoM1_3->TabIndex = 9;
			this->DoM1_3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label10->Location = System::Drawing::Point(23, 51);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(267, 21);
			this->label10->TabIndex = 3;
			this->label10->Text = L"Введите дату и получите результат!";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label9->Location = System::Drawing::Point(23, 30);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(514, 21);
			this->label9->TabIndex = 2;
			this->label9->Text = L"Калькулятор вычисляет количество дней, месяцев, лет до любой даты";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label8->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label8->Location = System::Drawing::Point(117, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(417, 30);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Сколько времени до определенной даты\?";
			// 
			// ExitButton
			// 
			this->ExitButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ExitButton->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->ExitButton->Location = System::Drawing::Point(534, 336);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(90, 33);
			this->ExitButton->TabIndex = 1;
			this->ExitButton->Text = L"Выход";
			this->ExitButton->UseVisualStyleBackColor = true;
			this->ExitButton->Click += gcnew System::EventHandler(this, &MyForm::ExitButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSlateGray;
			this->ClientSize = System::Drawing::Size(654, 381);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}

    int DaysCount(int day1, int day2, int month1, int month2, int year1, int year2)
    {
		int daycount = 0; int monthcount = 0; int yearcount = 0;
		if (year1 != year2)
		{

			if (year1 < year2)
			{
				for (int i = year1; i < year2; i++)
				{
					if (isleap(i) == 1)
					{
						daycount = daycount + 366;
					}
					else daycount += 365;
				}
			}
			else if (year2 < year1)
			{
				for (int i = year2; i < year1; i++)
				{
					if (isleap(i) == 1)
					{
						daycount += 366;
					}
					else daycount += 365;
				}
			}

			int daysbef, daysaft;

			switch (month1)
			{
			case 1: daysbef = day1; break;
			case 2: daysbef = 31 + day1; break;
			case 3: daysbef = 59 + day1; break;
			case 4: daysbef = 90 + day1; break;
			case 5: daysbef = 120 + day1; break;
			case 6: daysbef = 151 + day1; break;
			case 7: daysbef = 181 + day1; break;
			case 8: daysbef = 212 + day1; break;
			case 9: daysbef = 243 + day1; break;
			case 10: daysbef = 273 + day1; break;
			case 11: daysbef = 304 + day1; break;
			case 12: daysbef = 334 + day1; break;
			}
			if (isleap(year1) && month1 > 2) { daysbef += 1; }

			switch (month2)
			{
			case 1: daysaft = 31; break;
			case 2: daysaft = 31 + day2; break;
			case 3: daysaft = 59 + day2; break;
			case 4: daysaft = 90 + day2; break;
			case 5: daysaft = 120 + day2; break;
			case 6: daysaft = 151 + day2; break;
			case 7: daysaft = 181 + day2; break;
			case 8: daysaft = 212 + day2; break;
			case 9: daysaft = 243 + day2; break;
			case 10: daysaft = 273 + day2; break;
			case 11: daysaft = 304 + day2; break;
			case 12: daysaft = 334 + day2; break;
			}
			if (isleap(year2) && month2 > 2) { daysaft += 1; }

			daycount = daycount + daysaft - daysbef;

		}
		else if (year1 == year2)
		{
			if (month1 != month2)
			{
				int dinm[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
				for (int i = month1; i < month2; i++)
				{
					daycount += dinm[i];
				}

				if (isleap(year1)) { daycount = daycount + 1; }

				daycount = daycount + day2 - day1;
			}
			else
			{
				daycount = day2 - day1;
			}
		}

		return daycount;
	}

	int MonthsCount(int day1, int day2, int month1, int month2, int year1, int year2)
	{
		int ydif = year1 - year2;
		if (ydif < 0) { ydif = ydif * (-1); }

		int monthcount;
		if (year1 != year2)
		{
			monthcount = (ydif) * 12 - month1 + month2 - 1;
		}
		else
		{
			monthcount = month1 - month2;
			if (monthcount < 0) { monthcount *= (-1); }
		}
		if (day1 + day2 >= 30) { monthcount++; }

		return monthcount;
	}

	int YearCount(int day1, int day2, int month1, int month2, int year1, int year2,int monthcount)
	{
		int yearcount;
		if (year1 != year2)
		{
			if (monthcount < 12) { yearcount = 0; }
			else {
				yearcount = monthcount / 12;
			}
		}
		else yearcount = 0;
		
		return yearcount;
	}

    bool CheckInputBoxes()
		   {
			   if (DoM1->Text->Length == 0 || DoM1->Text->Length > 2) return false;
			   for (int i = 0; i < DoM1->Text->Length; ++i)
			   {
				   if (DoM1->Text[i] >= '0' && DoM1->Text->Length <= '9') {}
				   else return false;
				   return true;
			   }

			   if (DoM2->Text->Length == 0 || DoM2->Text->Length > 2) return false;
			   for (int i = 0; i < DoM2->Text->Length; ++i)
			   {
				   if (DoM2->Text[i] >= '0' && DoM2->Text->Length <= '9') {}
				   else return false;
				   return true;
			   }

			   if (Year1->Text->Length != 4) return false;
			   for (int i = 0; i < Year1->Text->Length; ++i)
			   {
				   if (Year1->Text[i] >= '0' && Year2->Text->Length <= '9') {}
				   else return false;
				   return true;
			   }

			   if (DoM1_1->Text->Length == 0 || DoM1_1->Text->Length > 2) return false;
			   for (int i = 0; i < DoM1->Text->Length; ++i)
			   {
				   if (DoM1_1->Text[i] >= '0' && DoM1_1->Text->Length <= '9') {}
				   else return false;
				   return true;
			   }

			   if (DoM2_2->Text->Length == 0 || DoM2_2->Text->Length > 2) return false;
			   for (int i = 0; i < DoM2_2->Text->Length; ++i)
			   {
				   if (DoM2_2->Text[i] >= '0' && DoM2_2->Text->Length <= '9') {}
				   else return false;
				   return true;
			   }

			   if (Year2->Text->Length != 4) return false;
			   for (int i = 0; i < Year2->Text->Length; ++i)
			   {
				   if (Year2->Text[i] >= '0' && Year2->Text->Length <= '9') {}
				   else return false;
				   return true;
			   }
		   }

	private: System::Void ClearButton_Click(System::Object^ sender, System::EventArgs^ e) {
		DoM1->Text = ""; DoM2->Text = ""; Year1->Text = ""; DoM1_1->Text = "";
		DoM2_2->Text = ""; Result->Text = ""; Result2->Text = ""; Result3->Text = ""; Year2->Text = "";
		FormatCB1->SelectedIndex = -1;
	}

	private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}

    bool isleap(int year) {
		return (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0);
	}

	private: System::Void resultButton_Click(System::Object^ sender, System::EventArgs^ e) {

		if (CheckInputBoxes())
		{
			int day1, month1, year1, day2, month2, year2;
			if (FormatCB1->SelectedIndex == 0)
			{
				day1 = System::Convert::ToInt16(DoM1->Text);
				month1 = System::Convert::ToInt16(DoM2->Text);
				year1 = System::Convert::ToInt16(Year1->Text);
				day2 = System::Convert::ToInt16(DoM1_1->Text);
				month2 = System::Convert::ToInt16(DoM2_2->Text);
				year2 = System::Convert::ToInt16(Year2->Text);
			}
			else if (FormatCB1->SelectedIndex == 1)
			{
				day1 = System::Convert::ToInt16(DoM2->Text);
				month1 = System::Convert::ToInt16(DoM1->Text);
				year1 = System::Convert::ToInt16(Year1->Text);
				day2 = System::Convert::ToInt16(DoM2_2->Text);
				month2 = System::Convert::ToInt16(DoM1_1->Text);
				year2 = System::Convert::ToInt16(Year2->Text);
			}

			if (CheckBox(day1, day2, month1, month2, year1, year2)) {
				int daycount = DaysCount(day1, day2, month1, month2, year1, year2);
				int monthcount = MonthsCount(day1, day2, month1, month2, year1, year2);
				int yearcount = YearCount(day1, day2, month1, month2, year1, year2, monthcount);

				Result->Text = System::Convert::ToString(daycount);
				Result2->Text = System::Convert::ToString(monthcount);
				Result3->Text = System::Convert::ToString(yearcount);
			}
			else MessageBox::Show("Данные введены некорректно!");
		}
		else MessageBox::Show("Данные введены некорректно!");
	}
	
    private: System::Void Result3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

    private: System::Void ClearButton2_Click(System::Object^ sender, System::EventArgs^ e) {
	DoM1_3->Text = ""; DoM2_3->Text = ""; Year3->Text = ""; DoMToday->Text = ""; DoMToday2->Text = "";
	YearToday->Text = ""; ResultT1->Text = ""; ResultT2->Text = ""; ResultT3->Text = ""; 
	FormatCB2->SelectedIndex = -1;
}

	bool CheckInputBoxes2()
	   {
		   if (DoM1_3->Text->Length == 0 || DoM1_3->Text->Length > 2) return false;
		   for (int i = 0; i < DoM1_3->Text->Length; ++i)
		   {
			   if (DoM1_3->Text[i] >= '0' && DoM1_3->Text->Length <= '9') {}
			   else return false;
			   return true;
		   }

		   if (DoM2_3->Text->Length == 0 || DoM2_3->Text->Length > 2) return false;
		   for (int i = 0; i < DoM2_3->Text->Length; ++i)
		   {
			   if (DoM2_3->Text[i] >= '0' && DoM2_3->Text->Length <= '9') {}
			   else return false;
			   return true;
		   }

		   if (Year3->Text->Length != 4) return false;
		   for (int i = 0; i < Year3->Text->Length; ++i)
		   {
			   if (Year3->Text[i] >= '0' && Year2->Text->Length <= '9') {}
			   else return false;
			   return true;
		   }

		   if (DoMToday->Text->Length == 0 || DoMToday->Text->Length > 2) return false;
		   for (int i = 0; i < DoMToday->Text->Length; ++i)
		   {
			   if (DoMToday->Text[i] >= '0' && DoMToday->Text->Length <= '9') {}
			   else return false;
			   return true;
		   }

		   if (DoMToday2->Text->Length == 0 || DoMToday2->Text->Length > 2) return false;
		   for (int i = 0; i < DoMToday2->Text->Length; ++i)
		   {
			   if (DoMToday2->Text[i] >= '0' && DoMToday2->Text->Length <= '9') {}
			   else return false;
			   return true;
		   }

		   if (YearToday->Text->Length != 4) return false;
		   for (int i = 0; i < YearToday->Text->Length; ++i)
		   {
			   if (YearToday->Text[i] >= '0' && YearToday->Text->Length <= '9') {}
			   else return false;
			   return true;
		   }
	   }
	
	bool CheckBox(int day1, int day2, int month1, int month2, int year1, int year2)
	{
		if (day1 < 1 || day1 > 31 || month1 < 1 || month1 > 12 || year1 < 0)
		{
			if (day2 < 1 || day2 > 31 || month2 < 0 || month2 > 12 || year2 < 0)
			{
				return false;
			}
			else return true;
		}
		else return true;
	}

    private: System::Void resultButton2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (CheckInputBoxes2())
	{
		int day1, month1, year1, day2, month2, year2;
		if (FormatCB2->SelectedIndex == 0)
		{
			day1 = System::Convert::ToInt16(DoM1_3->Text);
			month1 = System::Convert::ToInt16(DoM2_3->Text);
			year1 = System::Convert::ToInt16(Year3->Text);
			day2 = System::Convert::ToInt16(DoMToday->Text);
			month2 = System::Convert::ToInt16(DoMToday2->Text);
			year2 = System::Convert::ToInt16(YearToday->Text);
		}
		else if (FormatCB2->SelectedIndex == 1)
		{
			day1 = System::Convert::ToInt16(DoM2_3->Text);
			month1 = System::Convert::ToInt16(DoM1_3->Text);
			year1 = System::Convert::ToInt16(Year3->Text);
			day2 = System::Convert::ToInt16(DoMToday->Text);
			month2 = System::Convert::ToInt16(DoMToday2->Text);
			year2 = System::Convert::ToInt16(YearToday->Text);
		}
		if (CheckBox(day1, day2, month1, month2, year1, year2)) {
			int daycountt = DaysCount(day1, day2, month1, month2, year1, year2);
			int monthcountt = MonthsCount(day1, day2, month1, month2, year1, year2);
			int yearcountt = YearCount(day1, day2, month1, month2, year1, year2, monthcountt);

			ResultT1->Text = System::Convert::ToString(daycountt);
			ResultT2->Text = System::Convert::ToString(monthcountt);
			ResultT3->Text = System::Convert::ToString(yearcountt);
		}
		else MessageBox::Show("Данные введены некорректно!");
	}
	else MessageBox::Show("Данные введены некорректно!");
    }
    
    private: System::Void FormatCB2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	time_t date = time(NULL);
	tm* localTime = localtime(&date);
	if (FormatCB2->SelectedIndex == 0)
	{
		DoMToday->Text = System::Convert::ToString(localTime->tm_mday);
		DoMToday2->Text = System::Convert::ToString(1 + localTime->tm_mon);
	}
	else if (FormatCB2->SelectedIndex == 1)
	{
		DoMToday->Text = System::Convert::ToString(1 + localTime->tm_mon);
		DoMToday2->Text = System::Convert::ToString(localTime->tm_mday);
	}
	YearToday->Text = System::Convert::ToString(1900 + localTime->tm_year);
}
};
};