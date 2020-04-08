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


	private: System::Windows::Forms::Button^ button_AC_N;




	private: System::Windows::Forms::Button^ button_MINUS_N;

	private: System::Windows::Forms::Button^ button_PLUS_N;

	private: System::Windows::Forms::Button^ button_4_N;

	private: System::Windows::Forms::Button^ button_7_N;
	private: System::Windows::Forms::Button^ button_5_N;


	private: System::Windows::Forms::Button^ button_8_N;
	private: System::Windows::Forms::Button^ button_6_N;


	private: System::Windows::Forms::Button^ button_9_N;

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



	private: System::Windows::Forms::Button^ button_3_N;

	private: System::Windows::Forms::TextBox^ main_screen_N;
	private: System::Windows::Forms::TextBox^ additional_screen_N;
	private: System::Windows::Forms::Label^ lbl_info;
	private: System::Windows::Forms::Button^ button_CLEAN_N;

	private: System::Windows::Forms::Button^ button_MINUSMINUS_N;
	private: System::Windows::Forms::TextBox^ main_screen_Z;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button_10DEGREE_Z;
	private: System::Windows::Forms::Button^ button_AC_Z;





	private: System::Windows::Forms::Button^ button_DELETE_Z;
	private: System::Windows::Forms::Button^ button_MINUS_Z;



	private: System::Windows::Forms::Button^ button_PLUS_Z;
private: System::Windows::Forms::Button^ button_4_Z;


private: System::Windows::Forms::Button^ button_7_Z;
private: System::Windows::Forms::Button^ button_5_Z;



private: System::Windows::Forms::Button^ button_8_Z;
private: System::Windows::Forms::Button^ button_6_Z;


private: System::Windows::Forms::Button^ button_9_Z;

private: System::Windows::Forms::TextBox^ additional_screen_Z;
private: System::Windows::Forms::Button^ button_LCM_Z;
private: System::Windows::Forms::Button^ button_GCD_Z;
private: System::Windows::Forms::Button^ button_MOD_Z;
private: System::Windows::Forms::Button^ button_DIV_Z;






private: System::Windows::Forms::Button^ button_PLUSPLUS_Z;
private: System::Windows::Forms::Button^ button_EQUALS_Z;




private: System::Windows::Forms::Button^ button_COMMA_Z;
private: System::Windows::Forms::Button^ button_MULT_Z;
private: System::Windows::Forms::Button^ button_1_Z;
private: System::Windows::Forms::Button^ button_0_Z;




private: System::Windows::Forms::Button^ button_2_Z;

private: System::Windows::Forms::Button^ button_MINUSMINUS_Z;
private: System::Windows::Forms::Button^ button_3_Z;


