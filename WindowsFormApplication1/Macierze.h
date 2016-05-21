#pragma once

namespace WindowsFormApplication1 {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Macierze
	/// </summary>
	public ref class Macierze : public System::Windows::Forms::Form
	{
	public:
		Macierze(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Macierze(System::Windows::Forms::Form ^ menuprog)
		{
			otherform = menuprog;
			InitializeComponent();
		}

	protected:
		/// <summary>
			array<RadioButton^, 1> ^ RadioKolumny = gcnew array<RadioButton^, 1>(6);
		/// </summary>
		~Macierze()
		{
			if (components)
			{
				delete components;
			}
		}
		
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Form^ otherform;
	private: System::Windows::Forms::GroupBox^  groupBoxMA;
	private: System::Windows::Forms::RadioButton^  radioButtonK2_A;


	private: System::Windows::Forms::GroupBox^  groupBoxDzia³ania;







	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RadioButton^  radioButtonK4_A;





	private: System::Windows::Forms::RadioButton^  radioButtonK3_A;
	private: System::Windows::Forms::GroupBox^  groupBoxB;


	private: System::Windows::Forms::GroupBox^  groupBoxMB;

	private: System::Windows::Forms::RadioButton^  radioButtonK4_B;

	private: System::Windows::Forms::RadioButton^  radioButtonK3_B;







	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::RadioButton^  radioButtonK2_B;
	private: System::Windows::Forms::RadioButton^  radioButtonTransponowanie;



	private: System::Windows::Forms::RadioButton^  radioButtonPotegowanie;

	private: System::Windows::Forms::RadioButton^  radioButtonMnozenie;

	private: System::Windows::Forms::RadioButton^  radioButtonOdejmowanie;

	private: System::Windows::Forms::RadioButton^  radioButtonDodawanie;

	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox31;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox32;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::TextBox^  textBox30;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::TextBox^  textBox29;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::TextBox^  textBox28;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::TextBox^  textBox27;
	private: System::Windows::Forms::TextBox^  textBox23;
	private: System::Windows::Forms::TextBox^  textBox26;
	private: System::Windows::Forms::TextBox^  textBox24;
	private: System::Windows::Forms::TextBox^  textBox25;
	private: System::Windows::Forms::GroupBox^  groupBoxA;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox16;
private: System::Windows::Forms::GroupBox^  groupBoxMA2;

	private: System::Windows::Forms::RadioButton^  radioButtonW4_A;

	private: System::Windows::Forms::RadioButton^  radioButtonW3_A;

	private: System::Windows::Forms::RadioButton^  radioButtonW2_A;

	private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::GroupBox^  groupBoxMB2;

private: System::Windows::Forms::RadioButton^  radioButtonW4_B;

private: System::Windows::Forms::RadioButton^  radioButtonW3_B;

private: System::Windows::Forms::RadioButton^  radioButtonW2_B;

	private: System::Windows::Forms::Label^  label5;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBoxMA = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonK4_A = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonK3_A = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioButtonK2_A = (gcnew System::Windows::Forms::RadioButton());
			this->groupBoxDzia³ania = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonTransponowanie = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonPotegowanie = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonMnozenie = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonOdejmowanie = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonDodawanie = (gcnew System::Windows::Forms::RadioButton());
			this->groupBoxB = (gcnew System::Windows::Forms::GroupBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxMB = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonK4_B = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonK3_B = (gcnew System::Windows::Forms::RadioButton());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->radioButtonK2_B = (gcnew System::Windows::Forms::RadioButton());
			this->groupBoxA = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxMA2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonW4_A = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonW3_A = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonW2_A = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBoxMB2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonW4_B = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonW3_B = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonW2_B = (gcnew System::Windows::Forms::RadioButton());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBoxMA->SuspendLayout();
			this->groupBoxDzia³ania->SuspendLayout();
			this->groupBoxB->SuspendLayout();
			this->groupBoxMB->SuspendLayout();
			this->groupBoxA->SuspendLayout();
			this->groupBoxMA2->SuspendLayout();
			this->groupBoxMB2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Control;
			this->button2->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(0, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(33, 24);
			this->button2->TabIndex = 7;
			this->button2->Text = L"<--";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Macierze::button2_Click);
			// 
			// groupBoxMA
			// 
			this->groupBoxMA->Controls->Add(this->radioButtonK4_A);
			this->groupBoxMA->Controls->Add(this->radioButtonK3_A);
			this->groupBoxMA->Controls->Add(this->label1);
			this->groupBoxMA->Controls->Add(this->radioButtonK2_A);
			this->groupBoxMA->Location = System::Drawing::Point(12, 44);
			this->groupBoxMA->Name = L"groupBoxMA";
			this->groupBoxMA->Size = System::Drawing::Size(87, 111);
			this->groupBoxMA->TabIndex = 8;
			this->groupBoxMA->TabStop = false;
			this->groupBoxMA->Text = L"Macierz A";
			// 
			// radioButtonK4_A
			// 
			this->radioButtonK4_A->AutoSize = true;
			this->radioButtonK4_A->Enabled = false;
			this->radioButtonK4_A->Location = System::Drawing::Point(9, 88);
			this->radioButtonK4_A->Name = L"radioButtonK4_A";
			this->radioButtonK4_A->Size = System::Drawing::Size(31, 17);
			this->radioButtonK4_A->TabIndex = 3;
			this->radioButtonK4_A->TabStop = true;
			this->radioButtonK4_A->Text = L"4";
			this->radioButtonK4_A->UseVisualStyleBackColor = true;
			RadioKolumny[2] = this->radioButtonK4_A;
			// 
			// radioButtonK3_A
			// 
			this->radioButtonK3_A->AutoSize = true;
			this->radioButtonK3_A->Enabled = false;
			this->radioButtonK3_A->Location = System::Drawing::Point(9, 65);
			this->radioButtonK3_A->Name = L"radioButtonK3_A";
			this->radioButtonK3_A->Size = System::Drawing::Size(31, 17);
			this->radioButtonK3_A->TabIndex = 2;
			this->radioButtonK3_A->TabStop = true;
			this->radioButtonK3_A->Text = L"3";
			this->radioButtonK3_A->UseVisualStyleBackColor = true;
			RadioKolumny[1] = this->radioButtonK3_A;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Kolumny:";
			// 
			// radioButtonK2_A
			// 
			this->radioButtonK2_A->AutoSize = true;
			this->radioButtonK2_A->Enabled = false;
			this->radioButtonK2_A->Location = System::Drawing::Point(9, 42);
			this->radioButtonK2_A->Name = L"radioButtonK2_A";
			this->radioButtonK2_A->Size = System::Drawing::Size(31, 17);
			this->radioButtonK2_A->TabIndex = 0;
			this->radioButtonK2_A->TabStop = true;
			this->radioButtonK2_A->Text = L"2";
			this->radioButtonK2_A->UseVisualStyleBackColor = true;
			RadioKolumny[0] = this->radioButtonK2_A;
			// 
			// groupBoxDzia³ania
			// 
			this->groupBoxDzia³ania->Controls->Add(this->radioButtonTransponowanie);
			this->groupBoxDzia³ania->Controls->Add(this->radioButtonPotegowanie);
			this->groupBoxDzia³ania->Controls->Add(this->radioButtonMnozenie);
			this->groupBoxDzia³ania->Controls->Add(this->radioButtonOdejmowanie);
			this->groupBoxDzia³ania->Controls->Add(this->radioButtonDodawanie);
			this->groupBoxDzia³ania->Location = System::Drawing::Point(14, 275);
			this->groupBoxDzia³ania->Name = L"groupBoxDzia³ania";
			this->groupBoxDzia³ania->Size = System::Drawing::Size(197, 108);
			this->groupBoxDzia³ania->TabIndex = 9;
			this->groupBoxDzia³ania->TabStop = false;
			this->groupBoxDzia³ania->Text = L"Dzia³ania:";
			// 
			// radioButtonTransponowanie
			// 
			this->radioButtonTransponowanie->AutoSize = true;
			this->radioButtonTransponowanie->Location = System::Drawing::Point(6, 85);
			this->radioButtonTransponowanie->Name = L"radioButtonTransponowanie";
			this->radioButtonTransponowanie->Size = System::Drawing::Size(104, 17);
			this->radioButtonTransponowanie->TabIndex = 4;
			this->radioButtonTransponowanie->TabStop = true;
			this->radioButtonTransponowanie->Text = L"Transponowanie";
			this->radioButtonTransponowanie->UseVisualStyleBackColor = true;
			// 
			// radioButtonPotegowanie
			// 
			this->radioButtonPotegowanie->AutoSize = true;
			this->radioButtonPotegowanie->Location = System::Drawing::Point(101, 53);
			this->radioButtonPotegowanie->Name = L"radioButtonPotegowanie";
			this->radioButtonPotegowanie->Size = System::Drawing::Size(87, 17);
			this->radioButtonPotegowanie->TabIndex = 3;
			this->radioButtonPotegowanie->TabStop = true;
			this->radioButtonPotegowanie->Text = L"Potegowanie";
			this->radioButtonPotegowanie->UseVisualStyleBackColor = true;
			// 
			// radioButtonMnozenie
			// 
			this->radioButtonMnozenie->AutoSize = true;
			this->radioButtonMnozenie->Location = System::Drawing::Point(6, 53);
			this->radioButtonMnozenie->Name = L"radioButtonMnozenie";
			this->radioButtonMnozenie->Size = System::Drawing::Size(71, 17);
			this->radioButtonMnozenie->TabIndex = 2;
			this->radioButtonMnozenie->TabStop = true;
			this->radioButtonMnozenie->Text = L"Mno¿enie";
			this->radioButtonMnozenie->UseVisualStyleBackColor = true;
			// 
			// radioButtonOdejmowanie
			// 
			this->radioButtonOdejmowanie->AutoSize = true;
			this->radioButtonOdejmowanie->Location = System::Drawing::Point(101, 19);
			this->radioButtonOdejmowanie->Name = L"radioButtonOdejmowanie";
			this->radioButtonOdejmowanie->Size = System::Drawing::Size(89, 17);
			this->radioButtonOdejmowanie->TabIndex = 1;
			this->radioButtonOdejmowanie->TabStop = true;
			this->radioButtonOdejmowanie->Text = L"Odejmowanie";
			this->radioButtonOdejmowanie->UseVisualStyleBackColor = true;
			// 
			// radioButtonDodawanie
			// 
			this->radioButtonDodawanie->AutoSize = true;
			this->radioButtonDodawanie->Location = System::Drawing::Point(6, 19);
			this->radioButtonDodawanie->Name = L"radioButtonDodawanie";
			this->radioButtonDodawanie->Size = System::Drawing::Size(79, 17);
			this->radioButtonDodawanie->TabIndex = 0;
			this->radioButtonDodawanie->TabStop = true;
			this->radioButtonDodawanie->Text = L"Dodawanie";
			this->radioButtonDodawanie->UseVisualStyleBackColor = true;
			this->radioButtonDodawanie->CheckedChanged += gcnew System::EventHandler(this, &Macierze::radioButtonDodawanie_CheckedChanged);
			// 
			// groupBoxB
			// 
			this->groupBoxB->Controls->Add(this->textBox17);
			this->groupBoxB->Controls->Add(this->textBox31);
			this->groupBoxB->Controls->Add(this->textBox18);
			this->groupBoxB->Controls->Add(this->textBox32);
			this->groupBoxB->Controls->Add(this->textBox19);
			this->groupBoxB->Controls->Add(this->textBox30);
			this->groupBoxB->Controls->Add(this->textBox20);
			this->groupBoxB->Controls->Add(this->textBox29);
			this->groupBoxB->Controls->Add(this->textBox21);
			this->groupBoxB->Controls->Add(this->textBox28);
			this->groupBoxB->Controls->Add(this->textBox22);
			this->groupBoxB->Controls->Add(this->textBox27);
			this->groupBoxB->Controls->Add(this->textBox23);
			this->groupBoxB->Controls->Add(this->textBox26);
			this->groupBoxB->Controls->Add(this->textBox24);
			this->groupBoxB->Controls->Add(this->textBox25);
			this->groupBoxB->Location = System::Drawing::Point(393, 44);
			this->groupBoxB->Name = L"groupBoxB";
			this->groupBoxB->Size = System::Drawing::Size(243, 173);
			this->groupBoxB->TabIndex = 11;
			this->groupBoxB->TabStop = false;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(172, 117);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(43, 20);
			this->textBox17->TabIndex = 31;
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(74, 39);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(43, 20);
			this->textBox31->TabIndex = 17;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(123, 117);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(43, 20);
			this->textBox18->TabIndex = 30;
			// 
			// textBox32
			// 
			this->textBox32->Location = System::Drawing::Point(25, 39);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(43, 20);
			this->textBox32->TabIndex = 16;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(74, 117);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(43, 20);
			this->textBox19->TabIndex = 29;
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(123, 39);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(43, 20);
			this->textBox30->TabIndex = 18;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(25, 117);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(43, 20);
			this->textBox20->TabIndex = 28;
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(172, 39);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(43, 20);
			this->textBox29->TabIndex = 19;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(172, 91);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(43, 20);
			this->textBox21->TabIndex = 27;
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(25, 65);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(43, 20);
			this->textBox28->TabIndex = 20;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(123, 91);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(43, 20);
			this->textBox22->TabIndex = 26;
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(74, 65);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(43, 20);
			this->textBox27->TabIndex = 21;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(74, 91);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(43, 20);
			this->textBox23->TabIndex = 25;
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(123, 65);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(43, 20);
			this->textBox26->TabIndex = 22;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(25, 91);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(43, 20);
			this->textBox24->TabIndex = 24;
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(172, 65);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(43, 20);
			this->textBox25->TabIndex = 23;
			// 
			// groupBoxMB
			// 
			this->groupBoxMB->Controls->Add(this->radioButtonK4_B);
			this->groupBoxMB->Controls->Add(this->radioButtonK3_B);
			this->groupBoxMB->Controls->Add(this->label6);
			this->groupBoxMB->Controls->Add(this->radioButtonK2_B);
			this->groupBoxMB->Location = System::Drawing::Point(642, 44);
			this->groupBoxMB->Name = L"groupBoxMB";
			this->groupBoxMB->Size = System::Drawing::Size(89, 111);
			this->groupBoxMB->TabIndex = 12;
			this->groupBoxMB->TabStop = false;
			this->groupBoxMB->Text = L"Macierz B";
			// 
			// radioButtonK4_B
			// 
			this->radioButtonK4_B->AutoSize = true;
			this->radioButtonK4_B->Enabled = false;
			this->radioButtonK4_B->Location = System::Drawing::Point(9, 88);
			this->radioButtonK4_B->Name = L"radioButtonK4_B";
			this->radioButtonK4_B->Size = System::Drawing::Size(31, 17);
			this->radioButtonK4_B->TabIndex = 3;
			this->radioButtonK4_B->TabStop = true;
			this->radioButtonK4_B->Text = L"4";
			this->radioButtonK4_B->UseVisualStyleBackColor = true;
			RadioKolumny[5] = this->radioButtonK4_B;
			// 
			// radioButtonK3_B
			// 
			this->radioButtonK3_B->AutoSize = true;
			this->radioButtonK3_B->Enabled = false;
			this->radioButtonK3_B->Location = System::Drawing::Point(9, 65);
			this->radioButtonK3_B->Name = L"radioButtonK3_B";
			this->radioButtonK3_B->Size = System::Drawing::Size(31, 17);
			this->radioButtonK3_B->TabIndex = 2;
			this->radioButtonK3_B->TabStop = true;
			this->radioButtonK3_B->Text = L"3";
			this->radioButtonK3_B->UseVisualStyleBackColor = true;
			RadioKolumny[4] = this->radioButtonK3_B;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 26);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(50, 13);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Kolumny:";
			// 
			// radioButtonK2_B
			// 
			this->radioButtonK2_B->AutoSize = true;
			this->radioButtonK2_B->Enabled = false;
			this->radioButtonK2_B->Location = System::Drawing::Point(9, 42);
			this->radioButtonK2_B->Name = L"radioButtonK2_B";
			this->radioButtonK2_B->Size = System::Drawing::Size(31, 17);
			this->radioButtonK2_B->TabIndex = 0;
			this->radioButtonK2_B->TabStop = true;
			this->radioButtonK2_B->Text = L"2";
			this->radioButtonK2_B->UseVisualStyleBackColor = true;
			RadioKolumny[3] = this->radioButtonK2_B;
			// 
			// groupBoxA
			// 
			this->groupBoxA->Controls->Add(this->textBox1);
			this->groupBoxA->Controls->Add(this->textBox2);
			this->groupBoxA->Controls->Add(this->textBox3);
			this->groupBoxA->Controls->Add(this->textBox4);
			this->groupBoxA->Controls->Add(this->textBox5);
			this->groupBoxA->Controls->Add(this->textBox6);
			this->groupBoxA->Controls->Add(this->textBox7);
			this->groupBoxA->Controls->Add(this->textBox8);
			this->groupBoxA->Controls->Add(this->textBox9);
			this->groupBoxA->Controls->Add(this->textBox10);
			this->groupBoxA->Controls->Add(this->textBox11);
			this->groupBoxA->Controls->Add(this->textBox12);
			this->groupBoxA->Controls->Add(this->textBox13);
			this->groupBoxA->Controls->Add(this->textBox14);
			this->groupBoxA->Controls->Add(this->textBox15);
			this->groupBoxA->Controls->Add(this->textBox16);
			this->groupBoxA->Location = System::Drawing::Point(105, 44);
			this->groupBoxA->Name = L"groupBoxA";
			this->groupBoxA->Size = System::Drawing::Size(243, 173);
			this->groupBoxA->TabIndex = 12;
			this->groupBoxA->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(172, 117);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(43, 20);
			this->textBox1->TabIndex = 31;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(74, 39);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(43, 20);
			this->textBox2->TabIndex = 17;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(123, 117);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(43, 20);
			this->textBox3->TabIndex = 30;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(25, 39);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(43, 20);
			this->textBox4->TabIndex = 16;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(74, 117);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(43, 20);
			this->textBox5->TabIndex = 29;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(123, 39);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(43, 20);
			this->textBox6->TabIndex = 18;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(25, 117);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(43, 20);
			this->textBox7->TabIndex = 28;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(172, 39);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(43, 20);
			this->textBox8->TabIndex = 19;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(172, 91);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(43, 20);
			this->textBox9->TabIndex = 27;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(25, 65);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(43, 20);
			this->textBox10->TabIndex = 20;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(123, 91);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(43, 20);
			this->textBox11->TabIndex = 26;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(74, 65);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(43, 20);
			this->textBox12->TabIndex = 21;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(74, 91);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(43, 20);
			this->textBox13->TabIndex = 25;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(123, 65);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(43, 20);
			this->textBox14->TabIndex = 22;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(25, 91);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(43, 20);
			this->textBox15->TabIndex = 24;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(172, 65);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(43, 20);
			this->textBox16->TabIndex = 23;
			// 
			// groupBoxMA2
			// 
			this->groupBoxMA2->Controls->Add(this->radioButtonW4_A);
			this->groupBoxMA2->Controls->Add(this->radioButtonW3_A);
			this->groupBoxMA2->Controls->Add(this->radioButtonW2_A);
			this->groupBoxMA2->Controls->Add(this->label2);
			this->groupBoxMA2->Location = System::Drawing::Point(12, 155);
			this->groupBoxMA2->Name = L"groupBoxMA2";
			this->groupBoxMA2->Size = System::Drawing::Size(87, 99);
			this->groupBoxMA2->TabIndex = 4;
			this->groupBoxMA2->TabStop = false;
			// 
			// radioButtonW4_A
			// 
			this->radioButtonW4_A->AutoSize = true;
			this->radioButtonW4_A->Enabled = false;
			this->radioButtonW4_A->Location = System::Drawing::Point(9, 75);
			this->radioButtonW4_A->Name = L"radioButtonW4_A";
			this->radioButtonW4_A->Size = System::Drawing::Size(31, 17);
			this->radioButtonW4_A->TabIndex = 11;
			this->radioButtonW4_A->TabStop = true;
			this->radioButtonW4_A->Text = L"4";
			this->radioButtonW4_A->UseVisualStyleBackColor = true;
			// 
			// radioButtonW3_A
			// 
			this->radioButtonW3_A->AutoSize = true;
			this->radioButtonW3_A->Enabled = false;
			this->radioButtonW3_A->Location = System::Drawing::Point(9, 52);
			this->radioButtonW3_A->Name = L"radioButtonW3_A";
			this->radioButtonW3_A->Size = System::Drawing::Size(31, 17);
			this->radioButtonW3_A->TabIndex = 10;
			this->radioButtonW3_A->TabStop = true;
			this->radioButtonW3_A->Text = L"3";
			this->radioButtonW3_A->UseVisualStyleBackColor = true;
			// 
			// radioButtonW2_A
			// 
			this->radioButtonW2_A->AutoSize = true;
			this->radioButtonW2_A->Enabled = false;
			this->radioButtonW2_A->Location = System::Drawing::Point(9, 29);
			this->radioButtonW2_A->Name = L"radioButtonW2_A";
			this->radioButtonW2_A->Size = System::Drawing::Size(31, 17);
			this->radioButtonW2_A->TabIndex = 9;
			this->radioButtonW2_A->TabStop = true;
			this->radioButtonW2_A->Text = L"2";
			this->radioButtonW2_A->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Wiersze:";
			// 
			// groupBoxMB2
			// 
			this->groupBoxMB2->Controls->Add(this->radioButtonW4_B);
			this->groupBoxMB2->Controls->Add(this->radioButtonW3_B);
			this->groupBoxMB2->Controls->Add(this->radioButtonW2_B);
			this->groupBoxMB2->Controls->Add(this->label5);
			this->groupBoxMB2->Location = System::Drawing::Point(642, 155);
			this->groupBoxMB2->Name = L"groupBoxMB2";
			this->groupBoxMB2->Size = System::Drawing::Size(89, 99);
			this->groupBoxMB2->TabIndex = 13;
			this->groupBoxMB2->TabStop = false;
			// 
			// radioButtonW4_B
			// 
			this->radioButtonW4_B->AutoSize = true;
			this->radioButtonW4_B->Enabled = false;
			this->radioButtonW4_B->Location = System::Drawing::Point(9, 75);
			this->radioButtonW4_B->Name = L"radioButtonW4_B";
			this->radioButtonW4_B->Size = System::Drawing::Size(31, 17);
			this->radioButtonW4_B->TabIndex = 11;
			this->radioButtonW4_B->TabStop = true;
			this->radioButtonW4_B->Text = L"4";
			this->radioButtonW4_B->UseVisualStyleBackColor = true;
			// 
			// radioButtonW3_B
			// 
			this->radioButtonW3_B->AutoSize = true;
			this->radioButtonW3_B->Enabled = false;
			this->radioButtonW3_B->Location = System::Drawing::Point(9, 52);
			this->radioButtonW3_B->Name = L"radioButtonW3_B";
			this->radioButtonW3_B->Size = System::Drawing::Size(31, 17);
			this->radioButtonW3_B->TabIndex = 10;
			this->radioButtonW3_B->TabStop = true;
			this->radioButtonW3_B->Text = L"3";
			this->radioButtonW3_B->UseVisualStyleBackColor = true;
			// 
			// radioButtonW2_B
			// 
			this->radioButtonW2_B->AutoSize = true;
			this->radioButtonW2_B->Enabled = false;
			this->radioButtonW2_B->Location = System::Drawing::Point(9, 29);
			this->radioButtonW2_B->Name = L"radioButtonW2_B";
			this->radioButtonW2_B->Size = System::Drawing::Size(31, 17);
			this->radioButtonW2_B->TabIndex = 9;
			this->radioButtonW2_B->TabStop = true;
			this->radioButtonW2_B->Text = L"2";
			this->radioButtonW2_B->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 13);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(48, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Wiersze:";
			// 
			// Macierze
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(750, 448);
			this->ControlBox = false;
			this->Controls->Add(this->groupBoxMB2);
			this->Controls->Add(this->groupBoxMA2);
			this->Controls->Add(this->groupBoxA);
			this->Controls->Add(this->groupBoxMB);
			this->Controls->Add(this->groupBoxB);
			this->Controls->Add(this->groupBoxDzia³ania);
			this->Controls->Add(this->groupBoxMA);
			this->Controls->Add(this->button2);
			this->Name = L"Macierze";
			this->Text = L"Macierze";
			this->groupBoxMA->ResumeLayout(false);
			this->groupBoxMA->PerformLayout();
			this->groupBoxDzia³ania->ResumeLayout(false);
			this->groupBoxDzia³ania->PerformLayout();
			this->groupBoxB->ResumeLayout(false);
			this->groupBoxB->PerformLayout();
			this->groupBoxMB->ResumeLayout(false);
			this->groupBoxMB->PerformLayout();
			this->groupBoxA->ResumeLayout(false);
			this->groupBoxA->PerformLayout();
			this->groupBoxMA2->ResumeLayout(false);
			this->groupBoxMA2->PerformLayout();
			this->groupBoxMB2->ResumeLayout(false);
			this->groupBoxMB2->PerformLayout();
			this->ResumeLayout(false);
			
		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
		otherform->Show();
	}

	private: System::Void radioButtonDodawanie_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (radioButtonDodawanie->Checked)
		{
			for (int i = 0; i < 6; i++)
			{
				RadioKolumny[i]->Enabled = true;
			}
			
		}
	}
};
}
