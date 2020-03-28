#pragma once

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


	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button_9;
	private: System::Windows::Forms::Button^ button_6;


	private: System::Windows::Forms::Button^ button_3;

	private: System::Windows::Forms::Button^ button_MINUSMINUS;
	private: System::Windows::Forms::Button^ button_0;
	private: System::Windows::Forms::Button^ button_2;
	private: System::Windows::Forms::Button^ button_5;
	private: System::Windows::Forms::Button^ button_8;





	private: System::Windows::Forms::Button^ button_1;
	private: System::Windows::Forms::Button^ button_4;
	private: System::Windows::Forms::Button^ button_7;




	private: System::Windows::Forms::Button^ button_COM;
	private: System::Windows::Forms::Button^ button_MULT;


	private: System::Windows::Forms::Button^ button_MINUS;

	private: System::Windows::Forms::Button^ button_PLUS;

	private: System::Windows::Forms::Button^ button_COMMA;
	private: System::Windows::Forms::Button^ button_EQUALS;








	private: System::Windows::Forms::Button^ button_PLUSPLUS;

	private: System::Windows::Forms::Button^ button_DIV;
	private: System::Windows::Forms::Button^ button_MOD;


	private: System::Windows::Forms::Button^ button_GCD;
	private: System::Windows::Forms::Button^ button_LCM;


	private: System::Windows::Forms::Button^ button_AC;
	private: System::Windows::Forms::Button^ button_CE;
	private: System::Windows::Forms::Button^ button_CHANGE_SIGN;





	private: System::Windows::Forms::Button^ button_10DEGREE;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;

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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button_9 = (gcnew System::Windows::Forms::Button());
			this->button_6 = (gcnew System::Windows::Forms::Button());
			this->button_3 = (gcnew System::Windows::Forms::Button());
			this->button_MINUSMINUS = (gcnew System::Windows::Forms::Button());
			this->button_0 = (gcnew System::Windows::Forms::Button());
			this->button_2 = (gcnew System::Windows::Forms::Button());
			this->button_5 = (gcnew System::Windows::Forms::Button());
			this->button_8 = (gcnew System::Windows::Forms::Button());
			this->button_1 = (gcnew System::Windows::Forms::Button());
			this->button_4 = (gcnew System::Windows::Forms::Button());
			this->button_7 = (gcnew System::Windows::Forms::Button());
			this->button_COM = (gcnew System::Windows::Forms::Button());
			this->button_MULT = (gcnew System::Windows::Forms::Button());
			this->button_MINUS = (gcnew System::Windows::Forms::Button());
			this->button_PLUS = (gcnew System::Windows::Forms::Button());
			this->button_COMMA = (gcnew System::Windows::Forms::Button());
			this->button_EQUALS = (gcnew System::Windows::Forms::Button());
			this->button_PLUSPLUS = (gcnew System::Windows::Forms::Button());
			this->button_DIV = (gcnew System::Windows::Forms::Button());
			this->button_MOD = (gcnew System::Windows::Forms::Button());
			this->button_GCD = (gcnew System::Windows::Forms::Button());
			this->button_LCM = (gcnew System::Windows::Forms::Button());
			this->button_AC = (gcnew System::Windows::Forms::Button());
			this->button_CE = (gcnew System::Windows::Forms::Button());
			this->button_CHANGE_SIGN = (gcnew System::Windows::Forms::Button());
			this->button_10DEGREE = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 12);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(598, 29);
			this->textBox2->TabIndex = 2;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// button_9
			// 
			this->button_9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_9->BackColor = System::Drawing::Color::LightGray;
			this->button_9->FlatAppearance->BorderSize = 0;
			this->button_9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_9->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_9->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_9->Location = System::Drawing::Point(560, 73);
			this->button_9->Name = L"button_9";
			this->button_9->Size = System::Drawing::Size(50, 50);
			this->button_9->TabIndex = 28;
			this->button_9->Text = L"9";
			this->button_9->UseVisualStyleBackColor = false;
			this->button_9->Click += gcnew System::EventHandler(this, &MyForm::button_9_Click);
			// 
			// button_6
			// 
			this->button_6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_6->BackColor = System::Drawing::Color::LightGray;
			this->button_6->FlatAppearance->BorderSize = 0;
			this->button_6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_6->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_6->Location = System::Drawing::Point(560, 129);
			this->button_6->Name = L"button_6";
			this->button_6->Size = System::Drawing::Size(50, 50);
			this->button_6->TabIndex = 29;
			this->button_6->Text = L"6";
			this->button_6->UseVisualStyleBackColor = false;
			this->button_6->Click += gcnew System::EventHandler(this, &MyForm::button_6_Click);
			// 
			// button_3
			// 
			this->button_3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_3->BackColor = System::Drawing::Color::LightGray;
			this->button_3->FlatAppearance->BorderSize = 0;
			this->button_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_3->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_3->Location = System::Drawing::Point(560, 185);
			this->button_3->Name = L"button_3";
			this->button_3->Size = System::Drawing::Size(50, 50);
			this->button_3->TabIndex = 30;
			this->button_3->Text = L"3";
			this->button_3->UseVisualStyleBackColor = false;
			this->button_3->Click += gcnew System::EventHandler(this, &MyForm::button_3_Click);
			// 
			// button_MINUSMINUS
			// 
			this->button_MINUSMINUS->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_MINUSMINUS->BackColor = System::Drawing::SystemColors::Menu;
			this->button_MINUSMINUS->FlatAppearance->BorderSize = 0;
			this->button_MINUSMINUS->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_MINUSMINUS->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_MINUSMINUS->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_MINUSMINUS->Location = System::Drawing::Point(336, 297);
			this->button_MINUSMINUS->Name = L"button_MINUSMINUS";
			this->button_MINUSMINUS->Size = System::Drawing::Size(50, 50);
			this->button_MINUSMINUS->TabIndex = 31;
			this->button_MINUSMINUS->Text = L"--";
			this->button_MINUSMINUS->UseVisualStyleBackColor = false;
			this->button_MINUSMINUS->Click += gcnew System::EventHandler(this, &MyForm::button_MINUSMINUS_Click);
			// 
			// button_0
			// 
			this->button_0->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_0->BackColor = System::Drawing::Color::LightGray;
			this->button_0->FlatAppearance->BorderSize = 0;
			this->button_0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_0->Font = (gcnew System::Drawing::Font(L"Arial", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_0->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_0->Location = System::Drawing::Point(448, 241);
			this->button_0->Name = L"button_0";
			this->button_0->Size = System::Drawing::Size(162, 50);
			this->button_0->TabIndex = 35;
			this->button_0->Text = L"0";
			this->button_0->UseVisualStyleBackColor = false;
			this->button_0->Click += gcnew System::EventHandler(this, &MyForm::button_0_Click);
			// 
			// button_2
			// 
			this->button_2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_2->BackColor = System::Drawing::Color::LightGray;
			this->button_2->FlatAppearance->BorderSize = 0;
			this->button_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_2->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_2->Location = System::Drawing::Point(504, 185);
			this->button_2->Name = L"button_2";
			this->button_2->Size = System::Drawing::Size(50, 50);
			this->button_2->TabIndex = 34;
			this->button_2->Text = L"2";
			this->button_2->UseVisualStyleBackColor = false;
			this->button_2->Click += gcnew System::EventHandler(this, &MyForm::button_2_Click);
			// 
			// button_5
			// 
			this->button_5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_5->BackColor = System::Drawing::Color::LightGray;
			this->button_5->FlatAppearance->BorderSize = 0;
			this->button_5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_5->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_5->Location = System::Drawing::Point(504, 129);
			this->button_5->Name = L"button_5";
			this->button_5->Size = System::Drawing::Size(50, 50);
			this->button_5->TabIndex = 33;
			this->button_5->Text = L"5";
			this->button_5->UseVisualStyleBackColor = false;
			this->button_5->Click += gcnew System::EventHandler(this, &MyForm::button_5_Click);
			// 
			// button_8
			// 
			this->button_8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_8->BackColor = System::Drawing::Color::LightGray;
			this->button_8->FlatAppearance->BorderSize = 0;
			this->button_8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_8->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_8->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_8->Location = System::Drawing::Point(504, 73);
			this->button_8->Name = L"button_8";
			this->button_8->Size = System::Drawing::Size(50, 50);
			this->button_8->TabIndex = 32;
			this->button_8->Text = L"8";
			this->button_8->UseVisualStyleBackColor = false;
			this->button_8->Click += gcnew System::EventHandler(this, &MyForm::button_8_Click);
			// 
			// button_1
			// 
			this->button_1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_1->BackColor = System::Drawing::Color::LightGray;
			this->button_1->FlatAppearance->BorderSize = 0;
			this->button_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_1->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_1->Location = System::Drawing::Point(448, 185);
			this->button_1->Name = L"button_1";
			this->button_1->Size = System::Drawing::Size(50, 50);
			this->button_1->TabIndex = 38;
			this->button_1->Text = L"1";
			this->button_1->UseVisualStyleBackColor = false;
			this->button_1->Click += gcnew System::EventHandler(this, &MyForm::button_1_Click);
			// 
			// button_4
			// 
			this->button_4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_4->BackColor = System::Drawing::Color::LightGray;
			this->button_4->FlatAppearance->BorderSize = 0;
			this->button_4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_4->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_4->Location = System::Drawing::Point(448, 129);
			this->button_4->Name = L"button_4";
			this->button_4->Size = System::Drawing::Size(50, 50);
			this->button_4->TabIndex = 37;
			this->button_4->Text = L"4";
			this->button_4->UseVisualStyleBackColor = false;
			this->button_4->Click += gcnew System::EventHandler(this, &MyForm::button_4_Click);
			// 
			// button_7
			// 
			this->button_7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_7->BackColor = System::Drawing::Color::LightGray;
			this->button_7->FlatAppearance->BorderSize = 0;
			this->button_7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_7->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_7->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_7->Location = System::Drawing::Point(448, 73);
			this->button_7->Name = L"button_7";
			this->button_7->Size = System::Drawing::Size(50, 50);
			this->button_7->TabIndex = 36;
			this->button_7->Text = L"7";
			this->button_7->UseVisualStyleBackColor = false;
			this->button_7->Click += gcnew System::EventHandler(this, &MyForm::button_7_Click);
			// 
			// button_COM
			// 
			this->button_COM->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_COM->BackColor = System::Drawing::SystemColors::Menu;
			this->button_COM->FlatAppearance->BorderSize = 0;
			this->button_COM->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_COM->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_COM->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_COM->Location = System::Drawing::Point(280, 129);
			this->button_COM->Name = L"button_COM";
			this->button_COM->Size = System::Drawing::Size(50, 50);
			this->button_COM->TabIndex = 43;
			this->button_COM->Text = L"COM";
			this->button_COM->UseVisualStyleBackColor = false;
			this->button_COM->Click += gcnew System::EventHandler(this, &MyForm::button_COM_Click);
			// 
			// button_MULT
			// 
			this->button_MULT->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_MULT->BackColor = System::Drawing::SystemColors::Menu;
			this->button_MULT->FlatAppearance->BorderSize = 0;
			this->button_MULT->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_MULT->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_MULT->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_MULT->Location = System::Drawing::Point(392, 185);
			this->button_MULT->Name = L"button_MULT";
			this->button_MULT->Size = System::Drawing::Size(50, 50);
			this->button_MULT->TabIndex = 42;
			this->button_MULT->Text = L"*";
			this->button_MULT->UseVisualStyleBackColor = false;
			this->button_MULT->Click += gcnew System::EventHandler(this, &MyForm::button_MULT_Click);
			// 
			// button_MINUS
			// 
			this->button_MINUS->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_MINUS->BackColor = System::Drawing::SystemColors::Menu;
			this->button_MINUS->FlatAppearance->BorderSize = 0;
			this->button_MINUS->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_MINUS->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_MINUS->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_MINUS->Location = System::Drawing::Point(392, 129);
			this->button_MINUS->Name = L"button_MINUS";
			this->button_MINUS->Size = System::Drawing::Size(50, 50);
			this->button_MINUS->TabIndex = 41;
			this->button_MINUS->Text = L"-";
			this->button_MINUS->UseVisualStyleBackColor = false;
			this->button_MINUS->Click += gcnew System::EventHandler(this, &MyForm::button_MINUS_Click);
			// 
			// button_PLUS
			// 
			this->button_PLUS->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_PLUS->BackColor = System::Drawing::SystemColors::Menu;
			this->button_PLUS->FlatAppearance->BorderSize = 0;
			this->button_PLUS->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_PLUS->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_PLUS->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_PLUS->Location = System::Drawing::Point(392, 73);
			this->button_PLUS->Name = L"button_PLUS";
			this->button_PLUS->Size = System::Drawing::Size(50, 50);
			this->button_PLUS->TabIndex = 40;
			this->button_PLUS->Text = L"+";
			this->button_PLUS->UseVisualStyleBackColor = false;
			this->button_PLUS->Click += gcnew System::EventHandler(this, &MyForm::button_PLUS_Click);
			// 
			// button_COMMA
			// 
			this->button_COMMA->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_COMMA->BackColor = System::Drawing::SystemColors::Menu;
			this->button_COMMA->FlatAppearance->BorderSize = 0;
			this->button_COMMA->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_COMMA->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_COMMA->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_COMMA->Location = System::Drawing::Point(392, 242);
			this->button_COMMA->Name = L"button_COMMA";
			this->button_COMMA->Size = System::Drawing::Size(50, 50);
			this->button_COMMA->TabIndex = 48;
			this->button_COMMA->Text = L",";
			this->button_COMMA->UseVisualStyleBackColor = false;
			this->button_COMMA->Click += gcnew System::EventHandler(this, &MyForm::button_COMMA_Click);
			// 
			// button_EQUALS
			// 
			this->button_EQUALS->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_EQUALS->BackColor = System::Drawing::SystemColors::Menu;
			this->button_EQUALS->FlatAppearance->BorderSize = 0;
			this->button_EQUALS->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_EQUALS->Font = (gcnew System::Drawing::Font(L"Arial", 32.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_EQUALS->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_EQUALS->Location = System::Drawing::Point(448, 297);
			this->button_EQUALS->Name = L"button_EQUALS";
			this->button_EQUALS->Size = System::Drawing::Size(162, 50);
			this->button_EQUALS->TabIndex = 51;
			this->button_EQUALS->Text = L"=";
			this->button_EQUALS->UseVisualStyleBackColor = false;
			this->button_EQUALS->Click += gcnew System::EventHandler(this, &MyForm::button_EQUALS_Click);
			// 
			// button_PLUSPLUS
			// 
			this->button_PLUSPLUS->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_PLUSPLUS->BackColor = System::Drawing::SystemColors::Menu;
			this->button_PLUSPLUS->FlatAppearance->BorderSize = 0;
			this->button_PLUSPLUS->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_PLUSPLUS->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_PLUSPLUS->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_PLUSPLUS->Location = System::Drawing::Point(280, 297);
			this->button_PLUSPLUS->Name = L"button_PLUSPLUS";
			this->button_PLUSPLUS->Size = System::Drawing::Size(50, 50);
			this->button_PLUSPLUS->TabIndex = 52;
			this->button_PLUSPLUS->Text = L"++";
			this->button_PLUSPLUS->UseVisualStyleBackColor = false;
			this->button_PLUSPLUS->Click += gcnew System::EventHandler(this, &MyForm::button_PLUSPLUS_Click);
			// 
			// button_DIV
			// 
			this->button_DIV->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_DIV->BackColor = System::Drawing::SystemColors::Menu;
			this->button_DIV->FlatAppearance->BorderSize = 0;
			this->button_DIV->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_DIV->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_DIV->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_DIV->Location = System::Drawing::Point(280, 241);
			this->button_DIV->Name = L"button_DIV";
			this->button_DIV->Size = System::Drawing::Size(50, 50);
			this->button_DIV->TabIndex = 53;
			this->button_DIV->Text = L"DIV";
			this->button_DIV->UseVisualStyleBackColor = false;
			this->button_DIV->Click += gcnew System::EventHandler(this, &MyForm::button_DIV_Click);
			// 
			// button_MOD
			// 
			this->button_MOD->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_MOD->BackColor = System::Drawing::SystemColors::Menu;
			this->button_MOD->FlatAppearance->BorderSize = 0;
			this->button_MOD->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_MOD->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_MOD->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_MOD->Location = System::Drawing::Point(336, 241);
			this->button_MOD->Name = L"button_MOD";
			this->button_MOD->Size = System::Drawing::Size(50, 50);
			this->button_MOD->TabIndex = 54;
			this->button_MOD->Text = L"MOD";
			this->button_MOD->UseVisualStyleBackColor = false;
			this->button_MOD->Click += gcnew System::EventHandler(this, &MyForm::button_MOD_Click);
			// 
			// button_GCD
			// 
			this->button_GCD->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_GCD->BackColor = System::Drawing::SystemColors::Menu;
			this->button_GCD->FlatAppearance->BorderSize = 0;
			this->button_GCD->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_GCD->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_GCD->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_GCD->Location = System::Drawing::Point(280, 185);
			this->button_GCD->Name = L"button_GCD";
			this->button_GCD->Size = System::Drawing::Size(50, 50);
			this->button_GCD->TabIndex = 55;
			this->button_GCD->Text = L"GCD";
			this->button_GCD->UseVisualStyleBackColor = false;
			this->button_GCD->Click += gcnew System::EventHandler(this, &MyForm::button_GCD_Click);
			// 
			// button_LCM
			// 
			this->button_LCM->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_LCM->BackColor = System::Drawing::SystemColors::Menu;
			this->button_LCM->FlatAppearance->BorderSize = 0;
			this->button_LCM->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_LCM->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_LCM->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_LCM->Location = System::Drawing::Point(336, 185);
			this->button_LCM->Name = L"button_LCM";
			this->button_LCM->Size = System::Drawing::Size(50, 50);
			this->button_LCM->TabIndex = 56;
			this->button_LCM->Text = L"LCM";
			this->button_LCM->UseVisualStyleBackColor = false;
			this->button_LCM->Click += gcnew System::EventHandler(this, &MyForm::button_LCM_Click);
			// 
			// button_AC
			// 
			this->button_AC->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_AC->BackColor = System::Drawing::SystemColors::Menu;
			this->button_AC->FlatAppearance->BorderSize = 0;
			this->button_AC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_AC->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_AC->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_AC->Location = System::Drawing::Point(280, 73);
			this->button_AC->Name = L"button_AC";
			this->button_AC->Size = System::Drawing::Size(50, 50);
			this->button_AC->TabIndex = 57;
			this->button_AC->Text = L"AC";
			this->button_AC->UseVisualStyleBackColor = false;
			this->button_AC->Click += gcnew System::EventHandler(this, &MyForm::button_AC_Click);
			// 
			// button_CE
			// 
			this->button_CE->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_CE->BackColor = System::Drawing::SystemColors::Menu;
			this->button_CE->FlatAppearance->BorderSize = 0;
			this->button_CE->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_CE->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_CE->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_CE->Location = System::Drawing::Point(336, 73);
			this->button_CE->Name = L"button_CE";
			this->button_CE->Size = System::Drawing::Size(50, 50);
			this->button_CE->TabIndex = 58;
			this->button_CE->Text = L"CE";
			this->button_CE->UseVisualStyleBackColor = false;
			this->button_CE->Click += gcnew System::EventHandler(this, &MyForm::button_CE_Click);
			// 
			// button_CHANGE_SIGN
			// 
			this->button_CHANGE_SIGN->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_CHANGE_SIGN->BackColor = System::Drawing::SystemColors::Menu;
			this->button_CHANGE_SIGN->FlatAppearance->BorderSize = 0;
			this->button_CHANGE_SIGN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_CHANGE_SIGN->Font = (gcnew System::Drawing::Font(L"Arial", 18.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_CHANGE_SIGN->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_CHANGE_SIGN->Location = System::Drawing::Point(392, 296);
			this->button_CHANGE_SIGN->Name = L"button_CHANGE_SIGN";
			this->button_CHANGE_SIGN->Size = System::Drawing::Size(50, 50);
			this->button_CHANGE_SIGN->TabIndex = 60;
			this->button_CHANGE_SIGN->Text = L"+/-";
			this->button_CHANGE_SIGN->UseVisualStyleBackColor = false;
			this->button_CHANGE_SIGN->Click += gcnew System::EventHandler(this, &MyForm::button_CHANGE_SIGN_Click);
			// 
			// button_10DEGREE
			// 
			this->button_10DEGREE->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_10DEGREE->BackColor = System::Drawing::SystemColors::Menu;
			this->button_10DEGREE->FlatAppearance->BorderSize = 0;
			this->button_10DEGREE->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_10DEGREE->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_10DEGREE->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_10DEGREE->Location = System::Drawing::Point(336, 129);
			this->button_10DEGREE->Name = L"button_10DEGREE";
			this->button_10DEGREE->Size = System::Drawing::Size(50, 50);
			this->button_10DEGREE->TabIndex = 61;
			this->button_10DEGREE->Text = L"10^x";
			this->button_10DEGREE->UseVisualStyleBackColor = false;
			this->button_10DEGREE->Click += gcnew System::EventHandler(this, &MyForm::button_10DEGREE_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(12, 73);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 255);
			this->label1->TabIndex = 62;
			this->label1->Text = L"З\r\nД\r\nЕ\r\nС\r\nЬ\r\nО\r\nП\r\nИ\r\nС\r\nА\r\nН\r\nИ\r\nЕ\r\nФУНК\r\nЦИЙ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 40);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(598, 29);
			this->textBox1->TabIndex = 63;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(622, 364);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_10DEGREE);
			this->Controls->Add(this->button_CHANGE_SIGN);
			this->Controls->Add(this->button_CE);
			this->Controls->Add(this->button_AC);
			this->Controls->Add(this->button_LCM);
			this->Controls->Add(this->button_GCD);
			this->Controls->Add(this->button_MOD);
			this->Controls->Add(this->button_DIV);
			this->Controls->Add(this->button_PLUSPLUS);
			this->Controls->Add(this->button_EQUALS);
			this->Controls->Add(this->button_COMMA);
			this->Controls->Add(this->button_COM);
			this->Controls->Add(this->button_MULT);
			this->Controls->Add(this->button_MINUS);
			this->Controls->Add(this->button_PLUS);
			this->Controls->Add(this->button_1);
			this->Controls->Add(this->button_4);
			this->Controls->Add(this->button_7);
			this->Controls->Add(this->button_0);
			this->Controls->Add(this->button_2);
			this->Controls->Add(this->button_5);
			this->Controls->Add(this->button_8);
			this->Controls->Add(this->button_MINUSMINUS);
			this->Controls->Add(this->button_3);
			this->Controls->Add(this->button_6);
			this->Controls->Add(this->button_9);
			this->Controls->Add(this->textBox2);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"Natural number";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// кнопка 0
private: System::Void button_0_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = System::Convert::ToString(0);
	textBox2->Text = System::Convert::ToString(0);
}
		// кнопка 1
private: System::Void button_1_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = System::Convert::ToString(1);
	textBox2->Text = System::Convert::ToString(1);
}
	   // кнопка 2
private: System::Void button_2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = System::Convert::ToString(2);
	textBox2->Text = System::Convert::ToString(2);
}
	   // кнопка 3
private: System::Void button_3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = System::Convert::ToString(3);
	textBox2->Text = System::Convert::ToString(3);
}
	   // кнопка 4
private: System::Void button_4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = System::Convert::ToString(4);
	textBox2->Text = System::Convert::ToString(4);
}
	   // кнопка 5