private: System::Windows::Forms::Button^ button25;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Button^ button26;
private: System::Windows::Forms::Button^ button27;
private: System::Windows::Forms::Button^ button28;
private: System::Windows::Forms::Button^ button29;
private: System::Windows::Forms::Button^ button30;
private: System::Windows::Forms::Button^ button31;
private: System::Windows::Forms::Button^ button32;
private: System::Windows::Forms::Button^ button33;
private: System::Windows::Forms::Button^ button34;
private: System::Windows::Forms::Button^ button35;
private: System::Windows::Forms::Button^ button36;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::Button^ button37;
private: System::Windows::Forms::Button^ button38;
private: System::Windows::Forms::Button^ button39;
private: System::Windows::Forms::Button^ button40;
private: System::Windows::Forms::Button^ button41;
private: System::Windows::Forms::Button^ button42;
private: System::Windows::Forms::Button^ button43;
private: System::Windows::Forms::Button^ button44;
private: System::Windows::Forms::Button^ button45;
private: System::Windows::Forms::Button^ button46;
private: System::Windows::Forms::Button^ button47;
private: System::Windows::Forms::Button^ button48;
private: System::Windows::Forms::Button^ button50;
private: System::Windows::Forms::Button^ button_CHANGESIGN_Z;





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
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button_CHANGESIGN_Z = (gcnew System::Windows::Forms::Button());
			this->main_screen_Z = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button_10DEGREE_Z = (gcnew System::Windows::Forms::Button());
			this->button_AC_Z = (gcnew System::Windows::Forms::Button());
			this->button_DELETE_Z = (gcnew System::Windows::Forms::Button());
			this->button_MINUS_Z = (gcnew System::Windows::Forms::Button());
			this->button_PLUS_Z = (gcnew System::Windows::Forms::Button());
			this->button_4_Z = (gcnew System::Windows::Forms::Button());
			this->button_7_Z = (gcnew System::Windows::Forms::Button());
			this->button_5_Z = (gcnew System::Windows::Forms::Button());
			this->button_8_Z = (gcnew System::Windows::Forms::Button());
			this->button_6_Z = (gcnew System::Windows::Forms::Button());
			this->button_9_Z = (gcnew System::Windows::Forms::Button());
			this->additional_screen_Z = (gcnew System::Windows::Forms::TextBox());
			this->button_LCM_Z = (gcnew System::Windows::Forms::Button());
			this->button_GCD_Z = (gcnew System::Windows::Forms::Button());
			this->button_MOD_Z = (gcnew System::Windows::Forms::Button());
			this->button_DIV_Z = (gcnew System::Windows::Forms::Button());
			this->button_PLUSPLUS_Z = (gcnew System::Windows::Forms::Button());
			this->button_EQUALS_Z = (gcnew System::Windows::Forms::Button());
			this->button_COMMA_Z = (gcnew System::Windows::Forms::Button());
			this->button_MULT_Z = (gcnew System::Windows::Forms::Button());
			this->button_1_Z = (gcnew System::Windows::Forms::Button());
			this->button_0_Z = (gcnew System::Windows::Forms::Button());
			this->button_2_Z = (gcnew System::Windows::Forms::Button());
			this->button_MINUSMINUS_Z = (gcnew System::Windows::Forms::Button());
			this->button_3_Z = (gcnew System::Windows::Forms::Button());
			this->TabControl = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->main_screen_N = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button_10DEGREE_N = (gcnew System::Windows::Forms::Button());
			this->button_AC_N = (gcnew System::Windows::Forms::Button());
			this->button_CLEAN_N = (gcnew System::Windows::Forms::Button());
			this->button_MINUS_N = (gcnew System::Windows::Forms::Button());
			this->button_PLUS_N = (gcnew System::Windows::Forms::Button());
			this->button_4_N = (gcnew System::Windows::Forms::Button());
			this->button_7_N = (gcnew System::Windows::Forms::Button());
			this->button_5_N = (gcnew System::Windows::Forms::Button());
			this->button_8_N = (gcnew System::Windows::Forms::Button());
			this->button_6_N = (gcnew System::Windows::Forms::Button());
			this->button_9_N = (gcnew System::Windows::Forms::Button());
			this->additional_screen_N = (gcnew System::Windows::Forms::TextBox());
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
			this->tabPage3->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->TabControl->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabPage4
			// 
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(633, 356);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Многочлены";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button25);
			this->tabPage3->Controls->Add(this->textBox3);
			this->tabPage3->Controls->Add(this->label3);
			this->tabPage3->Controls->Add(this->button26);
			this->tabPage3->Controls->Add(this->button27);
			this->tabPage3->Controls->Add(this->button28);
			this->tabPage3->Controls->Add(this->button29);
			this->tabPage3->Controls->Add(this->button30);
			this->tabPage3->Controls->Add(this->button31);
			this->tabPage3->Controls->Add(this->button32);
			this->tabPage3->Controls->Add(this->button33);
			this->tabPage3->Controls->Add(this->button34);
			this->tabPage3->Controls->Add(this->button35);
			this->tabPage3->Controls->Add(this->button36);
			this->tabPage3->Controls->Add(this->textBox4);
			this->tabPage3->Controls->Add(this->button37);
			this->tabPage3->Controls->Add(this->button38);
			this->tabPage3->Controls->Add(this->button39);
			this->tabPage3->Controls->Add(this->button40);
			this->tabPage3->Controls->Add(this->button41);
			this->tabPage3->Controls->Add(this->button42);
			this->tabPage3->Controls->Add(this->button43);
			this->tabPage3->Controls->Add(this->button44);
			this->tabPage3->Controls->Add(this->button45);
			this->tabPage3->Controls->Add(this->button46);
			this->tabPage3->Controls->Add(this->button47);
			this->tabPage3->Controls->Add(this->button48);
			this->tabPage3->Controls->Add(this->button50);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(633, 356);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Рациональные числа";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// button25
			// 
			this->button25->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button25->BackColor = System::Drawing::SystemColors::Menu;
			this->button25->FlatAppearance->BorderSize = 0;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button25->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button25->Location = System::Drawing::Point(341, 300);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(50, 50);
			this->button25->TabIndex = 148;
			this->button25->Text = L"+/-";
			this->button25->UseVisualStyleBackColor = false;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(17, 37);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(598, 29);
			this->textBox3->TabIndex = 147;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(14, 70);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 255);
			this->label3->TabIndex = 146;
			this->label3->Text = L"З\r\nД\r\nЕ\r\nС\r\nЬ\r\nО\r\nП\r\nИ\r\nС\r\nА\r\nН\r\nИ\r\nЕ\r\nФУНК\r\nЦИЙ";
			// 
			// button26
			// 
			this->button26->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button26->BackColor = System::Drawing::SystemColors::Menu;
			this->button26->FlatAppearance->BorderSize = 0;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button26->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button26->Location = System::Drawing::Point(285, 300);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(50, 50);
			this->button26->TabIndex = 145;
			this->button26->Text = L"*10^x";
			this->button26->UseVisualStyleBackColor = false;
			// 
			// button27
			// 
			this->button27->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button27->BackColor = System::Drawing::SystemColors::Menu;
			this->button27->FlatAppearance->BorderSize = 0;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button27->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button27->Location = System::Drawing::Point(285, 76);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(106, 50);
			this->button27->TabIndex = 144;
			this->button27->Text = L"CLEAR";
			this->button27->UseVisualStyleBackColor = false;
			// 
			// button28
			// 
			this->button28->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button28->BackColor = System::Drawing::SystemColors::Menu;
			this->button28->FlatAppearance->BorderSize = 0;
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button28->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button28->Location = System::Drawing::Point(397, 76);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(50, 50);
			this->button28->TabIndex = 136;
			this->button28->Text = L"<-";
			this->button28->UseVisualStyleBackColor = false;
			// 
			// button29
			// 
			this->button29->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button29->BackColor = System::Drawing::SystemColors::Menu;
			this->button29->FlatAppearance->BorderSize = 0;
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button29->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button29->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button29->Location = System::Drawing::Point(397, 188);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(50, 50);
			this->button29->TabIndex = 134;
			this->button29->Text = L"-";
			this->button29->UseVisualStyleBackColor = false;
			// 
			// button30
			// 
			this->button30->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button30->BackColor = System::Drawing::SystemColors::Menu;
			this->button30->FlatAppearance->BorderSize = 0;
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button30->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button30->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button30->Location = System::Drawing::Point(397, 132);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(50, 50);
			this->button30->TabIndex = 133;
			this->button30->Text = L"+";
			this->button30->UseVisualStyleBackColor = false;
			// 
			// button31
			// 
			this->button31->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button31->BackColor = System::Drawing::Color::LightGray;
			this->button31->FlatAppearance->BorderSize = 0;
			this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button31->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button31->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button31->Location = System::Drawing::Point(453, 132);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(50, 50);
			this->button31->TabIndex = 131;
			this->button31->Text = L"4";
			this->button31->UseVisualStyleBackColor = false;
			// 
			// button32
			// 
			this->button32->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button32->BackColor = System::Drawing::Color::LightGray;
			this->button32->FlatAppearance->BorderSize = 0;
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button32->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button32->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button32->Location = System::Drawing::Point(453, 76);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(50, 50);
			this->button32->TabIndex = 130;
			this->button32->Text = L"7";
			this->button32->UseVisualStyleBackColor = false;
			// 
			// button33
			// 
			this->button33->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button33->BackColor = System::Drawing::Color::LightGray;
			this->button33->FlatAppearance->BorderSize = 0;
			this->button33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button33->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button33->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button33->Location = System::Drawing::Point(509, 132);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(50, 50);
			this->button33->TabIndex = 127;
			this->button33->Text = L"5";
			this->button33->UseVisualStyleBackColor = false;
			// 
			// button34
			// 
			this->button34->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button34->BackColor = System::Drawing::Color::LightGray;
			this->button34->FlatAppearance->BorderSize = 0;
			this->button34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button34->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button34->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button34->Location = System::Drawing::Point(509, 76);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(50, 50);
			this->button34->TabIndex = 126;
			this->button34->Text = L"8";
			this->button34->UseVisualStyleBackColor = false;
			// 
			// button35
			// 
			this->button35->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button35->BackColor = System::Drawing::Color::LightGray;
			this->button35->FlatAppearance->BorderSize = 0;
			this->button35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button35->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button35->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button35->Location = System::Drawing::Point(565, 132);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(50, 50);
			this->button35->TabIndex = 123;
			this->button35->Text = L"6";
			this->button35->UseVisualStyleBackColor = false;
			// 
			// button36
			// 
			this->button36->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button36->BackColor = System::Drawing::Color::LightGray;
			this->button36->FlatAppearance->BorderSize = 0;
			this->button36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button36->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button36->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button36->Location = System::Drawing::Point(565, 76);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(50, 50);
			this->button36->TabIndex = 122;
			this->button36->Text = L"9";
			this->button36->UseVisualStyleBackColor = false;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(17, 9);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(598, 29);
			this->textBox4->TabIndex = 121;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button37
			// 
			this->button37->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button37->BackColor = System::Drawing::SystemColors::Menu;
			this->button37->FlatAppearance->BorderSize = 0;
			this->button37->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button37->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button37->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button37->Location = System::Drawing::Point(285, 188);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(50, 50);
			this->button37->TabIndex = 143;
			this->button37->Text = L"НОК";
			this->button37->UseVisualStyleBackColor = false;
			// 
			// button38
			// 
			this->button38->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button38->BackColor = System::Drawing::SystemColors::Menu;
			this->button38->FlatAppearance->BorderSize = 0;
			this->button38->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button38->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button38->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button38->Location = System::Drawing::Point(341, 188);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(50, 50);
			this->button38->TabIndex = 142;
			this->button38->Text = L"НОД";
			this->button38->UseVisualStyleBackColor = false;
			// 
			// button39
			// 
			this->button39->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button39->BackColor = System::Drawing::SystemColors::Menu;
			this->button39->FlatAppearance->BorderSize = 0;
			this->button39->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button39->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button39->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button39->Location = System::Drawing::Point(341, 244);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(50, 50);
			this->button39->TabIndex = 141;
			this->button39->Text = L"%";
			this->button39->UseVisualStyleBackColor = false;
			// 
			// button40
			// 
			this->button40->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button40->BackColor = System::Drawing::SystemColors::Menu;
			this->button40->FlatAppearance->BorderSize = 0;
			this->button40->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button40->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button40->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button40->Location = System::Drawing::Point(397, 300);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(50, 50);
			this->button40->TabIndex = 140;
			this->button40->Text = L"/";
			this->button40->UseVisualStyleBackColor = false;
			// 
			// button41
			// 
			this->button41->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button41->BackColor = System::Drawing::SystemColors::Menu;
			this->button41->FlatAppearance->BorderSize = 0;
			this->button41->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button41->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button41->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button41->Location = System::Drawing::Point(285, 132);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(50, 50);
			this->button41->TabIndex = 139;
			this->button41->Text = L"++";
			this->button41->UseVisualStyleBackColor = false;
			// 
			// button42
			// 
			this->button42->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button42->BackColor = System::Drawing::SystemColors::Menu;
			this->button42->FlatAppearance->BorderSize = 0;
			this->button42->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button42->Font = (gcnew System::Drawing::Font(L"Arial", 32.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button42->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button42->Location = System::Drawing::Point(453, 300);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(162, 50);
			this->button42->TabIndex = 138;
			this->button42->Text = L"=";
			this->button42->UseVisualStyleBackColor = false;
			// 
			// button43
			// 
			this->button43->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button43->BackColor = System::Drawing::SystemColors::Menu;
			this->button43->FlatAppearance->BorderSize = 0;
			this->button43->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button43->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button43->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button43->Location = System::Drawing::Point(285, 245);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(50, 50);
			this->button43->TabIndex = 137;
			this->button43->Text = L",";
			this->button43->UseVisualStyleBackColor = false;
			// 
			// button44
			// 
			this->button44->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button44->BackColor = System::Drawing::SystemColors::Menu;
			this->button44->FlatAppearance->BorderSize = 0;
			this->button44->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button44->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button44->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button44->Location = System::Drawing::Point(397, 244);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(50, 50);
			this->button44->TabIndex = 135;
			this->button44->Text = L"*";
			this->button44->UseVisualStyleBackColor = false;
			// 
			// button45
			// 
			this->button45->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button45->BackColor = System::Drawing::Color::LightGray;
			this->button45->FlatAppearance->BorderSize = 0;
			this->button45->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button45->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button45->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button45->Location = System::Drawing::Point(453, 188);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(50, 50);
			this->button45->TabIndex = 132;
			this->button45->Text = L"1";
			this->button45->UseVisualStyleBackColor = false;
			// 
			// button46
			// 
			this->button46->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button46->BackColor = System::Drawing::Color::LightGray;
			this->button46->FlatAppearance->BorderSize = 0;
			this->button46->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button46->Font = (gcnew System::Drawing::Font(L"Arial", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button46->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button46->Location = System::Drawing::Point(453, 244);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(162, 50);
			this->button46->TabIndex = 129;
			this->button46->Text = L"0";
			this->button46->UseVisualStyleBackColor = false;
			// 
			// button47
			// 
			this->button47->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button47->BackColor = System::Drawing::Color::LightGray;
			this->button47->FlatAppearance->BorderSize = 0;
			this->button47->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button47->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button47->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button47->Location = System::Drawing::Point(509, 188);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(50, 50);
			this->button47->TabIndex = 128;
			this->button47->Text = L"2";
			this->button47->UseVisualStyleBackColor = false;
			// 
			// button48
			// 
			this->button48->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button48->BackColor = System::Drawing::SystemColors::Menu;
			this->button48->FlatAppearance->BorderSize = 0;
			this->button48->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button48->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button48->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button48->Location = System::Drawing::Point(341, 132);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(50, 50);
			this->button48->TabIndex = 125;
			this->button48->Text = L"--";
			this->button48->UseVisualStyleBackColor = false;
			// 
			// button50
			// 
			this->button50->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button50->BackColor = System::Drawing::Color::LightGray;
			this->button50->FlatAppearance->BorderSize = 0;
			this->button50->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button50->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button50->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button50->Location = System::Drawing::Point(565, 188);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(50, 50);
			this->button50->TabIndex = 124;
			this->button50->Text = L"3";
			this->button50->UseVisualStyleBackColor = false;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button_CHANGESIGN_Z);
			this->tabPage2->Controls->Add(this->main_screen_Z);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->button_10DEGREE_Z);
			this->tabPage2->Controls->Add(this->button_AC_Z);
			this->tabPage2->Controls->Add(this->button_DELETE_Z);
			this->tabPage2->Controls->Add(this->button_MINUS_Z);
			this->tabPage2->Controls->Add(this->button_PLUS_Z);
			this->tabPage2->Controls->Add(this->button_4_Z);
			this->tabPage2->Controls->Add(this->button_7_Z);
			this->tabPage2->Controls->Add(this->button_5_Z);
			this->tabPage2->Controls->Add(this->button_8_Z);
			this->tabPage2->Controls->Add(this->button_6_Z);
			this->tabPage2->Controls->Add(this->button_9_Z);
			this->tabPage2->Controls->Add(this->additional_screen_Z);
			this->tabPage2->Controls->Add(this->button_LCM_Z);
			this->tabPage2->Controls->Add(this->button_GCD_Z);
			this->tabPage2->Controls->Add(this->button_MOD_Z);
			this->tabPage2->Controls->Add(this->button_DIV_Z);
			this->tabPage2->Controls->Add(this->button_PLUSPLUS_Z);
			this->tabPage2->Controls->Add(this->button_EQUALS_Z);
			this->tabPage2->Controls->Add(this->button_COMMA_Z);
			this->tabPage2->Controls->Add(this->button_MULT_Z);
			this->tabPage2->Controls->Add(this->button_1_Z);
			this->tabPage2->Controls->Add(this->button_0_Z);
			this->tabPage2->Controls->Add(this->button_2_Z);
			this->tabPage2->Controls->Add(this->button_MINUSMINUS_Z);
			this->tabPage2->Controls->Add(this->button_3_Z);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(633, 356);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Целые числа";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button_CHANGESIGN_Z
			// 
			this->button_CHANGESIGN_Z->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_CHANGESIGN_Z->BackColor = System::Drawing::SystemColors::Menu;
			this->button_CHANGESIGN_Z->FlatAppearance->BorderSize = 0;
			this->button_CHANGESIGN_Z->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_CHANGESIGN_Z->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_CHANGESIGN_Z->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_CHANGESIGN_Z->Location = System::Drawing::Point(341, 300);
			this->button_CHANGESIGN_Z->Name = L"button_CHANGESIGN_Z";
			this->button_CHANGESIGN_Z->Size = System::Drawing::Size(50, 50);
			this->button_CHANGESIGN_Z->TabIndex = 120;
			this->button_CHANGESIGN_Z->Text = L"+/-";
			this->button_CHANGESIGN_Z->UseVisualStyleBackColor = false;
			this->button_CHANGESIGN_Z->Click += gcnew System::EventHandler(this, &MyForm::button_CHANGESIGN_Z_Click);
			// 
			// main_screen_Z
			// 
			this->main_screen_Z->Location = System::Drawing::Point(17, 37);
			this->main_screen_Z->Multiline = true;
			this->main_screen_Z->Name = L"main_screen_Z";
			this->main_screen_Z->Size = System::Drawing::Size(598, 29);
			this->main_screen_Z->TabIndex = 119;
			this->main_screen_Z->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->main_screen_Z->TextChanged += gcnew System::EventHandler(this, &MyForm::main_screen_Z_TextChanged);
			this->main_screen_Z->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::main_screen_Z_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(14, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 255);
			this->label2->TabIndex = 118;
			this->label2->Text = L"З\r\nД\r\nЕ\r\nС\r\nЬ\r\nО\r\nП\r\nИ\r\nС\r\nА\r\nН\r\nИ\r\nЕ\r\nФУНК\r\nЦИЙ";
			// 
			// button_10DEGREE_Z
			// 
			this->button_10DEGREE_Z->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_10DEGREE_Z->BackColor = System::Drawing::SystemColors::Menu;
			this->button_10DEGREE_Z->FlatAppearance->BorderSize = 0;
			this->button_10DEGREE_Z->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_10DEGREE_Z->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_10DEGREE_Z->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_10DEGREE_Z->Location = System::Drawing::Point(285, 300);
			this->button_10DEGREE_Z->Name = L"button_10DEGREE_Z";
			this->button_10DEGREE_Z->Size = System::Drawing::Size(50, 50);
			this->button_10DEGREE_Z->TabIndex = 117;
			this->button_10DEGREE_Z->Text = L"*10^x";
			this->button_10DEGREE_Z->UseVisualStyleBackColor = false;
			this->button_10DEGREE_Z->Click += gcnew System::EventHandler(this, &MyForm::button_10DEGREE_Z_Click);
			// 
			// button_AC_Z
			// 
			this->button_AC_Z->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_AC_Z->BackColor = System::Drawing::SystemColors::Menu;
			this->button_AC_Z->FlatAppearance->BorderSize = 0;
			this->button_AC_Z->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_AC_Z->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_AC_Z->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_AC_Z->Location = System::Drawing::Point(285, 76);
			this->button_AC_Z->Name = L"button_AC_Z";
			this->button_AC_Z->Size = System::Drawing::Size(106, 50);
			this->button_AC_Z->TabIndex = 116;
			this->button_AC_Z->Text = L"DELETE";
			this->button_AC_Z->UseVisualStyleBackColor = false;
			this->button_AC_Z->Click += gcnew System::EventHandler(this, &MyForm::button_CLEAR_Z_Click);
			// 
			// button_DELETE_Z
			// 
			this->button_DELETE_Z->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_DELETE_Z->BackColor = System::Drawing::SystemColors::Menu;
			this->button_DELETE_Z->FlatAppearance->BorderSize = 0;
			this->button_DELETE_Z->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_DELETE_Z->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_DELETE_Z->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_DELETE_Z->Location = System::Drawing::Point(397, 76);
			this->button_DELETE_Z->Name = L"button_DELETE_Z";
			this->button_DELETE_Z->Size = System::Drawing::Size(50, 50);
			this->button_DELETE_Z->TabIndex = 108;
			this->button_DELETE_Z->Text = L"<-";
			this->button_DELETE_Z->UseVisualStyleBackColor = false;
			this->button_DELETE_Z->Click += gcnew System::EventHandler(this, &MyForm::button_DELETE_Z_Click);
			// 
			// button_MINUS_Z
			// 
			this->button_MINUS_Z->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_MINUS_Z->BackColor = System::Drawing::SystemColors::Menu;
			this->button_MINUS_Z->FlatAppearance->BorderSize = 0;
			this->button_MINUS_Z->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_MINUS_Z->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_MINUS_Z->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_MINUS_Z->Location = System::Drawing::Point(397, 188);
			this->button_MINUS_Z->Name = L"button_MINUS_Z";
			this->button_MINUS_Z->Size = System::Drawing::Size(50, 50);
			this->button_MINUS_Z->TabIndex = 106;
			this->button_MINUS_Z->Text = L"-";
			this->button_MINUS_Z->UseVisualStyleBackColor = false;
			this->button_MINUS_Z->Click += gcnew System::EventHandler(this, &MyForm::button_MINUS_Z_Click);
			// 
			// button_PLUS_Z
			// 
			this->button_PLUS_Z->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_PLUS_Z->BackColor = System::Drawing::SystemColors::Menu;
			this->button_PLUS_Z->FlatAppearance->BorderSize = 0;
			this->button_PLUS_Z->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_PLUS_Z->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_PLUS_Z->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_PLUS_Z->Location = System::Drawing::Point(397, 132);
			this->button_PLUS_Z->Name = L"button_PLUS_Z";
			this->button_PLUS_Z->Size = System::Drawing::Size(50, 50);
			this->button_PLUS_Z->TabIndex = 105;
			this->button_PLUS_Z->Text = L"+";
			this->button_PLUS_Z->UseVisualStyleBackColor = false;
			this->button_PLUS_Z->Click += gcnew System::EventHandler(this, &MyForm::button_PLUS_Z_Click);
			// 
			// button_4_Z
			// 
			this->button_4_Z->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_4_Z->BackColor = System::Drawing::Color::LightGray;
			this->button_4_Z->FlatAppearance->BorderSize = 0;
			this->button_4_Z->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_4_Z->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_4_Z->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_4_Z->Location = System::Drawing::Point(453, 132);
			this->button_4_Z->Name = L"button_4_Z";
			this->button_4_Z->Size = System::Drawing::Size(50, 50);
			this->button_4_Z->TabIndex = 103;
			this->button_4_Z->Text = L"4";
			this->button_4_Z->UseVisualStyleBackColor = false;
			this->button_4_Z->Click += gcnew System::EventHandler(this, &MyForm::button_4_Z_Click);
			// 
			// button_7_Z
			// 
			this->button_7_Z->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_7_Z->BackColor = System::Drawing::Color::LightGray;
			this->button_7_Z->FlatAppearance->BorderSize = 0;
			this->button_7_Z->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_7_Z->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_7_Z->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_7_Z->Location = System::Drawing::Point(453, 76);
			this->button_7_Z->Name = L"button_7_Z";
			this->button_7_Z->Size = System::Drawing::Size(50, 50);
			this->button_7_Z->TabIndex = 102;
			this->button_7_Z->Text = L"7";
			this->button_7_Z->UseVisualStyleBackColor = false;
			this->button_7_Z->Click += gcnew System::EventHandler(this, &MyForm::button_7_Z_Click);
			// 
			// button_5_Z
			// 
			this->button_5_Z->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_5_Z->BackColor = System::Drawing::Color::LightGray;
			this->button_5_Z->FlatAppearance->BorderSize = 0;
			this->button_5_Z->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_5_Z->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_5_Z->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_5_Z->Location = System::Drawing::Point(509, 132);
			this->button_5_Z->Name = L"button_5_Z";
			this->button_5_Z->Size = System::Drawing::Size(50, 50);
			this->button_5_Z->TabIndex = 99;
			this->button_5_Z->Text = L"5";
			this->button_5_Z->UseVisualStyleBackColor = false;
			this->button_5_Z->Click += gcnew System::EventHandler(this, &MyForm::button_5_Z_Click);
			// 
			// button_8_Z
			// 
			this->button_8_Z->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_8_Z->BackColor = System::Drawing::Color::LightGray;
			this->button_8_Z->FlatAppearance->BorderSize = 0;
			this->button_8_Z->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_8_Z->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_8_Z->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_8_Z->Location = System::Drawing::Point(509, 76);
			this->button_8_Z->Name = L"button_8_Z";
			this->button_8_Z->Size = System::Drawing::Size(50, 50);
			this->button_8_Z->TabIndex = 98;
			this->button_8_Z->Text = L"8";
			this->button_8_Z->UseVisualStyleBackColor = false;
			this->button_8_Z->Click += gcnew System::EventHandler(this, &MyForm::button_8_Z_Click);
			// 
			// button_6_Z
			// 
			this->button_6_Z->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_6_Z->BackColor = System::Drawing::Color::LightGray;
			this->button_6_Z->FlatAppearance->BorderSize = 0;
			this->button_6_Z->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_6_Z->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_6_Z->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_6_Z->Location = System::Drawing::Point(565, 132);
			this->button_6_Z->Name = L"button_6_Z";
			this->button_6_Z->Size = System::Drawing::Size(50, 50);
			this->button_6_Z->TabIndex = 95;
			this->button_6_Z->Text = L"6";
			this->button_6_Z->UseVisualStyleBackColor = false;
			this->button_6_Z->Click += gcnew System::EventHandler(this, &MyForm::button_6_Z_Click);
			// 
			// button_9_Z
			// 
			this->button_9_Z->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_9_Z->BackColor = System::Drawing::Color::LightGray;
			this->button_9_Z->FlatAppearance->BorderSize = 0;
			this->button_9_Z->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_9_Z->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_9_Z->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_9_Z->Location = System::Drawing::Point(565, 76);
			this->button_9_Z->Name = L"button_9_Z";
			this->button_9_Z->Size = System::Drawing::Size(50, 50);
			this->button_9_Z->TabIndex = 94;
			this->button_9_Z->Text = L"9";
			this->button_9_Z->UseVisualStyleBackColor = false;
			this->button_9_Z->Click += gcnew System::EventHandler(this, &MyForm::button_9_Z_Click);
			// 
			// additional_screen_Z
			// 
			this->additional_screen_Z->Location = System::Drawing::Point(17, 9);
			this->additional_screen_Z->Multiline = true;
			this->additional_screen_Z->Name = L"additional_screen_Z";
			this->additional_screen_Z->ReadOnly = true;
			this->additional_screen_Z->Size = System::Drawing::Size(598, 29);
			this->additional_screen_Z->TabIndex = 93;
			this->additional_screen_Z->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button_LCM_Z
			// 
			this->button_LCM_Z->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_LCM_Z->BackColor = System::Drawing::SystemColors::Menu;
			this->button_LCM_Z->FlatAppearance->BorderSize = 0;
			this->button_LCM_Z->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_LCM_Z->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_LCM_Z->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_LCM_Z->Location = System::Drawing::Point(285, 188);
			this->button_LCM_Z->Name = L"button_LCM_Z";
			this->button_LCM_Z->Size = System::Drawing::Size(50, 50);
			this->button_LCM_Z->TabIndex = 115;
			this->button_LCM_Z->Text = L"НОК";
			this->button_LCM_Z->UseVisualStyleBackColor = false;
			this->button_LCM_Z->Click += gcnew System::EventHandler(this, &MyForm::button_LCM_Z_Click);
			// 
			// button_GCD_Z
			// 
			this->button_GCD_Z->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_GCD_Z->BackColor = System::Drawing::SystemColors::Menu;
			this->button_GCD_Z->FlatAppearance->BorderSize = 0;
			this->button_GCD_Z->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_GCD_Z->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_GCD_Z->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_GCD_Z->Location = System::Drawing::Point(341, 188);
			this->button_GCD_Z->Name = L"button_GCD_Z";
			this->button_GCD_Z->Size = System::Drawing::Size(50, 50);
			this->button_GCD_Z->TabIndex = 114;
			this->button_GCD_Z->Text = L"НОД";
			this->button_GCD_Z->UseVisualStyleBackColor = false;
			this->button_GCD_Z->Click += gcnew System::EventHandler(this, &MyForm::button_GCD_Z_Click);
			// 
			// button_MOD_Z
			// 
			this->button_MOD_Z->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_MOD_Z->BackColor = System::Drawing::SystemColors::Menu;
			this->button_MOD_Z->FlatAppearance->BorderSize = 0;
			this->button_MOD_Z->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_MOD_Z->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_MOD_Z->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_MOD_Z->Location = System::Drawing::Point(341, 244);
			this->button_MOD_Z->Name = L"button_MOD_Z";
			this->button_MOD_Z->Size = System::Drawing::Size(50, 50);
			this->button_MOD_Z->TabIndex = 113;
			this->button_MOD_Z->Text = L"%";
			this->button_MOD_Z->UseVisualStyleBackColor = false;
			this->button_MOD_Z->Click += gcnew System::EventHandler(this, &MyForm::button_MOD_Z_Click);
			// 
			// button_DIV_Z
			// 
			this->button_DIV_Z->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_DIV_Z->BackColor = System::Drawing::SystemColors::Menu;
			this->button_DIV_Z->FlatAppearance->BorderSize = 0;
			this->button_DIV_Z->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_DIV_Z->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_DIV_Z->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_DIV_Z->Location = System::Drawing::Point(397, 300);
			this->button_DIV_Z->Name = L"button_DIV_Z";
			this->button_DIV_Z->Size = System::Drawing::Size(50, 50);
			this->button_DIV_Z->TabIndex = 112;
			this->button_DIV_Z->Text = L"/";
			this->button_DIV_Z->UseVisualStyleBackColor = false;
			this->button_DIV_Z->Click += gcnew System::EventHandler(this, &MyForm::button_DIV_Z_Click);
			// 
			// button_PLUSPLUS_Z
			// 
			this->button_PLUSPLUS_Z->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_PLUSPLUS_Z->BackColor = System::Drawing::SystemColors::Menu;
			this->button_PLUSPLUS_Z->FlatAppearance->BorderSize = 0;
			this->button_PLUSPLUS_Z->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_PLUSPLUS_Z->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_PLUSPLUS_Z->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_PLUSPLUS_Z->Location = System::Drawing::Point(285, 132);
			this->button_PLUSPLUS_Z->Name = L"button_PLUSPLUS_Z";
			this->button_PLUSPLUS_Z->Size = System::Drawing::Size(50, 50);
			this->button_PLUSPLUS_Z->TabIndex = 111;
			this->button_PLUSPLUS_Z->Text = L"++";
			this->button_PLUSPLUS_Z->UseVisualStyleBackColor = false;
			this->button_PLUSPLUS_Z->Click += gcnew System::EventHandler(this, &MyForm::button_PLUSPLUS_Z_Click);
			// 
			// button_EQUALS_Z
			// 
			this->button_EQUALS_Z->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_EQUALS_Z->BackColor = System::Drawing::SystemColors::Menu;
			this->button_EQUALS_Z->FlatAppearance->BorderSize = 0;
			this->button_EQUALS_Z->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_EQUALS_Z->Font = (gcnew System::Drawing::Font(L"Arial", 32.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_EQUALS_Z->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_EQUALS_Z->Location = System::Drawing::Point(453, 300);
			this->button_EQUALS_Z->Name = L"button_EQUALS_Z";
			this->button_EQUALS_Z->Size = System::Drawing::Size(162, 50);
			this->button_EQUALS_Z->TabIndex = 110;
			this->button_EQUALS_Z->Text = L"=";
			this->button_EQUALS_Z->UseVisualStyleBackColor = false;
			this->button_EQUALS_Z->Click += gcnew System::EventHandler(this, &MyForm::button_EQUALS_Z_Click);
			// 
			// button_COMMA_Z
			// 
			this->button_COMMA_Z->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_COMMA_Z->BackColor = System::Drawing::SystemColors::Menu;
			this->button_COMMA_Z->FlatAppearance->BorderSize = 0;
			this->button_COMMA_Z->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_COMMA_Z->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_COMMA_Z->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_COMMA_Z->Location = System::Drawing::Point(285, 245);
			this->button_COMMA_Z->Name = L"button_COMMA_Z";
			this->button_COMMA_Z->Size = System::Drawing::Size(50, 50);
			this->button_COMMA_Z->TabIndex = 109;
			this->button_COMMA_Z->Text = L",";
			this->button_COMMA_Z->UseVisualStyleBackColor = false;
			this->button_COMMA_Z->Click += gcnew System::EventHandler(this, &MyForm::button_COMMA_Z_Click);
			// 
			// button_MULT_Z
			// 
			this->button_MULT_Z->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_MULT_Z->BackColor = System::Drawing::SystemColors::Menu;
			this->button_MULT_Z->FlatAppearance->BorderSize = 0;
			this->button_MULT_Z->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_MULT_Z->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_MULT_Z->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_MULT_Z->Location = System::Drawing::Point(397, 244);
			this->button_MULT_Z->Name = L"button_MULT_Z";
			this->button_MULT_Z->Size = System::Drawing::Size(50, 50);
			this->button_MULT_Z->TabIndex = 107;
			this->button_MULT_Z->Text = L"*";
			this->button_MULT_Z->UseVisualStyleBackColor = false;
			this->button_MULT_Z->Click += gcnew System::EventHandler(this, &MyForm::button_MULT_Z_Click);
			// 
			// button_1_Z
			// 
			this->button_1_Z->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_1_Z->BackColor = System::Drawing::Color::LightGray;
			this->button_1_Z->FlatAppearance->BorderSize = 0;
			this->button_1_Z->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_1_Z->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_1_Z->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_1_Z->Location = System::Drawing::Point(453, 188);
			this->button_1_Z->Name = L"button_1_Z";
			this->button_1_Z->Size = System::Drawing::Size(50, 50);
			this->button_1_Z->TabIndex = 104;
			this->button_1_Z->Text = L"1";
			this->button_1_Z->UseVisualStyleBackColor = false;
			this->button_1_Z->Click += gcnew System::EventHandler(this, &MyForm::button_1_Z_Click);
			// 
			// button_0_Z
			// 
			this->button_0_Z->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_0_Z->BackColor = System::Drawing::Color::LightGray;
			this->button_0_Z->FlatAppearance->BorderSize = 0;
			this->button_0_Z->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_0_Z->Font = (gcnew System::Drawing::Font(L"Arial", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_0_Z->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_0_Z->Location = System::Drawing::Point(453, 244);
			this->button_0_Z->Name = L"button_0_Z";
			this->button_0_Z->Size = System::Drawing::Size(162, 50);
			this->button_0_Z->TabIndex = 101;
			this->button_0_Z->Text = L"0";
			this->button_0_Z->UseVisualStyleBackColor = false;
			this->button_0_Z->Click += gcnew System::EventHandler(this, &MyForm::button_0_Z_Click);
			// 
			// button_2_Z
			// 
			this->button_2_Z->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_2_Z->BackColor = System::Drawing::Color::LightGray;
			this->button_2_Z->FlatAppearance->BorderSize = 0;
			this->button_2_Z->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_2_Z->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_2_Z->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_2_Z->Location = System::Drawing::Point(509, 188);
			this->button_2_Z->Name = L"button_2_Z";
			this->button_2_Z->Size = System::Drawing::Size(50, 50);
			this->button_2_Z->TabIndex = 100;
			this->button_2_Z->Text = L"2";
			this->button_2_Z->UseVisualStyleBackColor = false;
			this->button_2_Z->Click += gcnew System::EventHandler(this, &MyForm::button_2_Z_Click);
			// 
			// button_MINUSMINUS_Z
			// 
			this->button_MINUSMINUS_Z->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_MINUSMINUS_Z->BackColor = System::Drawing::SystemColors::Menu;
			this->button_MINUSMINUS_Z->FlatAppearance->BorderSize = 0;
			this->button_MINUSMINUS_Z->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_MINUSMINUS_Z->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_MINUSMINUS_Z->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_MINUSMINUS_Z->Location = System::Drawing::Point(341, 132);
			this->button_MINUSMINUS_Z->Name = L"button_MINUSMINUS_Z";
			this->button_MINUSMINUS_Z->Size = System::Drawing::Size(50, 50);
			this->button_MINUSMINUS_Z->TabIndex = 97;
			this->button_MINUSMINUS_Z->Text = L"--";
			this->button_MINUSMINUS_Z->UseVisualStyleBackColor = false;
			this->button_MINUSMINUS_Z->Click += gcnew System::EventHandler(this, &MyForm::button_MINUSMINUS_Z_Click);
			// 
			// button_3_Z
			// 
			this->button_3_Z->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_3_Z->BackColor = System::Drawing::Color::LightGray;
			this->button_3_Z->FlatAppearance->BorderSize = 0;
			this->button_3_Z->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_3_Z->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_3_Z->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_3_Z->Location = System::Drawing::Point(565, 188);
			this->button_3_Z->Name = L"button_3_Z";
			this->button_3_Z->Size = System::Drawing::Size(50, 50);
			this->button_3_Z->TabIndex = 96;
			this->button_3_Z->Text = L"3";
			this->button_3_Z->UseVisualStyleBackColor = false;
			this->button_3_Z->Click += gcnew System::EventHandler(this, &MyForm::button_3_Z_Click);
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
			this->tabPage1->Controls->Add(this->button_AC_N);
			this->tabPage1->Controls->Add(this->button_CLEAN_N);
			this->tabPage1->Controls->Add(this->button_MINUS_N);
			this->tabPage1->Controls->Add(this->button_PLUS_N);
			this->tabPage1->Controls->Add(this->button_4_N);
			this->tabPage1->Controls->Add(this->button_7_N);
			this->tabPage1->Controls->Add(this->button_5_N);
			this->tabPage1->Controls->Add(this->button_8_N);
			this->tabPage1->Controls->Add(this->button_6_N);
			this->tabPage1->Controls->Add(this->button_9_N);
			this->tabPage1->Controls->Add(this->additional_screen_N);
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
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
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
			this->button_10DEGREE_N->Location = System::Drawing::Point(285, 300);
			this->button_10DEGREE_N->Name = L"button_10DEGREE_N";
			this->button_10DEGREE_N->Size = System::Drawing::Size(106, 50);
			this->button_10DEGREE_N->TabIndex = 90;
			this->button_10DEGREE_N->Text = L"*10^x";
			this->button_10DEGREE_N->UseVisualStyleBackColor = false;
			this->button_10DEGREE_N->Click += gcnew System::EventHandler(this, &MyForm::button_10DEGREE_N_Click);
			// 
			// button_AC_N
			// 
			this->button_AC_N->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_AC_N->BackColor = System::Drawing::SystemColors::Menu;
			this->button_AC_N->FlatAppearance->BorderSize = 0;
			this->button_AC_N->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_AC_N->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_AC_N->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_AC_N->Location = System::Drawing::Point(285, 76);
			this->button_AC_N->Name = L"button_AC_N";
			this->button_AC_N->Size = System::Drawing::Size(106, 50);
			this->button_AC_N->TabIndex = 87;
			this->button_AC_N->Text = L"DELETE";
			this->button_AC_N->UseVisualStyleBackColor = false;
			this->button_AC_N->Click += gcnew System::EventHandler(this, &MyForm::button_AC_N_Click);
			// 
			// button_CLEAN_N
			// 
			this->button_CLEAN_N->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_CLEAN_N->BackColor = System::Drawing::SystemColors::Menu;
			this->button_CLEAN_N->FlatAppearance->BorderSize = 0;
			this->button_CLEAN_N->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_CLEAN_N->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_CLEAN_N->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_CLEAN_N->Location = System::Drawing::Point(397, 76);
			this->button_CLEAN_N->Name = L"button_CLEAN_N";
			this->button_CLEAN_N->Size = System::Drawing::Size(50, 50);
			this->button_CLEAN_N->TabIndex = 79;
			this->button_CLEAN_N->Text = L"<-";
			this->button_CLEAN_N->UseVisualStyleBackColor = false;
			this->button_CLEAN_N->Click += gcnew System::EventHandler(this, &MyForm::button_COM_N_Click);
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
			this->button_MINUS_N->Location = System::Drawing::Point(397, 188);
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
			this->button_PLUS_N->Location = System::Drawing::Point(397, 132);
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
			// button_LCM_N
			// 
			this->button_LCM_N->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_LCM_N->BackColor = System::Drawing::SystemColors::Menu;
			this->button_LCM_N->FlatAppearance->BorderSize = 0;
			this->button_LCM_N->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_LCM_N->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_LCM_N->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_LCM_N->Location = System::Drawing::Point(285, 188);
			this->button_LCM_N->Name = L"button_LCM_N";
			this->button_LCM_N->Size = System::Drawing::Size(50, 50);
			this->button_LCM_N->TabIndex = 86;
			this->button_LCM_N->Text = L"НОК";
			this->button_LCM_N->UseVisualStyleBackColor = false;
			this->button_LCM_N->Click += gcnew System::EventHandler(this, &MyForm::button_LCM_N_Click);
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
			this->button_GCD_N->Location = System::Drawing::Point(341, 188);
			this->button_GCD_N->Name = L"button_GCD_N";
			this->button_GCD_N->Size = System::Drawing::Size(50, 50);
			this->button_GCD_N->TabIndex = 85;
			this->button_GCD_N->Text = L"НОД";
			this->button_GCD_N->UseVisualStyleBackColor = false;
			this->button_GCD_N->Click += gcnew System::EventHandler(this, &MyForm::button_GCD_N_Click);
			// 
			// button_MOD_N
			// 
			this->button_MOD_N->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_MOD_N->BackColor = System::Drawing::SystemColors::Menu;
			this->button_MOD_N->FlatAppearance->BorderSize = 0;
			this->button_MOD_N->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_MOD_N->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_MOD_N->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_MOD_N->Location = System::Drawing::Point(341, 244);
			this->button_MOD_N->Name = L"button_MOD_N";
			this->button_MOD_N->Size = System::Drawing::Size(50, 50);
			this->button_MOD_N->TabIndex = 84;
			this->button_MOD_N->Text = L"%";
			this->button_MOD_N->UseVisualStyleBackColor = false;
			this->button_MOD_N->Click += gcnew System::EventHandler(this, &MyForm::button_MOD_N_Click);
			// 
			// button_DIV_N
			// 
			this->button_DIV_N->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_DIV_N->BackColor = System::Drawing::SystemColors::Menu;
			this->button_DIV_N->FlatAppearance->BorderSize = 0;
			this->button_DIV_N->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_DIV_N->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_DIV_N->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_DIV_N->Location = System::Drawing::Point(397, 300);
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
			this->button_PLUSPLUS_N->Location = System::Drawing::Point(285, 132);
			this->button_PLUSPLUS_N->Name = L"button_PLUSPLUS_N";
			this->button_PLUSPLUS_N->Size = System::Drawing::Size(50, 50);
			this->button_PLUSPLUS_N->TabIndex = 82;
			this->button_PLUSPLUS_N->Text = L"++";
			this->button_PLUSPLUS_N->UseVisualStyleBackColor = false;
			this->button_PLUSPLUS_N->Click += gcnew System::EventHandler(this, &MyForm::button_PLUSPLUS_N_Click);
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
			this->button_COMMA_N->Location = System::Drawing::Point(285, 245);
			this->button_COMMA_N->Name = L"button_COMMA_N";
			this->button_COMMA_N->Size = System::Drawing::Size(50, 50);
			this->button_COMMA_N->TabIndex = 80;
			this->button_COMMA_N->Text = L",";
			this->button_COMMA_N->UseVisualStyleBackColor = false;
			this->button_COMMA_N->Click += gcnew System::EventHandler(this, &MyForm::button_COMMA_N_Click);
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
			this->button_MULT_N->Location = System::Drawing::Point(397, 244);
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
			this->button_MINUSMINUS_N->Location = System::Drawing::Point(341, 132);
			this->button_MINUSMINUS_N->Name = L"button_MINUSMINUS_N";
			this->button_MINUSMINUS_N->Size = System::Drawing::Size(50, 50);
			this->button_MINUSMINUS_N->TabIndex = 68;
			this->button_MINUSMINUS_N->Text = L"--";
			this->button_MINUSMINUS_N->UseVisualStyleBackColor = false;
			this->button_MINUSMINUS_N->Click += gcnew System::EventHandler(this, &MyForm::button_MINUSMINUS_N_Click);
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
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->TabControl->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
//------------------------- Main Screen for N --------------------------------------
private: System::Void main_screen_N_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar >= '0' && checkmainScreenFirstIsNotNull() && (e->KeyChar <= '9')
		|| (e->KeyChar == '\b')		//backspace
		|| ((e->KeyChar == '+') || (e->KeyChar == '-') || (e->KeyChar == '*') || (e->KeyChar == '/') || (e->KeyChar == '%')) && checkMainScreenNotEmpty()
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
private: bool checkAdditionalScreenLastIsNotEqually() {
	if (checkAdditionalScreenNotEmpty()) {
		int length = additional_screen_N->Text->Length;
		return additional_screen_N->Text[length - 1] != '=';
	}
	return false;	
}
private: bool checkGoodOperationNokAndNod() {
	return (additional_screen_N->Text->StartsWith("НОД") || additional_screen_N->Text->StartsWith("НОК"))
		&& additional_screen_N->Text->EndsWith(",") && main_screen_N->Text->Length > 0;
}
private: System::Void main_screen_N_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	TextBox^ txtMain = (TextBox^)sender;

	lbl_info->Text = "";	

	if (checkMainScreenNotEmpty()) {
		N number;

		int length = main_screen_N->Text->Length;		
		switch (main_screen_N->Text[length - 1])
		{
		case '+':
			additional_screen_N->Text = main_screen_N->Text;
			main_screen_N->Text = "";

			if (additional_screen_N->Text->EndsWith("++")) {
				additional_screen_N->Text = String::Concat(additional_screen_N->Text, "=");
				number = ParseStr_N(additional_screen_N->Text);
				main_screen_N->Text = WriteNumber_N(number);
			}				
			break;
		case '-':
			additional_screen_N->Text = main_screen_N->Text;
			main_screen_N->Text = "";
			if (additional_screen_N->Text->EndsWith("--")) {
				additional_screen_N->Text = String::Concat(additional_screen_N->Text, "=");
				number = ParseStr_N(additional_screen_N->Text);
				main_screen_N->Text = WriteNumber_N(number);
			}
			break;
		case '*':
			additional_screen_N->Text = main_screen_N->Text;
			main_screen_N->Text = "";
			if ((additional_screen_N->Text->EndsWith("^")))
			{

			}
			break;
		case '/':
			additional_screen_N->Text = main_screen_N->Text;
			main_screen_N->Text = "";
			break;
		case '%':
			additional_screen_N->Text = main_screen_N->Text;
			main_screen_N->Text = "";
			break;
		case '=':
			additional_screen_N->Text = String::Concat(additional_screen_N->Text, main_screen_N->Text);
			//обработка результата
			//вывод на экран
			number = ParseStr_N(additional_screen_N->Text);
			main_screen_N->Text = WriteNumber_N(number);
			break;
		case '(':
			additional_screen_N->Text = main_screen_N->Text;
			main_screen_N->Text = "";
			break;
		case ',':
			additional_screen_N->Text = String::Concat(additional_screen_N->Text, main_screen_N->Text);
			main_screen_N->Text = "";
			break;
		case ')':
			additional_screen_N->Text = String::Concat(additional_screen_N->Text, main_screen_N->Text);
			main_screen_N->Text = "";
			break;
		default:
			break;
		}
	}	
}
//-------------------------------------------------------------------------------
//------------------------- btn logic for N--------------------------------------
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
	if (checkMainScreenNotEmpty())
		main_screen_N->Text = String::Concat(main_screen_N->Text, btn->Text);
	else
		lbl_info->Text = "Пустая строка! Введите какое-нибудь число!";
}
private: System::Void button_MINUS_N_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (checkMainScreenNotEmpty())
		main_screen_N->Text = String::Concat(main_screen_N->Text, btn->Text);
	else
		lbl_info->Text = "Пустая строка! Введите какое-нибудь число!";
}
private: System::Void button_MULT_N_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (checkMainScreenNotEmpty())
		main_screen_N->Text = String::Concat(main_screen_N->Text, btn->Text);
	else
		lbl_info->Text = "Пустая строка! Введите какое-нибудь число!";
}
private: System::Void button_DIV_N_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (checkMainScreenNotEmpty())
		main_screen_N->Text = String::Concat(main_screen_N->Text, btn->Text);
	else
		lbl_info->Text = "Пустая строка! Введите какое-нибудь число!";
}


private: System::Void button_EQUALS_N_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (checkMainScreenNotEmpty() && checkAdditionalScreenNotEmpty()) {
		if (checkAdditionalScreenLastIsNotEqually()) {		
			if (checkGoodOperationNokAndNod())
				main_screen_N->Text = String::Concat(main_screen_N->Text, ")" + btn->Text);
			else
				main_screen_N->Text = String::Concat(main_screen_N->Text, btn->Text);
		}
		else
			lbl_info->Text = "Введите операцию!";
	}
	else
		lbl_info->Text = "Пустая строка! Введите какое-нибудь число!";
}
//-------------------------------------------------------------------------------
private: System::Void button_CHANGE_SIGN_N_Click(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void button_AC_N_Click(System::Object^ sender, System::EventArgs^ e) {
	main_screen_N->Text = "";
	additional_screen_N->Text = "";
	
}
private: System::Void button_PLUSPLUS_N_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (checkMainScreenNotEmpty())
		main_screen_N->Text = String::Concat(main_screen_N->Text, btn->Text);
	else
		lbl_info->Text = "Пустая строка! Введите какое-нибудь число!";
}
private: System::Void button_COM_N_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (main_screen_N->Text->Length > 0)
		main_screen_N->Text = main_screen_N->Text->Remove(main_screen_N->Text->Length - 1);
}
private: System::Void button_MINUSMINUS_N_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (checkMainScreenNotEmpty())
		main_screen_N->Text = String::Concat(main_screen_N->Text, btn->Text);
	else
		lbl_info->Text = "Пустая строка! Введите какое-нибудь число!";
}
private: bool chechAnotherOperation() {
	return additional_screen_N->Text->EndsWith("+")
		|| additional_screen_N->Text->EndsWith("-")
		|| additional_screen_N->Text->EndsWith("*")
		|| additional_screen_N->Text->EndsWith("/")
		|| additional_screen_N->Text->EndsWith("%")
		|| additional_screen_N->Text->EndsWith("^");
}
private: System::Void button_LCM_N_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (!chechAnotherOperation() && main_screen_N->Text->Length == 0)
		main_screen_N->Text = String::Concat(main_screen_N->Text, btn->Text + "(");		
	else
		lbl_info->Text = "Неверная операция!";
}
private: System::Void button_GCD_N_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (!chechAnotherOperation() && main_screen_N->Text->Length == 0)
		main_screen_N->Text = String::Concat(main_screen_N->Text, btn->Text + "(");
	else
		lbl_info->Text = "Неверная операция!";
}
private: System::Void button_MOD_N_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (checkMainScreenNotEmpty())
		main_screen_N->Text = String::Concat(main_screen_N->Text, btn->Text);
	else
		lbl_info->Text = "Пустая строка! Введите какое-нибудь число!";
}
private: System::Void button_COMMA_N_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if ((additional_screen_N->Text->StartsWith("НОД(") || additional_screen_N->Text->StartsWith("НОК("))
		&& main_screen_N->Text->Length>0)
			main_screen_N->Text = String::Concat(main_screen_N->Text, btn->Text);
}
private: System::Void button_10DEGREE_N_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (checkMainScreenNotEmpty())
		main_screen_N->Text = String::Concat(main_screen_N->Text, btn->Text);
	else
		lbl_info->Text = "Пустая строка! Введите какое-нибудь число!";
}
//------------------------- Main Screen for Z --------------------------------------

