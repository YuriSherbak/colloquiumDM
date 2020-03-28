#pragma once
#include "Parser.h"

namespace colloquiumDM {

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
	private: System::Windows::Forms::TabPage^ tabPage4;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabControl^ TabControl;


	private: System::Windows::Forms::TabPage^ tabPage1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button_10DEGREE_N;

	private: System::Windows::Forms::Button^ button_CE_N;
	private: System::Windows::Forms::Button^ button_AC_N;
	private: System::Windows::Forms::Button^ button_COM_N;



	private: System::Windows::Forms::Button^ button_MINUS_N;

	private: System::Windows::Forms::Button^ button_PLUS_N;

	private: System::Windows::Forms::Button^ button_4_N;

	private: System::Windows::Forms::Button^ button_7_N;
	private: System::Windows::Forms::Button^ button_5_N;


	private: System::Windows::Forms::Button^ button_8_N;
	private: System::Windows::Forms::Button^ button_6_N;


	private: System::Windows::Forms::Button^ button_9_N;
	private: System::Windows::Forms::Button^ button_CHANGE_SIGN_N;
	private: System::Windows::Forms::Button^ button_LCM_N;
	private: System::Windows::Forms::Button^ button_GCD_N;





	private: System::Windows::Forms::Button^ button_MOD_N;
	private: System::Windows::Forms::Button^ button_DIV_N;
	private: System::Windows::Forms::Button^ button_PLUSPLUS_N;



	private: System::Windows::Forms::Button^ button_EQUALS_N;
	private: System::Windows::Forms::Button^ button_COMMA_N;



	private: System::Windows::Forms::Button^ button_MULT_N;

	private: System::Windows::Forms::Button^ button_1_N;
	private: System::Windows::Forms::Button^ button_0_N;


	private: System::Windows::Forms::Button^ button_2_N;
	private: System::Windows::Forms::Button^ button_MINUSMINUS_N;


	private: System::Windows::Forms::Button^ button_3_N;

	private: System::Windows::Forms::TextBox^ main_screen_N;
	private: System::Windows::Forms::TextBox^ additional_screen_N;
	private: System::Windows::Forms::Label^ lbl_info;

	protected:




































































