private: System::Void button_5_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = System::Convert::ToString(5);
	textBox2->Text = System::Convert::ToString(5);
}
	   // кнопка 6
private: System::Void button_6_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = System::Convert::ToString(6);
	textBox2->Text = System::Convert::ToString(6);
}
	   // кнопка 7
private: System::Void button_7_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = System::Convert::ToString(7);
	textBox2->Text = System::Convert::ToString(7);
}
	   // кнопка 8
private: System::Void button_8_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = System::Convert::ToString(8);
	textBox2->Text = System::Convert::ToString(8);
}
	   // кнопка 9
private: System::Void button_9_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = System::Convert::ToString(9);
	textBox2->Text = System::Convert::ToString(9);
}
	   // кнопка +
private: System::Void button_PLUS_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Text = System::Convert::ToString("+");
}
	   // кнопка -
private: System::Void button_MINUS_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Text = System::Convert::ToString("-");
}
	   // кнопка *
private: System::Void button_MULT_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Text = System::Convert::ToString("*");
}
	   // кнопка =
private: System::Void button_EQUALS_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = System::Convert::ToString("RESULT");
	textBox2->Text = System::Convert::ToString("=");
	//textBox2->Text = System::Convert::ToString("RESULT");
}
	   // кнопка +/-
private: System::Void button_CHANGE_SIGN_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Text = System::Convert::ToString("+/-");
}
	   // кнопка ++