private: bool checkMainScreen_Z_NotEmpty() {
	return main_screen_Z->Text->Length > 0;
}
private: bool checkmainScreen_Z_FirstIsNotNull() {
	if (!checkMainScreen_Z_NotEmpty()) return true;

	return main_screen_Z->Text[0] != '0';
}
private: bool checkAdditionalScreen_Z_NotEmpty() {
	return additional_screen_Z->Text->Length > 0;
}
private: bool checkAdditionalScreen_Z_LastIsNotEqually() {
	if (checkAdditionalScreen_Z_NotEmpty()) {
		int length = additional_screen_Z->Text->Length;
		return additional_screen_Z->Text[length - 1] != '=';
	}
	return false;
}
private: bool checkGoodOperationNokAndNod_Z() {
	return (additional_screen_Z->Text->StartsWith("НОД") || additional_screen_Z->Text->StartsWith("НОК"))
		&& additional_screen_Z->Text->EndsWith(",") && main_screen_Z->Text->Length > 0;
}

private: System::Void main_screen_Z_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar >= '0' && checkmainScreen_Z_FirstIsNotNull() && (e->KeyChar <= '9')
		|| (e->KeyChar == '\b')		//backspace
		|| ((e->KeyChar == '+') || (e->KeyChar == '-') || (e->KeyChar == '*') || (e->KeyChar == '/') || (e->KeyChar == '%')) && checkMainScreen_Z_NotEmpty()
		)
		return;
	e->Handled = true;
}