	private: System::ComponentModel::IContainer^ components;






























	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->TabControl = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->main_screen_N = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button_10DEGREE_N = (gcnew System::Windows::Forms::Button());
			this->button_CE_N = (gcnew System::Windows::Forms::Button());
			this->button_AC_N = (gcnew System::Windows::Forms::Button());
			this->button_COM_N = (gcnew System::Windows::Forms::Button());
			this->button_MINUS_N = (gcnew System::Windows::Forms::Button());
			this->button_PLUS_N = (gcnew System::Windows::Forms::Button());
			this->button_4_N = (gcnew System::Windows::Forms::Button());
			this->button_7_N = (gcnew System::Windows::Forms::Button());
			this->button_5_N = (gcnew System::Windows::Forms::Button());
			this->button_8_N = (gcnew System::Windows::Forms::Button());
			this->button_6_N = (gcnew System::Windows::Forms::Button());
			this->button_9_N = (gcnew System::Windows::Forms::Button());
			this->additional_screen_N = (gcnew System::Windows::Forms::TextBox());
			this->button_CHANGE_SIGN_N = (gcnew System::Windows::Forms::Button());
			this->button_LCM_N = (gcnew System::Windows::Forms::Button());
			this->button_GCD_N = (gcnew System::Windows::Forms::Button());
			this->button_MOD_N = (gcnew System::Windows::Forms::Button());
			this->button_DIV_N = (gcnew System::Windows::Forms::Button());
			this->button_PLUSPLUS_N = (gcnew System::Windows::Forms::Button());
			this->button_EQUALS_N = (gcnew System::Windows::Forms::Button());
			this->button_COMMA_N = (gcnew System::Windows::Forms::Button());
			this->button_MULT_N = (gcnew System::Windows::Forms::Button());
			this->button_1_N = (gcnew System::Windows::Forms::Button());
			this->button_0_N = (gcnew System::Windows::Forms::Button());
			this->button_2_N = (gcnew System::Windows::Forms::Button());
			this->button_MINUSMINUS_N = (gcnew System::Windows::Forms::Button());
			this->button_3_N = (gcnew System::Windows::Forms::Button());
			this->lbl_info = (gcnew System::Windows::Forms::Label());
			this->TabControl->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabPage4
			// 
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3, 3, 3, 3);
			this->tabPage4->Size = System::Drawing::Size(633, 356);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Многочлены";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3, 3, 3, 3);
			this->tabPage3->Size = System::Drawing::Size(633, 356);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Рациональные числа";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3, 3, 3, 3);
			this->tabPage2->Size = System::Drawing::Size(633, 356);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Целые числа";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// TabControl
			// 
			this->TabControl->Controls->Add(this->tabPage1);
			this->TabControl->Controls->Add(this->tabPage2);
			this->TabControl->Controls->Add(this->tabPage3);
			this->TabControl->Controls->Add(this->tabPage4);
			this->TabControl->Location = System::Drawing::Point(-2, -4);
			this->TabControl->Name = L"TabControl";
			this->TabControl->SelectedIndex = 0;
			this->TabControl->Size = System::Drawing::Size(641, 382);
			this->TabControl->TabIndex = 64;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->main_screen_N);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->button_10DEGREE_N);
			this->tabPage1->Controls->Add(this->button_CE_N);
			this->tabPage1->Controls->Add(this->button_AC_N);
			this->tabPage1->Controls->Add(this->button_COM_N);
			this->tabPage1->Controls->Add(this->button_MINUS_N);
			this->tabPage1->Controls->Add(this->button_PLUS_N);
			this->tabPage1->Controls->Add(this->button_4_N);
			this->tabPage1->Controls->Add(this->button_7_N);
			this->tabPage1->Controls->Add(this->button_5_N);
			this->tabPage1->Controls->Add(this->button_8_N);
			this->tabPage1->Controls->Add(this->button_6_N);
			this->tabPage1->Controls->Add(this->button_9_N);
			this->tabPage1->Controls->Add(this->additional_screen_N);
			this->tabPage1->Controls->Add(this->button_CHANGE_SIGN_N);
			this->tabPage1->Controls->Add(this->button_LCM_N);
			this->tabPage1->Controls->Add(this->button_GCD_N);
			this->tabPage1->Controls->Add(this->button_MOD_N);
			this->tabPage1->Controls->Add(this->button_DIV_N);
			this->tabPage1->Controls->Add(this->button_PLUSPLUS_N);
			this->tabPage1->Controls->Add(this->button_EQUALS_N);
			this->tabPage1->Controls->Add(this->button_COMMA_N);
			this->tabPage1->Controls->Add(this->button_MULT_N);
			this->tabPage1->Controls->Add(this->button_1_N);
			this->tabPage1->Controls->Add(this->button_0_N);
			this->tabPage1->Controls->Add(this->button_2_N);
			this->tabPage1->Controls->Add(this->button_MINUSMINUS_N);
			this->tabPage1->Controls->Add(this->button_3_N);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3, 3, 3, 3);
			this->tabPage1->Size = System::Drawing::Size(633, 356);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Натуральные числа";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// main_screen_N
			// 
			this->main_screen_N->Location = System::Drawing::Point(17, 37);
			this->main_screen_N->Multiline = true;
			this->main_screen_N->Name = L"main_screen_N";
			this->main_screen_N->Size = System::Drawing::Size(598, 29);
			this->main_screen_N->TabIndex = 92;
			this->main_screen_N->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->main_screen_N->TextChanged += gcnew System::EventHandler(this, &MyForm::main_screen_N_TextChanged);
			this->main_screen_N->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::main_screen_N_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(14, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 255);
			this->label1->TabIndex = 91;
			this->label1->Text = L"З\r\nД\r\nЕ\r\nС\r\nЬ\r\nО\r\nП\r\nИ\r\nС\r\nА\r\nН\r\nИ\r\nЕ\r\nФУНК\r\nЦИЙ";
			// 
			// button_10DEGREE_N
			// 
			this->button_10DEGREE_N->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_10DEGREE_N->BackColor = System::Drawing::SystemColors::Menu;
			this->button_10DEGREE_N->FlatAppearance->BorderSize = 0;
			this->button_10DEGREE_N->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_10DEGREE_N->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_10DEGREE_N->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_10DEGREE_N->Location = System::Drawing::Point(341, 132);
			this->button_10DEGREE_N->Name = L"button_10DEGREE_N";
			this->button_10DEGREE_N->Size = System::Drawing::Size(50, 50);
			this->button_10DEGREE_N->TabIndex = 90;
			this->button_10DEGREE_N->Text = L"10^x";
			this->button_10DEGREE_N->UseVisualStyleBackColor = false;
			// 
			// button_CE_N
			// 
			this->button_CE_N->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_CE_N->BackColor = System::Drawing::SystemColors::Menu;
			this->button_CE_N->FlatAppearance->BorderSize = 0;
			this->button_CE_N->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_CE_N->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_CE_N->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_CE_N->Location = System::Drawing::Point(341, 76);
			this->button_CE_N->Name = L"button_CE_N";
			this->button_CE_N->Size = System::Drawing::Size(50, 50);
			this->button_CE_N->TabIndex = 88;
			this->button_CE_N->Text = L"CE";
			this->button_CE_N->UseVisualStyleBackColor = false;
			// 
			// button_AC_N
			// 
			this->button_AC_N->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_AC_N->BackColor = System::Drawing::SystemColors::Menu;
			this->button_AC_N->FlatAppearance->BorderSize = 0;
			this->button_AC_N->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_AC_N->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_AC_N->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_AC_N->Location = System::Drawing::Point(285, 76);
			this->button_AC_N->Name = L"button_AC_N";
			this->button_AC_N->Size = System::Drawing::Size(50, 50);
			this->button_AC_N->TabIndex = 87;
			this->button_AC_N->Text = L"AC";
			this->button_AC_N->UseVisualStyleBackColor = false;
			// 
			// button_COM_N
			// 
			this->button_COM_N->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_COM_N->BackColor = System::Drawing::SystemColors::Menu;
			this->button_COM_N->FlatAppearance->BorderSize = 0;
			this->button_COM_N->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_COM_N->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_COM_N->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_COM_N->Location = System::Drawing::Point(285, 132);
			this->button_COM_N->Name = L"button_COM_N";
			this->button_COM_N->Size = System::Drawing::Size(50, 50);
			this->button_COM_N->TabIndex = 79;
			this->button_COM_N->Text = L"COM";
			this->button_COM_N->UseVisualStyleBackColor = false;
			// 
			// button_MINUS_N
			// 
			this->button_MINUS_N->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_MINUS_N->BackColor = System::Drawing::SystemColors::Menu;
			this->button_MINUS_N->FlatAppearance->BorderSize = 0;
			this->button_MINUS_N->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_MINUS_N->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_MINUS_N->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_MINUS_N->Location = System::Drawing::Point(397, 132);
			this->button_MINUS_N->Name = L"button_MINUS_N";
			this->button_MINUS_N->Size = System::Drawing::Size(50, 50);
			this->button_MINUS_N->TabIndex = 77;
			this->button_MINUS_N->Text = L"-";
			this->button_MINUS_N->UseVisualStyleBackColor = false;
			this->button_MINUS_N->Click += gcnew System::EventHandler(this, &MyForm::button_MINUS_N_Click);
			// 
			// button_PLUS_N
			// 
			this->button_PLUS_N->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_PLUS_N->BackColor = System::Drawing::SystemColors::Menu;
			this->button_PLUS_N->FlatAppearance->BorderSize = 0;
			this->button_PLUS_N->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_PLUS_N->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_PLUS_N->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_PLUS_N->Location = System::Drawing::Point(397, 76);
			this->button_PLUS_N->Name = L"button_PLUS_N";
			this->button_PLUS_N->Size = System::Drawing::Size(50, 50);
			this->button_PLUS_N->TabIndex = 76;
			this->button_PLUS_N->Text = L"+";
			this->button_PLUS_N->UseVisualStyleBackColor = false;
			this->button_PLUS_N->Click += gcnew System::EventHandler(this, &MyForm::button_PLUS_N_Click);
			// 
			// button_4_N
			// 
			this->button_4_N->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_4_N->BackColor = System::Drawing::Color::LightGray;
			this->button_4_N->FlatAppearance->BorderSize = 0;
			this->button_4_N->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_4_N->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_4_N->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_4_N->Location = System::Drawing::Point(453, 132);
			this->button_4_N->Name = L"button_4_N";
			this->button_4_N->Size = System::Drawing::Size(50, 50);
			this->button_4_N->TabIndex = 74;
			this->button_4_N->Text = L"4";
			this->button_4_N->UseVisualStyleBackColor = false;
			this->button_4_N->Click += gcnew System::EventHandler(this, &MyForm::button_4_N_Click);
			// 
			// button_7_N
			// 
			this->button_7_N->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_7_N->BackColor = System::Drawing::Color::LightGray;
			this->button_7_N->FlatAppearance->BorderSize = 0;
			this->button_7_N->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_7_N->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_7_N->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_7_N->Location = System::Drawing::Point(453, 76);
			this->button_7_N->Name = L"button_7_N";
			this->button_7_N->Size = System::Drawing::Size(50, 50);
			this->button_7_N->TabIndex = 73;
			this->button_7_N->Text = L"7";
			this->button_7_N->UseVisualStyleBackColor = false;
			this->button_7_N->Click += gcnew System::EventHandler(this, &MyForm::button_7_N_Click);
			// 
			// button_5_N
			// 
			this->button_5_N->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_5_N->BackColor = System::Drawing::Color::LightGray;
			this->button_5_N->FlatAppearance->BorderSize = 0;
			this->button_5_N->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_5_N->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_5_N->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_5_N->Location = System::Drawing::Point(509, 132);
			this->button_5_N->Name = L"button_5_N";
			this->button_5_N->Size = System::Drawing::Size(50, 50);
			this->button_5_N->TabIndex = 70;
			this->button_5_N->Text = L"5";
			this->button_5_N->UseVisualStyleBackColor = false;
			this->button_5_N->Click += gcnew System::EventHandler(this, &MyForm::button_5_N_Click);
			// 
			// button_8_N
			// 
			this->button_8_N->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_8_N->BackColor = System::Drawing::Color::LightGray;
			this->button_8_N->FlatAppearance->BorderSize = 0;
			this->button_8_N->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_8_N->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_8_N->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_8_N->Location = System::Drawing::Point(509, 76);
			this->button_8_N->Name = L"button_8_N";
			this->button_8_N->Size = System::Drawing::Size(50, 50);
			this->button_8_N->TabIndex = 69;
			this->button_8_N->Text = L"8";
			this->button_8_N->UseVisualStyleBackColor = false;
			this->button_8_N->Click += gcnew System::EventHandler(this, &MyForm::button_8_N_Click);
			// 
			// button_6_N
			// 
			this->button_6_N->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_6_N->BackColor = System::Drawing::Color::LightGray;
			this->button_6_N->FlatAppearance->BorderSize = 0;
			this->button_6_N->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_6_N->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_6_N->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_6_N->Location = System::Drawing::Point(565, 132);
			this->button_6_N->Name = L"button_6_N";
			this->button_6_N->Size = System::Drawing::Size(50, 50);
			this->button_6_N->TabIndex = 66;
			this->button_6_N->Text = L"6";
			this->button_6_N->UseVisualStyleBackColor = false;
			this->button_6_N->Click += gcnew System::EventHandler(this, &MyForm::button_6_N_Click);
			// 
			// button_9_N
			// 
			this->button_9_N->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_9_N->BackColor = System::Drawing::Color::LightGray;
			this->button_9_N->FlatAppearance->BorderSize = 0;
			this->button_9_N->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_9_N->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_9_N->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_9_N->Location = System::Drawing::Point(565, 76);
			this->button_9_N->Name = L"button_9_N";
			this->button_9_N->Size = System::Drawing::Size(50, 50);
			this->button_9_N->TabIndex = 65;
			this->button_9_N->Text = L"9";
			this->button_9_N->UseVisualStyleBackColor = false;
			this->button_9_N->Click += gcnew System::EventHandler(this, &MyForm::button_9_N_Click);
			// 
			// additional_screen_N
			// 
			this->additional_screen_N->Location = System::Drawing::Point(17, 9);
			this->additional_screen_N->Multiline = true;
			this->additional_screen_N->Name = L"additional_screen_N";
			this->additional_screen_N->ReadOnly = true;
			this->additional_screen_N->Size = System::Drawing::Size(598, 29);
			this->additional_screen_N->TabIndex = 64;
			this->additional_screen_N->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button_CHANGE_SIGN_N
			// 
			this->button_CHANGE_SIGN_N->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_CHANGE_SIGN_N->BackColor = System::Drawing::SystemColors::Menu;
			this->button_CHANGE_SIGN_N->FlatAppearance->BorderSize = 0;
			this->button_CHANGE_SIGN_N->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_CHANGE_SIGN_N->Font = (gcnew System::Drawing::Font(L"Arial", 18.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_CHANGE_SIGN_N->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_CHANGE_SIGN_N->Location = System::Drawing::Point(397, 301);
			this->button_CHANGE_SIGN_N->Name = L"button_CHANGE_SIGN_N";
			this->button_CHANGE_SIGN_N->Size = System::Drawing::Size(50, 50);
			this->button_CHANGE_SIGN_N->TabIndex = 89;
			this->button_CHANGE_SIGN_N->Text = L"+/-";
			this->button_CHANGE_SIGN_N->UseVisualStyleBackColor = false;
			// 
			// button_LCM_N
			// 
			this->button_LCM_N->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_LCM_N->BackColor = System::Drawing::SystemColors::Menu;
			this->button_LCM_N->FlatAppearance->BorderSize = 0;
			this->button_LCM_N->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_LCM_N->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_LCM_N->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_LCM_N->Location = System::Drawing::Point(341, 188);
			this->button_LCM_N->Name = L"button_LCM_N";
			this->button_LCM_N->Size = System::Drawing::Size(50, 50);
			this->button_LCM_N->TabIndex = 86;
			this->button_LCM_N->Text = L"LCM";
			this->button_LCM_N->UseVisualStyleBackColor = false;
			// 
			// button_GCD_N
			// 
			this->button_GCD_N->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_GCD_N->BackColor = System::Drawing::SystemColors::Menu;
			this->button_GCD_N->FlatAppearance->BorderSize = 0;
			this->button_GCD_N->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_GCD_N->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_GCD_N->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_GCD_N->Location = System::Drawing::Point(285, 188);
			this->button_GCD_N->Name = L"button_GCD_N";
			this->button_GCD_N->Size = System::Drawing::Size(50, 50);
			this->button_GCD_N->TabIndex = 85;
			this->button_GCD_N->Text = L"GCD";
			this->button_GCD_N->UseVisualStyleBackColor = false;
			// 
			// button_MOD_N
			// 
			this->button_MOD_N->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_MOD_N->BackColor = System::Drawing::SystemColors::Menu;
			this->button_MOD_N->FlatAppearance->BorderSize = 0;
			this->button_MOD_N->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_MOD_N->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_MOD_N->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_MOD_N->Location = System::Drawing::Point(341, 244);
			this->button_MOD_N->Name = L"button_MOD_N";
			this->button_MOD_N->Size = System::Drawing::Size(50, 50);
			this->button_MOD_N->TabIndex = 84;
			this->button_MOD_N->Text = L"MOD";
			this->button_MOD_N->UseVisualStyleBackColor = false;
			// 
			// button_DIV_N
			// 
			this->button_DIV_N->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_DIV_N->BackColor = System::Drawing::SystemColors::Menu;
			this->button_DIV_N->FlatAppearance->BorderSize = 0;
			this->button_DIV_N->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_DIV_N->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_DIV_N->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_DIV_N->Location = System::Drawing::Point(397, 245);
			this->button_DIV_N->Name = L"button_DIV_N";
			this->button_DIV_N->Size = System::Drawing::Size(50, 50);
			this->button_DIV_N->TabIndex = 83;
			this->button_DIV_N->Text = L"/";
			this->button_DIV_N->UseVisualStyleBackColor = false;
			this->button_DIV_N->Click += gcnew System::EventHandler(this, &MyForm::button_DIV_N_Click);
			// 
			// button_PLUSPLUS_N
			// 
			this->button_PLUSPLUS_N->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_PLUSPLUS_N->BackColor = System::Drawing::SystemColors::Menu;
			this->button_PLUSPLUS_N->FlatAppearance->BorderSize = 0;
			this->button_PLUSPLUS_N->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_PLUSPLUS_N->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_PLUSPLUS_N->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_PLUSPLUS_N->Location = System::Drawing::Point(285, 300);
			this->button_PLUSPLUS_N->Name = L"button_PLUSPLUS_N";
			this->button_PLUSPLUS_N->Size = System::Drawing::Size(50, 50);
			this->button_PLUSPLUS_N->TabIndex = 82;
			this->button_PLUSPLUS_N->Text = L"++";
			this->button_PLUSPLUS_N->UseVisualStyleBackColor = false;
			// 
			// button_EQUALS_N
			// 
			this->button_EQUALS_N->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_EQUALS_N->BackColor = System::Drawing::SystemColors::Menu;
			this->button_EQUALS_N->FlatAppearance->BorderSize = 0;
			this->button_EQUALS_N->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_EQUALS_N->Font = (gcnew System::Drawing::Font(L"Arial", 32.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_EQUALS_N->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_EQUALS_N->Location = System::Drawing::Point(453, 300);
			this->button_EQUALS_N->Name = L"button_EQUALS_N";
			this->button_EQUALS_N->Size = System::Drawing::Size(162, 50);
			this->button_EQUALS_N->TabIndex = 81;
			this->button_EQUALS_N->Text = L"=";
			this->button_EQUALS_N->UseVisualStyleBackColor = false;
			this->button_EQUALS_N->Click += gcnew System::EventHandler(this, &MyForm::button_EQUALS_N_Click);
			// 
			// button_COMMA_N
			// 
			this->button_COMMA_N->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_COMMA_N->BackColor = System::Drawing::SystemColors::Menu;
			this->button_COMMA_N->FlatAppearance->BorderSize = 0;
			this->button_COMMA_N->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_COMMA_N->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_COMMA_N->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_COMMA_N->Location = System::Drawing::Point(285, 244);
			this->button_COMMA_N->Name = L"button_COMMA_N";
			this->button_COMMA_N->Size = System::Drawing::Size(50, 50);
			this->button_COMMA_N->TabIndex = 80;
			this->button_COMMA_N->Text = L",";
			this->button_COMMA_N->UseVisualStyleBackColor = false;
			// 
			// button_MULT_N
			// 
			this->button_MULT_N->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_MULT_N->BackColor = System::Drawing::SystemColors::Menu;
			this->button_MULT_N->FlatAppearance->BorderSize = 0;
			this->button_MULT_N->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_MULT_N->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_MULT_N->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_MULT_N->Location = System::Drawing::Point(397, 188);
			this->button_MULT_N->Name = L"button_MULT_N";
			this->button_MULT_N->Size = System::Drawing::Size(50, 50);
			this->button_MULT_N->TabIndex = 78;
			this->button_MULT_N->Text = L"*";
			this->button_MULT_N->UseVisualStyleBackColor = false;
			this->button_MULT_N->Click += gcnew System::EventHandler(this, &MyForm::button_MULT_N_Click);
			// 
			// button_1_N
			// 
			this->button_1_N->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_1_N->BackColor = System::Drawing::Color::LightGray;
			this->button_1_N->FlatAppearance->BorderSize = 0;
			this->button_1_N->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_1_N->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_1_N->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_1_N->Location = System::Drawing::Point(453, 188);
			this->button_1_N->Name = L"button_1_N";
			this->button_1_N->Size = System::Drawing::Size(50, 50);
			this->button_1_N->TabIndex = 75;
			this->button_1_N->Text = L"1";
			this->button_1_N->UseVisualStyleBackColor = false;
			this->button_1_N->Click += gcnew System::EventHandler(this, &MyForm::button_1_N_Click);
			// 
			// button_0_N
			// 
			this->button_0_N->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_0_N->BackColor = System::Drawing::Color::LightGray;
			this->button_0_N->FlatAppearance->BorderSize = 0;
			this->button_0_N->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_0_N->Font = (gcnew System::Drawing::Font(L"Arial", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_0_N->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_0_N->Location = System::Drawing::Point(453, 244);
			this->button_0_N->Name = L"button_0_N";
			this->button_0_N->Size = System::Drawing::Size(162, 50);
			this->button_0_N->TabIndex = 72;
			this->button_0_N->Text = L"0";
			this->button_0_N->UseVisualStyleBackColor = false;
			this->button_0_N->Click += gcnew System::EventHandler(this, &MyForm::button_0_N_Click);
			// 
			// button_2_N
			// 
			this->button_2_N->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_2_N->BackColor = System::Drawing::Color::LightGray;
			this->button_2_N->FlatAppearance->BorderSize = 0;
			this->button_2_N->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_2_N->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_2_N->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_2_N->Location = System::Drawing::Point(509, 188);
			this->button_2_N->Name = L"button_2_N";
			this->button_2_N->Size = System::Drawing::Size(50, 50);
			this->button_2_N->TabIndex = 71;
			this->button_2_N->Text = L"2";
			this->button_2_N->UseVisualStyleBackColor = false;
			this->button_2_N->Click += gcnew System::EventHandler(this, &MyForm::button_2_N_Click);
			// 
			// button_MINUSMINUS_N
			// 
			this->button_MINUSMINUS_N->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_MINUSMINUS_N->BackColor = System::Drawing::SystemColors::Menu;
			this->button_MINUSMINUS_N->FlatAppearance->BorderSize = 0;
			this->button_MINUSMINUS_N->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_MINUSMINUS_N->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_MINUSMINUS_N->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_MINUSMINUS_N->Location = System::Drawing::Point(341, 300);
			this->button_MINUSMINUS_N->Name = L"button_MINUSMINUS_N";
			this->button_MINUSMINUS_N->Size = System::Drawing::Size(50, 50);
			this->button_MINUSMINUS_N->TabIndex = 68;
			this->button_MINUSMINUS_N->Text = L"--";
			this->button_MINUSMINUS_N->UseVisualStyleBackColor = false;
			// 
			// button_3_N
			// 
			this->button_3_N->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_3_N->BackColor = System::Drawing::Color::LightGray;
			this->button_3_N->FlatAppearance->BorderSize = 0;
			this->button_3_N->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_3_N->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_3_N->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_3_N->Location = System::Drawing::Point(565, 188);
			this->button_3_N->Name = L"button_3_N";
			this->button_3_N->Size = System::Drawing::Size(50, 50);
			this->button_3_N->TabIndex = 67;
			this->button_3_N->Text = L"3";
			this->button_3_N->UseVisualStyleBackColor = false;
			this->button_3_N->Click += gcnew System::EventHandler(this, &MyForm::button_3_N_Click);
			// 
			// lbl_info
			// 
			this->lbl_info->AutoSize = true;
			this->lbl_info->ForeColor = System::Drawing::Color::DarkRed;
			this->lbl_info->Location = System::Drawing::Point(231, 381);
			this->lbl_info->Name = L"lbl_info";
			this->lbl_info->Size = System::Drawing::Size(162, 13);
			this->lbl_info->TabIndex = 65;
			this->lbl_info->Text = L"Информационные сообщения!";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(638, 406);
			this->Controls->Add(this->lbl_info);
			this->Controls->Add(this->TabControl);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"Calculate";
			this->TabControl->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
//------------------------- Main Screen --------------------------------------
private: System::Void main_screen_N_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9') 
		|| (e->KeyChar == '\b')		//backspace
		|| ((e->KeyChar == '+') || (e->KeyChar == '-') || (e->KeyChar == '*') || (e->KeyChar == '/')) && checkMainScreenNotEmpty()
			) 
		return;
	e->Handled = true;
}
private: bool checkMainScreenNotEmpty() {
	return main_screen_N->Text->Length > 0;
}
private: bool checkmainScreenFirstIsNotNull() {
	if (!checkMainScreenNotEmpty()) return true;

	return main_screen_N->Text[0] != '0';
}
private: bool checkAdditionalScreenNotEmpty() {
	return additional_screen_N->Text->Length > 0;
}
private: void printNullMainScreen() {
	lbl_info->Text = "Пустая строка! Введите какое-нибудь число!";
}
private: System::Void main_screen_N_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	TextBox^ txtMain = (TextBox^)sender;

	lbl_info->Text = "";	

	if (checkMainScreenNotEmpty()) {
		int length = main_screen_N->Text->Length;		
		switch (main_screen_N->Text[length - 1])
		{
		case '+':
			additional_screen_N->Text = main_screen_N->Text;
			main_screen_N->Text = "";
			break;
		case '-':
			additional_screen_N->Text = main_screen_N->Text;
			main_screen_N->Text = "";
			break;
		case '*':
			additional_screen_N->Text = main_screen_N->Text;
			main_screen_N->Text = "";
			break;
		case '/':
			additional_screen_N->Text = main_screen_N->Text;
			main_screen_N->Text = "";
			break;
		case '=':
			additional_screen_N->Text = String::Concat(additional_screen_N->Text, main_screen_N->Text);
			//обработка результата
			//вывод на экран
			//main_screen_N->Text = ParseStr_N(additional_screen_N->Text).toString();
			break;
		default:
			break;
		}
	}	
}
//-------------------------------------------------------------------------------
//------------------------- btn logic--------------------------------------
private: System::Void button_1_N_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (checkmainScreenFirstIsNotNull()) {
		main_screen_N->Text = String::Concat(main_screen_N->Text, btn->Text);
	}	
}
private: System::Void button_2_N_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (checkmainScreenFirstIsNotNull()) {
		main_screen_N->Text = String::Concat(main_screen_N->Text, btn->Text);
	}
}
private: System::Void button_3_N_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (checkmainScreenFirstIsNotNull()) {
		main_screen_N->Text = String::Concat(main_screen_N->Text, btn->Text);
	}
}
private: System::Void button_4_N_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (checkmainScreenFirstIsNotNull()) {
		main_screen_N->Text = String::Concat(main_screen_N->Text, btn->Text);
	}
}
private: System::Void button_5_N_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (checkmainScreenFirstIsNotNull()) {
		main_screen_N->Text = String::Concat(main_screen_N->Text, btn->Text);
	}
}
private: System::Void button_6_N_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (checkmainScreenFirstIsNotNull()) {
		main_screen_N->Text = String::Concat(main_screen_N->Text, btn->Text);
	}
}
private: System::Void button_7_N_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (checkmainScreenFirstIsNotNull()) {
		main_screen_N->Text = String::Concat(main_screen_N->Text, btn->Text);
	}
}
private: System::Void button_8_N_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (checkmainScreenFirstIsNotNull()) {
		main_screen_N->Text = String::Concat(main_screen_N->Text, btn->Text);
	}
}
private: System::Void button_9_N_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (checkmainScreenFirstIsNotNull()) {
		main_screen_N->Text = String::Concat(main_screen_N->Text, btn->Text);
	}
}
private: System::Void button_0_N_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (checkmainScreenFirstIsNotNull()) {
		main_screen_N->Text = String::Concat(main_screen_N->Text, btn->Text);
	}
}
private: System::Void button_PLUS_N_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (checkMainScreenNotEmpty()) {
		main_screen_N->Text = String::Concat(main_screen_N->Text, btn->Text);
	}
	else {
		printNullMainScreen();
	}
}
private: System::Void button_MINUS_N_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (checkMainScreenNotEmpty()) {
		main_screen_N->Text = String::Concat(main_screen_N->Text, btn->Text);
	}
	else {
		printNullMainScreen();
	}
}

private: System::Void button_MULT_N_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (checkMainScreenNotEmpty()) {
		main_screen_N->Text = String::Concat(main_screen_N->Text, btn->Text);
	}
	else {
		printNullMainScreen();
	}
}
private: System::Void button_DIV_N_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (checkMainScreenNotEmpty()) {
		main_screen_N->Text = String::Concat(main_screen_N->Text, btn->Text);
	}
	else {
		printNullMainScreen();
	}
}
private: System::Void button_EQUALS_N_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (checkMainScreenNotEmpty() && checkAdditionalScreenNotEmpty()) {
		main_screen_N->Text = String::Concat(main_screen_N->Text, btn->Text);
	}
	else {
		printNullMainScreen();
	}
}

//-------------------------------------------------------------------------------

};
}