private: System::Void button_PLUSPLUS_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Text = System::Convert::ToString("++");
}
	   // кнопка --
private: System::Void button_MINUSMINUS_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Text = System::Convert::ToString("--");
}
	   // кнопка сравнения
private: System::Void button_COM_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Text = System::Convert::ToString("COM");
}
	   // кнопка возведения в степень 10
private: System::Void button_10DEGREE_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Text = System::Convert::ToString("10^X");
}
	   // кнопка НОД
private: System::Void button_GCD_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Text = System::Convert::ToString("GCD");
}
	   // кнопка НОК
private: System::Void button_LCM_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Text = System::Convert::ToString("LCM");
}
	   // кнопка целой части деления
private: System::Void button_DIV_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Text = System::Convert::ToString("DIV");
}
	   // кнопка остатка от деления
private: System::Void button_MOD_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Text = System::Convert::ToString("MOD");
}
private: System::Void button_COMMA_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Text = System::Convert::ToString(",");
}
	   // кнопка удалить все
private: System::Void button_AC_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Text = System::Convert::ToString("DELETE ALL");
}
	   // кнопка удалить последний символ
private: System::Void button_CE_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Text = System::Convert::ToString("DELETE 1 SIGN");
}

private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	// здесь вводятся только цифры
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9'))   //если вводятся цифры от 0 до 9 то "далее"
		return;
	e->Handled = true;
}
	// здесь вводятся цифры, знаки, буквы
private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
}

};
}