private: System::Void main_screen_Z_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	TextBox^ txtMain = (TextBox^)sender;

	lbl_info->Text = "";

	if (checkMainScreen_Z_NotEmpty()) {
		Z number;

		int length = main_screen_Z->Text->Length;
		switch (main_screen_Z->Text[length - 1])
		{
		case '+':
			additional_screen_Z->Text = main_screen_Z->Text;
			main_screen_Z->Text = "";
			if (additional_screen_Z->Text->EndsWith("++"))
				additional_screen_Z->Text = String::Concat(additional_screen_Z->Text, "=");
			break;

		case '-':
			additional_screen_Z->Text = main_screen_Z->Text;
			main_screen_Z->Text = "";
			if (additional_screen_Z->Text->EndsWith("--"))
				additional_screen_Z->Text = String::Concat(additional_screen_Z->Text, "=");
			break;

		case '*':
			additional_screen_Z->Text = main_screen_Z->Text;
			main_screen_Z->Text = "";
			if ((additional_screen_Z->Text->EndsWith("^")))
			{

			}
			break;
		case '/':
			additional_screen_Z->Text = main_screen_Z->Text;
			main_screen_Z->Text = "";
			break;
		case '%':
			additional_screen_Z->Text = main_screen_Z->Text;
			main_screen_Z->Text = "";
			break;
		case '=':
			additional_screen_Z->Text = String::Concat(additional_screen_Z->Text, main_screen_Z->Text);
			//обработка результата
			//вывод на экран

			break;
		case '(':
			additional_screen_Z->Text = main_screen_Z->Text;
			main_screen_Z->Text = "";
			break;
		case ',':
			additional_screen_Z->Text = String::Concat(additional_screen_Z->Text, main_screen_Z->Text);
			main_screen_Z->Text = "";
			break;
		case ')':
			additional_screen_Z->Text = String::Concat(additional_screen_Z->Text, main_screen_Z->Text);
			main_screen_Z->Text = "";
			break;
		default:
			break;
		}
	}
}




//----------------------------BUTTONS FOR Z---------------------------------------//
private: System::Void button_1_Z_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (checkmainScreen_Z_FirstIsNotNull())
		main_screen_Z->Text = String::Concat(main_screen_Z->Text, btn->Text);
}
private: System::Void button_2_Z_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (checkmainScreen_Z_FirstIsNotNull())
		main_screen_Z->Text = String::Concat(main_screen_Z->Text, btn->Text);
}
private: System::Void button_3_Z_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (checkmainScreen_Z_FirstIsNotNull())
		main_screen_Z->Text = String::Concat(main_screen_Z->Text, btn->Text);
}
private: System::Void button_4_Z_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (checkmainScreen_Z_FirstIsNotNull())
		main_screen_Z->Text = String::Concat(main_screen_Z->Text, btn->Text);
}
private: System::Void button_5_Z_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (checkmainScreen_Z_FirstIsNotNull())
		main_screen_Z->Text = String::Concat(main_screen_Z->Text, btn->Text);
}
private: System::Void button_6_Z_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (checkmainScreen_Z_FirstIsNotNull())
		main_screen_Z->Text = String::Concat(main_screen_Z->Text, btn->Text);
}
private: System::Void button_7_Z_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (checkmainScreen_Z_FirstIsNotNull())
		main_screen_Z->Text = String::Concat(main_screen_Z->Text, btn->Text);
}
private: System::Void button_8_Z_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (checkmainScreen_Z_FirstIsNotNull())
		main_screen_Z->Text = String::Concat(main_screen_Z->Text, btn->Text);
}
private: System::Void button_9_Z_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (checkmainScreen_Z_FirstIsNotNull())
		main_screen_Z->Text = String::Concat(main_screen_Z->Text, btn->Text);
}
private: System::Void button_0_Z_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (checkmainScreen_Z_FirstIsNotNull())
		main_screen_Z->Text = String::Concat(main_screen_Z->Text, btn->Text);
}

private: System::Void button_PLUS_Z_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (checkMainScreen_Z_NotEmpty())
		main_screen_Z->Text = String::Concat(main_screen_Z->Text, btn->Text);
	else
		lbl_info->Text = "Пустая строка! Введите какое-нибудь число!";
}
private: System::Void button_MINUS_Z_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (checkMainScreen_Z_NotEmpty())
		main_screen_Z->Text = String::Concat(main_screen_Z->Text, btn->Text);
	else
		lbl_info->Text = "Пустая строка! Введите какое-нибудь число!";
}
private: System::Void button_MULT_Z_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (checkMainScreen_Z_NotEmpty())
		main_screen_Z->Text = String::Concat(main_screen_Z->Text, btn->Text);
	else
		lbl_info->Text = "Пустая строка! Введите какое-нибудь число!";
}
private: System::Void button_DIV_Z_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (checkMainScreen_Z_NotEmpty())
		main_screen_Z->Text = String::Concat(main_screen_Z->Text, btn->Text);
	else
		lbl_info->Text = "Пустая строка! Введите какое-нибудь число!";
}
private: System::Void button_EQUALS_Z_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (checkMainScreen_Z_NotEmpty() && checkAdditionalScreen_Z_NotEmpty()) {
		if (checkAdditionalScreen_Z_LastIsNotEqually()) {
			if (checkGoodOperationNokAndNod())
				main_screen_N->Text = String::Concat(main_screen_N->Text, ")" + btn->Text);
			else
				main_screen_N->Text = String::Concat(main_screen_N->Text, btn->Text);
		}
		else
			lbl_info->Text = "Введите операцию!";
	}
	else
		lbl_info->Text = "Пустая строка! Введите какое-нибудь число!";
}

private: System::Void button_CLEAR_Z_Click(System::Object^ sender, System::EventArgs^ e) {
	main_screen_Z->Text = "";
	additional_screen_Z->Text = "";
}
private: System::Void button_DELETE_Z_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (main_screen_Z->Text->Length > 0)
		main_screen_Z->Text = main_screen_Z->Text->Remove(main_screen_Z->Text->Length - 1);
}
private: System::Void button_PLUSPLUS_Z_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (checkMainScreen_Z_NotEmpty())
		main_screen_Z->Text = String::Concat(main_screen_Z->Text, btn->Text);
	else
		lbl_info->Text = "Пустая строка! Введите какое-нибудь число!";
}
private: System::Void button_MINUSMINUS_Z_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (checkMainScreen_Z_NotEmpty())
		main_screen_Z->Text = String::Concat(main_screen_Z->Text, btn->Text);
	else
		lbl_info->Text = "Пустая строка! Введите какое-нибудь число!";
}

private: bool checkAnotherOperation_Z() {
	return additional_screen_Z->Text->EndsWith("+")
		|| additional_screen_Z->Text->EndsWith("-")
		|| additional_screen_Z->Text->EndsWith("*")
		|| additional_screen_Z->Text->EndsWith("/")
		|| additional_screen_Z->Text->EndsWith("%")
		|| additional_screen_Z->Text->EndsWith("^");
}

/*private: System::Void button_ABS_Z_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (!checkAnotherOperation_Z() && main_screen_Z->Text->Length == 0)
		main_screen_Z->Text = String::Concat(main_screen_Z->Text, btn->Text + "(");
	else
		lbl_info->Text = "Неверная операция!";
}*/

private: System::Void button_LCM_Z_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (!checkAnotherOperation_Z() && main_screen_Z->Text->Length == 0)
		main_screen_Z->Text = String::Concat(main_screen_Z->Text, btn->Text + "(");
	else
		lbl_info->Text = "Неверная операция!";
}
private: System::Void button_GCD_Z_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (!checkAnotherOperation_Z() && main_screen_Z->Text->Length == 0)
		main_screen_Z->Text = String::Concat(main_screen_Z->Text, btn->Text + "(");
	else
		lbl_info->Text = "Неверная операция!";
}
private: System::Void button_COMMA_Z_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if ((additional_screen_Z->Text->StartsWith("НОД(") || additional_screen_Z->Text->StartsWith("НОК("))
		&& main_screen_Z->Text->Length > 0)
		main_screen_Z->Text = String::Concat(main_screen_Z->Text, btn->Text);
}
private: System::Void button_MOD_Z_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (checkMainScreen_Z_NotEmpty())
		main_screen_Z->Text = String::Concat(main_screen_Z->Text, btn->Text);
	else
		lbl_info->Text = "Пустая строка! Введите какое-нибудь число!";
}
private: System::Void button_10DEGREE_Z_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = (Button^)sender;
	if (checkMainScreen_Z_NotEmpty())
		main_screen_Z->Text = String::Concat(main_screen_Z->Text, btn->Text);
	else
		lbl_info->Text = "Пустая строка! Введите какое-нибудь число!";
}
private: System::Void button_CHANGESIGN_Z_Click(System::Object^ sender, System::EventArgs^ e) {
}

};
}
