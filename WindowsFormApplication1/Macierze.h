#pragma once
#include "stdafx.h"

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

		void unlockRadio(RadioButton^);
		void MatrixA();
		void MatrixB();

	protected:
		/// <summary>
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
	private: System::Windows::Forms::TextBox^  B44;


	private: System::Windows::Forms::TextBox^  B12;
	private: System::Windows::Forms::TextBox^  B43;


	private: System::Windows::Forms::TextBox^  B11;
	private: System::Windows::Forms::TextBox^  B42;


	private: System::Windows::Forms::TextBox^  B13;
	private: System::Windows::Forms::TextBox^  B41;


	private: System::Windows::Forms::TextBox^  B14;
	private: System::Windows::Forms::TextBox^  B34;


	private: System::Windows::Forms::TextBox^  B21;
	private: System::Windows::Forms::TextBox^  B33;


	private: System::Windows::Forms::TextBox^  B22;
	private: System::Windows::Forms::TextBox^  B32;


	private: System::Windows::Forms::TextBox^  B23;
	private: System::Windows::Forms::TextBox^  B31;


private: System::Windows::Forms::TextBox^  B24;

	private: System::Windows::Forms::GroupBox^  groupBoxA;
	private: System::Windows::Forms::TextBox^  A44;


	private: System::Windows::Forms::TextBox^  A12;
	private: System::Windows::Forms::TextBox^  A43;


	private: System::Windows::Forms::TextBox^  A11;
private: System::Windows::Forms::TextBox^  A42;



private: System::Windows::Forms::TextBox^  A13;
private: System::Windows::Forms::TextBox^  A41;


private: System::Windows::Forms::TextBox^  A14;
private: System::Windows::Forms::TextBox^  A34;


private: System::Windows::Forms::TextBox^  A21;
private: System::Windows::Forms::TextBox^  A33;


private: System::Windows::Forms::TextBox^  A22;
private: System::Windows::Forms::TextBox^  A32;


private: System::Windows::Forms::TextBox^  A23;
private: System::Windows::Forms::TextBox^  A31;


private: System::Windows::Forms::TextBox^  A24;

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
private: System::Windows::Forms::GroupBox^  groupBox1;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		array<RadioButton^, 1> ^ RadioA = gcnew array<RadioButton^, 1>(6);
		array<RadioButton^, 1> ^ RadioB = gcnew array<RadioButton^, 1>(6);
		array<array<TextBox^>^> ^ A = gcnew array<array<TextBox^>^>(4);
		array<array<TextBox^>^> ^ B = gcnew array<array<TextBox^>^>(4);
		
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
			this->B44 = (gcnew System::Windows::Forms::TextBox());
			this->B12 = (gcnew System::Windows::Forms::TextBox());
			this->B43 = (gcnew System::Windows::Forms::TextBox());
			this->B11 = (gcnew System::Windows::Forms::TextBox());
			this->B42 = (gcnew System::Windows::Forms::TextBox());
			this->B13 = (gcnew System::Windows::Forms::TextBox());
			this->B41 = (gcnew System::Windows::Forms::TextBox());
			this->B14 = (gcnew System::Windows::Forms::TextBox());
			this->B34 = (gcnew System::Windows::Forms::TextBox());
			this->B21 = (gcnew System::Windows::Forms::TextBox());
			this->B33 = (gcnew System::Windows::Forms::TextBox());
			this->B22 = (gcnew System::Windows::Forms::TextBox());
			this->B32 = (gcnew System::Windows::Forms::TextBox());
			this->B23 = (gcnew System::Windows::Forms::TextBox());
			this->B31 = (gcnew System::Windows::Forms::TextBox());
			this->B24 = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxMB = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonK4_B = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonK3_B = (gcnew System::Windows::Forms::RadioButton());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->radioButtonK2_B = (gcnew System::Windows::Forms::RadioButton());
			this->groupBoxA = (gcnew System::Windows::Forms::GroupBox());
			this->A44 = (gcnew System::Windows::Forms::TextBox());
			this->A12 = (gcnew System::Windows::Forms::TextBox());
			this->A43 = (gcnew System::Windows::Forms::TextBox());
			this->A11 = (gcnew System::Windows::Forms::TextBox());
			this->A42 = (gcnew System::Windows::Forms::TextBox());
			this->A13 = (gcnew System::Windows::Forms::TextBox());
			this->A41 = (gcnew System::Windows::Forms::TextBox());
			this->A14 = (gcnew System::Windows::Forms::TextBox());
			this->A34 = (gcnew System::Windows::Forms::TextBox());
			this->A21 = (gcnew System::Windows::Forms::TextBox());
			this->A33 = (gcnew System::Windows::Forms::TextBox());
			this->A22 = (gcnew System::Windows::Forms::TextBox());
			this->A32 = (gcnew System::Windows::Forms::TextBox());
			this->A23 = (gcnew System::Windows::Forms::TextBox());
			this->A31 = (gcnew System::Windows::Forms::TextBox());
			this->A24 = (gcnew System::Windows::Forms::TextBox());
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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxMA->SuspendLayout();
			this->groupBoxDzia³ania->SuspendLayout();
			this->groupBoxB->SuspendLayout();
			this->groupBoxMB->SuspendLayout();
			this->groupBoxA->SuspendLayout();
			this->groupBoxMA2->SuspendLayout();
			this->groupBoxMB2->SuspendLayout();
			this->SuspendLayout();
			MatrixA();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Control;
			this->button2->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(0, 0);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(44, 30);
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
			this->groupBoxMA->Location = System::Drawing::Point(16, 54);
			this->groupBoxMA->Margin = System::Windows::Forms::Padding(4);
			this->groupBoxMA->Name = L"groupBoxMA";
			this->groupBoxMA->Padding = System::Windows::Forms::Padding(4);
			this->groupBoxMA->Size = System::Drawing::Size(116, 137);
			this->groupBoxMA->TabIndex = 8;
			this->groupBoxMA->TabStop = false;
			this->groupBoxMA->Text = L"Macierz A";
			// 
			// radioButtonK4_A
			// 
			this->radioButtonK4_A->AutoSize = true;
			this->radioButtonK4_A->Enabled = false;
			this->radioButtonK4_A->Location = System::Drawing::Point(12, 108);
			this->radioButtonK4_A->Margin = System::Windows::Forms::Padding(4);
			this->radioButtonK4_A->Name = L"radioButtonK4_A";
			this->radioButtonK4_A->Size = System::Drawing::Size(37, 21);
			this->radioButtonK4_A->TabIndex = 3;
			this->radioButtonK4_A->TabStop = true;
			this->radioButtonK4_A->Text = L"4";
			this->radioButtonK4_A->UseVisualStyleBackColor = true;
			this->radioButtonK4_A->CheckedChanged += gcnew System::EventHandler(this, &Macierze::radioButtonK4_A_CheckedChanged);
			// 
			// radioButtonK3_A
			// 
			this->radioButtonK3_A->AutoSize = true;
			this->radioButtonK3_A->Enabled = false;
			this->radioButtonK3_A->Location = System::Drawing::Point(12, 80);
			this->radioButtonK3_A->Margin = System::Windows::Forms::Padding(4);
			this->radioButtonK3_A->Name = L"radioButtonK3_A";
			this->radioButtonK3_A->Size = System::Drawing::Size(37, 21);
			this->radioButtonK3_A->TabIndex = 2;
			this->radioButtonK3_A->TabStop = true;
			this->radioButtonK3_A->Text = L"3";
			this->radioButtonK3_A->UseVisualStyleBackColor = true;
			this->radioButtonK3_A->CheckedChanged += gcnew System::EventHandler(this, &Macierze::radioButtonK3_A_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 32);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Kolumny:";
			// 
			// radioButtonK2_A
			// 
			this->radioButtonK2_A->AutoSize = true;
			this->radioButtonK2_A->Enabled = false;
			this->radioButtonK2_A->Location = System::Drawing::Point(12, 52);
			this->radioButtonK2_A->Margin = System::Windows::Forms::Padding(4);
			this->radioButtonK2_A->Name = L"radioButtonK2_A";
			this->radioButtonK2_A->Size = System::Drawing::Size(37, 21);
			this->radioButtonK2_A->TabIndex = 0;
			this->radioButtonK2_A->TabStop = true;
			this->radioButtonK2_A->Text = L"2";
			this->radioButtonK2_A->UseVisualStyleBackColor = true;
			this->radioButtonK2_A->CheckedChanged += gcnew System::EventHandler(this, &Macierze::radioButtonK2_A_CheckedChanged);
			// 
			// groupBoxDzia³ania
			// 
			this->groupBoxDzia³ania->Controls->Add(this->radioButtonTransponowanie);
			this->groupBoxDzia³ania->Controls->Add(this->radioButtonPotegowanie);
			this->groupBoxDzia³ania->Controls->Add(this->radioButtonMnozenie);
			this->groupBoxDzia³ania->Controls->Add(this->radioButtonOdejmowanie);
			this->groupBoxDzia³ania->Controls->Add(this->radioButtonDodawanie);
			this->groupBoxDzia³ania->Location = System::Drawing::Point(19, 338);
			this->groupBoxDzia³ania->Margin = System::Windows::Forms::Padding(4);
			this->groupBoxDzia³ania->Name = L"groupBoxDzia³ania";
			this->groupBoxDzia³ania->Padding = System::Windows::Forms::Padding(4);
			this->groupBoxDzia³ania->Size = System::Drawing::Size(263, 133);
			this->groupBoxDzia³ania->TabIndex = 9;
			this->groupBoxDzia³ania->TabStop = false;
			this->groupBoxDzia³ania->Text = L"Dzia³ania:";
			// 
			// radioButtonTransponowanie
			// 
			this->radioButtonTransponowanie->AutoSize = true;
			this->radioButtonTransponowanie->Location = System::Drawing::Point(8, 105);
			this->radioButtonTransponowanie->Margin = System::Windows::Forms::Padding(4);
			this->radioButtonTransponowanie->Name = L"radioButtonTransponowanie";
			this->radioButtonTransponowanie->Size = System::Drawing::Size(134, 21);
			this->radioButtonTransponowanie->TabIndex = 4;
			this->radioButtonTransponowanie->TabStop = true;
			this->radioButtonTransponowanie->Text = L"Transponowanie";
			this->radioButtonTransponowanie->UseVisualStyleBackColor = true;
			this->radioButtonTransponowanie->CheckedChanged += gcnew System::EventHandler(this, &Macierze::radioButtonTransponowanie_CheckedChanged);
			// 
			// radioButtonPotegowanie
			// 
			this->radioButtonPotegowanie->AutoSize = true;
			this->radioButtonPotegowanie->Location = System::Drawing::Point(135, 65);
			this->radioButtonPotegowanie->Margin = System::Windows::Forms::Padding(4);
			this->radioButtonPotegowanie->Name = L"radioButtonPotegowanie";
			this->radioButtonPotegowanie->Size = System::Drawing::Size(110, 21);
			this->radioButtonPotegowanie->TabIndex = 3;
			this->radioButtonPotegowanie->TabStop = true;
			this->radioButtonPotegowanie->Text = L"Potegowanie";
			this->radioButtonPotegowanie->UseVisualStyleBackColor = true;
			this->radioButtonPotegowanie->CheckedChanged += gcnew System::EventHandler(this, &Macierze::radioButtonPotegowanie_CheckedChanged);
			// 
			// radioButtonMnozenie
			// 
			this->radioButtonMnozenie->AutoSize = true;
			this->radioButtonMnozenie->Location = System::Drawing::Point(8, 65);
			this->radioButtonMnozenie->Margin = System::Windows::Forms::Padding(4);
			this->radioButtonMnozenie->Name = L"radioButtonMnozenie";
			this->radioButtonMnozenie->Size = System::Drawing::Size(90, 21);
			this->radioButtonMnozenie->TabIndex = 2;
			this->radioButtonMnozenie->TabStop = true;
			this->radioButtonMnozenie->Text = L"Mno¿enie";
			this->radioButtonMnozenie->UseVisualStyleBackColor = true;
			this->radioButtonMnozenie->CheckedChanged += gcnew System::EventHandler(this, &Macierze::radioButtonMnozenie_CheckedChanged);
			// 
			// radioButtonOdejmowanie
			// 
			this->radioButtonOdejmowanie->AutoSize = true;
			this->radioButtonOdejmowanie->Location = System::Drawing::Point(135, 23);
			this->radioButtonOdejmowanie->Margin = System::Windows::Forms::Padding(4);
			this->radioButtonOdejmowanie->Name = L"radioButtonOdejmowanie";
			this->radioButtonOdejmowanie->Size = System::Drawing::Size(114, 21);
			this->radioButtonOdejmowanie->TabIndex = 1;
			this->radioButtonOdejmowanie->TabStop = true;
			this->radioButtonOdejmowanie->Text = L"Odejmowanie";
			this->radioButtonOdejmowanie->UseVisualStyleBackColor = true;
			this->radioButtonOdejmowanie->CheckedChanged += gcnew System::EventHandler(this, &Macierze::radioButtonOdejmowanie_CheckedChanged);
			// 
			// radioButtonDodawanie
			// 
			this->radioButtonDodawanie->AutoSize = true;
			this->radioButtonDodawanie->Location = System::Drawing::Point(8, 23);
			this->radioButtonDodawanie->Margin = System::Windows::Forms::Padding(4);
			this->radioButtonDodawanie->Name = L"radioButtonDodawanie";
			this->radioButtonDodawanie->Size = System::Drawing::Size(99, 21);
			this->radioButtonDodawanie->TabIndex = 0;
			this->radioButtonDodawanie->TabStop = true;
			this->radioButtonDodawanie->Text = L"Dodawanie";
			this->radioButtonDodawanie->UseVisualStyleBackColor = true;
			this->radioButtonDodawanie->CheckedChanged += gcnew System::EventHandler(this, &Macierze::radioButtonDodawanie_CheckedChanged);
			// 
			// groupBoxB
			// 
			this->groupBoxB->Controls->Add(this->B44);
			this->groupBoxB->Controls->Add(this->B12);
			this->groupBoxB->Controls->Add(this->B43);
			this->groupBoxB->Controls->Add(this->B11);
			this->groupBoxB->Controls->Add(this->B42);
			this->groupBoxB->Controls->Add(this->B13);
			this->groupBoxB->Controls->Add(this->B41);
			this->groupBoxB->Controls->Add(this->B14);
			this->groupBoxB->Controls->Add(this->B34);
			this->groupBoxB->Controls->Add(this->B21);
			this->groupBoxB->Controls->Add(this->B33);
			this->groupBoxB->Controls->Add(this->B22);
			this->groupBoxB->Controls->Add(this->B32);
			this->groupBoxB->Controls->Add(this->B23);
			this->groupBoxB->Controls->Add(this->B31);
			this->groupBoxB->Controls->Add(this->B24);
			this->groupBoxB->Location = System::Drawing::Point(524, 54);
			this->groupBoxB->Margin = System::Windows::Forms::Padding(4);
			this->groupBoxB->Name = L"groupBoxB";
			this->groupBoxB->Padding = System::Windows::Forms::Padding(4);
			this->groupBoxB->Size = System::Drawing::Size(324, 213);
			this->groupBoxB->TabIndex = 11;
			this->groupBoxB->TabStop = false;
			// 
			// B44
			// 
			this->B44->Location = System::Drawing::Point(229, 144);
			this->B44->Margin = System::Windows::Forms::Padding(4);
			this->B44->Name = L"B44";
			this->B44->Size = System::Drawing::Size(56, 22);
			this->B44->TabIndex = 31;
			// 
			// B12
			// 
			this->B12->Location = System::Drawing::Point(99, 48);
			this->B12->Margin = System::Windows::Forms::Padding(4);
			this->B12->Name = L"B12";
			this->B12->Size = System::Drawing::Size(56, 22);
			this->B12->TabIndex = 17;
			// 
			// B43
			// 
			this->B43->Location = System::Drawing::Point(164, 144);
			this->B43->Margin = System::Windows::Forms::Padding(4);
			this->B43->Name = L"B43";
			this->B43->Size = System::Drawing::Size(56, 22);
			this->B43->TabIndex = 30;
			// 
			// B11
			// 
			this->B11->Location = System::Drawing::Point(33, 48);
			this->B11->Margin = System::Windows::Forms::Padding(4);
			this->B11->Name = L"B11";
			this->B11->Size = System::Drawing::Size(56, 22);
			this->B11->TabIndex = 16;
			// 
			// B42
			// 
			this->B42->Location = System::Drawing::Point(99, 144);
			this->B42->Margin = System::Windows::Forms::Padding(4);
			this->B42->Name = L"B42";
			this->B42->Size = System::Drawing::Size(56, 22);
			this->B42->TabIndex = 29;
			// 
			// B13
			// 
			this->B13->Location = System::Drawing::Point(164, 48);
			this->B13->Margin = System::Windows::Forms::Padding(4);
			this->B13->Name = L"B13";
			this->B13->Size = System::Drawing::Size(56, 22);
			this->B13->TabIndex = 18;
			// 
			// B41
			// 
			this->B41->Location = System::Drawing::Point(33, 144);
			this->B41->Margin = System::Windows::Forms::Padding(4);
			this->B41->Name = L"B41";
			this->B41->Size = System::Drawing::Size(56, 22);
			this->B41->TabIndex = 28;
			// 
			// B14
			// 
			this->B14->Location = System::Drawing::Point(229, 48);
			this->B14->Margin = System::Windows::Forms::Padding(4);
			this->B14->Name = L"B14";
			this->B14->Size = System::Drawing::Size(56, 22);
			this->B14->TabIndex = 19;
			// 
			// B34
			// 
			this->B34->Location = System::Drawing::Point(229, 112);
			this->B34->Margin = System::Windows::Forms::Padding(4);
			this->B34->Name = L"B34";
			this->B34->Size = System::Drawing::Size(56, 22);
			this->B34->TabIndex = 27;
			// 
			// B21
			// 
			this->B21->Location = System::Drawing::Point(33, 80);
			this->B21->Margin = System::Windows::Forms::Padding(4);
			this->B21->Name = L"B21";
			this->B21->Size = System::Drawing::Size(56, 22);
			this->B21->TabIndex = 20;
			// 
			// B33
			// 
			this->B33->Location = System::Drawing::Point(164, 112);
			this->B33->Margin = System::Windows::Forms::Padding(4);
			this->B33->Name = L"B33";
			this->B33->Size = System::Drawing::Size(56, 22);
			this->B33->TabIndex = 26;
			// 
			// B22
			// 
			this->B22->Location = System::Drawing::Point(99, 80);
			this->B22->Margin = System::Windows::Forms::Padding(4);
			this->B22->Name = L"B22";
			this->B22->Size = System::Drawing::Size(56, 22);
			this->B22->TabIndex = 21;
			// 
			// B32
			// 
			this->B32->Location = System::Drawing::Point(99, 112);
			this->B32->Margin = System::Windows::Forms::Padding(4);
			this->B32->Name = L"B32";
			this->B32->Size = System::Drawing::Size(56, 22);
			this->B32->TabIndex = 25;
			// 
			// B23
			// 
			this->B23->Location = System::Drawing::Point(164, 80);
			this->B23->Margin = System::Windows::Forms::Padding(4);
			this->B23->Name = L"B23";
			this->B23->Size = System::Drawing::Size(56, 22);
			this->B23->TabIndex = 22;
			// 
			// B31
			// 
			this->B31->Location = System::Drawing::Point(33, 112);
			this->B31->Margin = System::Windows::Forms::Padding(4);
			this->B31->Name = L"B31";
			this->B31->Size = System::Drawing::Size(56, 22);
			this->B31->TabIndex = 24;
			// 
			// B24
			// 
			this->B24->Location = System::Drawing::Point(229, 80);
			this->B24->Margin = System::Windows::Forms::Padding(4);
			this->B24->Name = L"B24";
			this->B24->Size = System::Drawing::Size(56, 22);
			this->B24->TabIndex = 23;
			// 
			// groupBoxMB
			// 
			this->groupBoxMB->Controls->Add(this->radioButtonK4_B);
			this->groupBoxMB->Controls->Add(this->radioButtonK3_B);
			this->groupBoxMB->Controls->Add(this->label6);
			this->groupBoxMB->Controls->Add(this->radioButtonK2_B);
			this->groupBoxMB->Location = System::Drawing::Point(856, 54);
			this->groupBoxMB->Margin = System::Windows::Forms::Padding(4);
			this->groupBoxMB->Name = L"groupBoxMB";
			this->groupBoxMB->Padding = System::Windows::Forms::Padding(4);
			this->groupBoxMB->Size = System::Drawing::Size(119, 137);
			this->groupBoxMB->TabIndex = 12;
			this->groupBoxMB->TabStop = false;
			this->groupBoxMB->Text = L"Macierz B";
			// 
			// radioButtonK4_B
			// 
			this->radioButtonK4_B->AutoSize = true;
			this->radioButtonK4_B->Enabled = false;
			this->radioButtonK4_B->Location = System::Drawing::Point(12, 108);
			this->radioButtonK4_B->Margin = System::Windows::Forms::Padding(4);
			this->radioButtonK4_B->Name = L"radioButtonK4_B";
			this->radioButtonK4_B->Size = System::Drawing::Size(37, 21);
			this->radioButtonK4_B->TabIndex = 3;
			this->radioButtonK4_B->TabStop = true;
			this->radioButtonK4_B->Text = L"4";
			this->radioButtonK4_B->UseVisualStyleBackColor = true;
			// 
			// radioButtonK3_B
			// 
			this->radioButtonK3_B->AutoSize = true;
			this->radioButtonK3_B->Enabled = false;
			this->radioButtonK3_B->Location = System::Drawing::Point(12, 80);
			this->radioButtonK3_B->Margin = System::Windows::Forms::Padding(4);
			this->radioButtonK3_B->Name = L"radioButtonK3_B";
			this->radioButtonK3_B->Size = System::Drawing::Size(37, 21);
			this->radioButtonK3_B->TabIndex = 2;
			this->radioButtonK3_B->TabStop = true;
			this->radioButtonK3_B->Text = L"3";
			this->radioButtonK3_B->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(8, 32);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(66, 17);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Kolumny:";
			// 
			// radioButtonK2_B
			// 
			this->radioButtonK2_B->AutoSize = true;
			this->radioButtonK2_B->Enabled = false;
			this->radioButtonK2_B->Location = System::Drawing::Point(12, 52);
			this->radioButtonK2_B->Margin = System::Windows::Forms::Padding(4);
			this->radioButtonK2_B->Name = L"radioButtonK2_B";
			this->radioButtonK2_B->Size = System::Drawing::Size(37, 21);
			this->radioButtonK2_B->TabIndex = 0;
			this->radioButtonK2_B->TabStop = true;
			this->radioButtonK2_B->Text = L"2";
			this->radioButtonK2_B->UseVisualStyleBackColor = true;
			// 
			// groupBoxA
			// 
			this->groupBoxA->Controls->Add(this->A44);
			this->groupBoxA->Controls->Add(this->A12);
			this->groupBoxA->Controls->Add(this->A43);
			this->groupBoxA->Controls->Add(this->A11);
			this->groupBoxA->Controls->Add(this->A42);
			this->groupBoxA->Controls->Add(this->A13);
			this->groupBoxA->Controls->Add(this->A41);
			this->groupBoxA->Controls->Add(this->A14);
			this->groupBoxA->Controls->Add(this->A34);
			this->groupBoxA->Controls->Add(this->A21);
			this->groupBoxA->Controls->Add(this->A33);
			this->groupBoxA->Controls->Add(this->A22);
			this->groupBoxA->Controls->Add(this->A32);
			this->groupBoxA->Controls->Add(this->A23);
			this->groupBoxA->Controls->Add(this->A31);
			this->groupBoxA->Controls->Add(this->A24);
			this->groupBoxA->Location = System::Drawing::Point(140, 54);
			this->groupBoxA->Margin = System::Windows::Forms::Padding(4);
			this->groupBoxA->Name = L"groupBoxA";
			this->groupBoxA->Padding = System::Windows::Forms::Padding(4);
			this->groupBoxA->Size = System::Drawing::Size(324, 213);
			this->groupBoxA->TabIndex = 12;
			this->groupBoxA->TabStop = false;
			// 
			// A44
			// 
			this->A44->Enabled = false;
			this->A44->Location = System::Drawing::Point(229, 144);
			this->A44->Margin = System::Windows::Forms::Padding(4);
			this->A44->Name = L"A44";
			this->A44->Size = System::Drawing::Size(56, 22);
			this->A44->TabIndex = 31;
			// 
			// A12
			// 
			this->A12->Enabled = false;
			this->A12->Location = System::Drawing::Point(99, 48);
			this->A12->Margin = System::Windows::Forms::Padding(4);
			this->A12->Name = L"A12";
			this->A12->Size = System::Drawing::Size(56, 22);
			this->A12->TabIndex = 17;
			// 
			// A43
			// 
			this->A43->Enabled = false;
			this->A43->Location = System::Drawing::Point(164, 144);
			this->A43->Margin = System::Windows::Forms::Padding(4);
			this->A43->Name = L"A43";
			this->A43->Size = System::Drawing::Size(56, 22);
			this->A43->TabIndex = 30;
			// 
			// A11
			// 
			this->A11->Enabled = false;
			this->A11->Location = System::Drawing::Point(33, 48);
			this->A11->Margin = System::Windows::Forms::Padding(4);
			this->A11->Name = L"A11";
			this->A11->Size = System::Drawing::Size(56, 22);
			this->A11->TabIndex = 16;
			// 
			// A42
			// 
			this->A42->Enabled = false;
			this->A42->Location = System::Drawing::Point(99, 144);
			this->A42->Margin = System::Windows::Forms::Padding(4);
			this->A42->Name = L"A42";
			this->A42->Size = System::Drawing::Size(56, 22);
			this->A42->TabIndex = 29;
			// 
			// A13
			// 
			this->A13->Enabled = false;
			this->A13->Location = System::Drawing::Point(164, 48);
			this->A13->Margin = System::Windows::Forms::Padding(4);
			this->A13->Name = L"A13";
			this->A13->Size = System::Drawing::Size(56, 22);
			this->A13->TabIndex = 18;
			// 
			// A41
			// 
			this->A41->Enabled = false;
			this->A41->Location = System::Drawing::Point(33, 144);
			this->A41->Margin = System::Windows::Forms::Padding(4);
			this->A41->Name = L"A41";
			this->A41->Size = System::Drawing::Size(56, 22);
			this->A41->TabIndex = 28;
			// 
			// A14
			// 
			this->A14->Enabled = false;
			this->A14->Location = System::Drawing::Point(229, 48);
			this->A14->Margin = System::Windows::Forms::Padding(4);
			this->A14->Name = L"A14";
			this->A14->Size = System::Drawing::Size(56, 22);
			this->A14->TabIndex = 19;
			// 
			// A34
			// 
			this->A34->Enabled = false;
			this->A34->Location = System::Drawing::Point(229, 112);
			this->A34->Margin = System::Windows::Forms::Padding(4);
			this->A34->Name = L"A34";
			this->A34->Size = System::Drawing::Size(56, 22);
			this->A34->TabIndex = 27;
			// 
			// A21
			// 
			this->A21->Enabled = false;
			this->A21->Location = System::Drawing::Point(33, 80);
			this->A21->Margin = System::Windows::Forms::Padding(4);
			this->A21->Name = L"A21";
			this->A21->Size = System::Drawing::Size(56, 22);
			this->A21->TabIndex = 20;
			// 
			// A33
			// 
			this->A33->Enabled = false;
			this->A33->Location = System::Drawing::Point(164, 112);
			this->A33->Margin = System::Windows::Forms::Padding(4);
			this->A33->Name = L"A33";
			this->A33->Size = System::Drawing::Size(56, 22);
			this->A33->TabIndex = 26;
			// 
			// A22
			// 
			this->A22->Enabled = false;
			this->A22->Location = System::Drawing::Point(99, 80);
			this->A22->Margin = System::Windows::Forms::Padding(4);
			this->A22->Name = L"A22";
			this->A22->Size = System::Drawing::Size(56, 22);
			this->A22->TabIndex = 21;
			// 
			// A32
			// 
			this->A32->Enabled = false;
			this->A32->Location = System::Drawing::Point(99, 112);
			this->A32->Margin = System::Windows::Forms::Padding(4);
			this->A32->Name = L"A32";
			this->A32->Size = System::Drawing::Size(56, 22);
			this->A32->TabIndex = 25;
			// 
			// A23
			// 
			this->A23->Enabled = false;
			this->A23->Location = System::Drawing::Point(164, 80);
			this->A23->Margin = System::Windows::Forms::Padding(4);
			this->A23->Name = L"A23";
			this->A23->Size = System::Drawing::Size(56, 22);
			this->A23->TabIndex = 22;
			// 
			// A31
			// 
			this->A31->Enabled = false;
			this->A31->Location = System::Drawing::Point(33, 112);
			this->A31->Margin = System::Windows::Forms::Padding(4);
			this->A31->Name = L"A31";
			this->A31->Size = System::Drawing::Size(56, 22);
			this->A31->TabIndex = 24;
			// 
			// A24
			// 
			this->A24->Enabled = false;
			this->A24->Location = System::Drawing::Point(229, 80);
			this->A24->Margin = System::Windows::Forms::Padding(4);
			this->A24->Name = L"A24";
			this->A24->Size = System::Drawing::Size(56, 22);
			this->A24->TabIndex = 23;
			// 
			// groupBoxMA2
			// 
			this->groupBoxMA2->Controls->Add(this->radioButtonW4_A);
			this->groupBoxMA2->Controls->Add(this->radioButtonW3_A);
			this->groupBoxMA2->Controls->Add(this->radioButtonW2_A);
			this->groupBoxMA2->Controls->Add(this->label2);
			this->groupBoxMA2->Location = System::Drawing::Point(16, 191);
			this->groupBoxMA2->Margin = System::Windows::Forms::Padding(4);
			this->groupBoxMA2->Name = L"groupBoxMA2";
			this->groupBoxMA2->Padding = System::Windows::Forms::Padding(4);
			this->groupBoxMA2->Size = System::Drawing::Size(116, 122);
			this->groupBoxMA2->TabIndex = 4;
			this->groupBoxMA2->TabStop = false;
			// 
			// radioButtonW4_A
			// 
			this->radioButtonW4_A->AutoSize = true;
			this->radioButtonW4_A->Enabled = false;
			this->radioButtonW4_A->Location = System::Drawing::Point(12, 92);
			this->radioButtonW4_A->Margin = System::Windows::Forms::Padding(4);
			this->radioButtonW4_A->Name = L"radioButtonW4_A";
			this->radioButtonW4_A->Size = System::Drawing::Size(37, 21);
			this->radioButtonW4_A->TabIndex = 11;
			this->radioButtonW4_A->TabStop = true;
			this->radioButtonW4_A->Text = L"4";
			this->radioButtonW4_A->UseVisualStyleBackColor = true;
			this->radioButtonW4_A->CheckedChanged += gcnew System::EventHandler(this, &Macierze::radioButtonW4_A_CheckedChanged);
			// 
			// radioButtonW3_A
			// 
			this->radioButtonW3_A->AutoSize = true;
			this->radioButtonW3_A->Enabled = false;
			this->radioButtonW3_A->Location = System::Drawing::Point(12, 64);
			this->radioButtonW3_A->Margin = System::Windows::Forms::Padding(4);
			this->radioButtonW3_A->Name = L"radioButtonW3_A";
			this->radioButtonW3_A->Size = System::Drawing::Size(37, 21);
			this->radioButtonW3_A->TabIndex = 10;
			this->radioButtonW3_A->TabStop = true;
			this->radioButtonW3_A->Text = L"3";
			this->radioButtonW3_A->UseVisualStyleBackColor = true;
			this->radioButtonW3_A->CheckedChanged += gcnew System::EventHandler(this, &Macierze::radioButtonW3_A_CheckedChanged);
			// 
			// radioButtonW2_A
			// 
			this->radioButtonW2_A->AutoSize = true;
			this->radioButtonW2_A->Enabled = false;
			this->radioButtonW2_A->Location = System::Drawing::Point(12, 36);
			this->radioButtonW2_A->Margin = System::Windows::Forms::Padding(4);
			this->radioButtonW2_A->Name = L"radioButtonW2_A";
			this->radioButtonW2_A->Size = System::Drawing::Size(37, 21);
			this->radioButtonW2_A->TabIndex = 9;
			this->radioButtonW2_A->TabStop = true;
			this->radioButtonW2_A->Text = L"2";
			this->radioButtonW2_A->UseVisualStyleBackColor = true;
			this->radioButtonW2_A->CheckedChanged += gcnew System::EventHandler(this, &Macierze::radioButtonW2_A_CheckedChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(8, 16);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 17);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Wiersze:";
			// 
			// groupBoxMB2
			// 
			this->groupBoxMB2->Controls->Add(this->radioButtonW4_B);
			this->groupBoxMB2->Controls->Add(this->radioButtonW3_B);
			this->groupBoxMB2->Controls->Add(this->radioButtonW2_B);
			this->groupBoxMB2->Controls->Add(this->label5);
			this->groupBoxMB2->Location = System::Drawing::Point(856, 191);
			this->groupBoxMB2->Margin = System::Windows::Forms::Padding(4);
			this->groupBoxMB2->Name = L"groupBoxMB2";
			this->groupBoxMB2->Padding = System::Windows::Forms::Padding(4);
			this->groupBoxMB2->Size = System::Drawing::Size(119, 122);
			this->groupBoxMB2->TabIndex = 13;
			this->groupBoxMB2->TabStop = false;
			// 
			// radioButtonW4_B
			// 
			this->radioButtonW4_B->AutoSize = true;
			this->radioButtonW4_B->Enabled = false;
			this->radioButtonW4_B->Location = System::Drawing::Point(12, 92);
			this->radioButtonW4_B->Margin = System::Windows::Forms::Padding(4);
			this->radioButtonW4_B->Name = L"radioButtonW4_B";
			this->radioButtonW4_B->Size = System::Drawing::Size(37, 21);
			this->radioButtonW4_B->TabIndex = 11;
			this->radioButtonW4_B->TabStop = true;
			this->radioButtonW4_B->Text = L"4";
			this->radioButtonW4_B->UseVisualStyleBackColor = true;
			// 
			// radioButtonW3_B
			// 
			this->radioButtonW3_B->AutoSize = true;
			this->radioButtonW3_B->Enabled = false;
			this->radioButtonW3_B->Location = System::Drawing::Point(12, 64);
			this->radioButtonW3_B->Margin = System::Windows::Forms::Padding(4);
			this->radioButtonW3_B->Name = L"radioButtonW3_B";
			this->radioButtonW3_B->Size = System::Drawing::Size(37, 21);
			this->radioButtonW3_B->TabIndex = 10;
			this->radioButtonW3_B->TabStop = true;
			this->radioButtonW3_B->Text = L"3";
			this->radioButtonW3_B->UseVisualStyleBackColor = true;
			// 
			// radioButtonW2_B
			// 
			this->radioButtonW2_B->AutoSize = true;
			this->radioButtonW2_B->Enabled = false;
			this->radioButtonW2_B->Location = System::Drawing::Point(12, 36);
			this->radioButtonW2_B->Margin = System::Windows::Forms::Padding(4);
			this->radioButtonW2_B->Name = L"radioButtonW2_B";
			this->radioButtonW2_B->Size = System::Drawing::Size(37, 21);
			this->radioButtonW2_B->TabIndex = 9;
			this->radioButtonW2_B->TabStop = true;
			this->radioButtonW2_B->Text = L"2";
			this->radioButtonW2_B->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(8, 16);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 17);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Wiersze:";
			// 
			// groupBox1
			// 
			this->groupBox1->Location = System::Drawing::Point(413, 324);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(396, 215);
			this->groupBox1->TabIndex = 14;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Wynik";
			// 
			// Macierze
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(990, 551);
			this->ControlBox = false;
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBoxMB2);
			this->Controls->Add(this->groupBoxMA2);
			this->Controls->Add(this->groupBoxA);
			this->Controls->Add(this->groupBoxMB);
			this->Controls->Add(this->groupBoxB);
			this->Controls->Add(this->groupBoxDzia³ania);
			this->Controls->Add(this->groupBoxMA);
			this->Controls->Add(this->button2);
			this->Margin = System::Windows::Forms::Padding(4);
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
		unlockRadio(radioButtonDodawanie);
		groupBoxB->Enabled = true;
	}
	private: System::Void radioButtonOdejmowanie_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		unlockRadio(radioButtonOdejmowanie);
		groupBoxB->Enabled = true;
	}
	private: System::Void radioButtonMnozenie_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		unlockRadio(radioButtonMnozenie);
		groupBoxB->Enabled = true;
	}
	private: System::Void radioButtonPotegowanie_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		unlockRadio(radioButtonPotegowanie);
		groupBoxB->Enabled = true;
	}
	private: System::Void radioButtonTransponowanie_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		unlockRadio(radioButtonTransponowanie);
		groupBoxB->Enabled = false;
	}
	private: System::Void radioButtonK2_A_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				A[i][j]->Enabled = true;
			}
		}
		for (int i = 0; i < 4; i++)
		{
			for (int j = 2; j < 4; j++)
			{
				A[i][j]->Enabled = false;
			}
		}
		if (radioButtonW2_A->Checked)
		{
			for (int i = 2; i < 4; i++)
			{
				A[i][0]->Enabled = false;
				A[i][1]->Enabled = false;
			}
		}
		else if (radioButtonW3_A->Checked)
		{
			for (int i = 3; i < 4; i++)
			{
				A[i][0]->Enabled = false;
				A[i][1]->Enabled = false;
				A[i][2]->Enabled = false;
			}
		}
	}
	private: System::Void radioButtonK3_A_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				A[i][j]->Enabled = true;
			}
		}
		for (int i = 0; i < 4; i++)
		{
			for (int j = 3; j < 4; j++)
			{
				A[i][j]->Enabled = false;
			}
		}
	}
	private: System::Void radioButtonK4_A_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				A[i][j]->Enabled = true;
			}
		}
	}
	private: System::Void radioButtonW2_A_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		
		if (radioButtonK2_A->Checked)
		{
			for (int i = 2; i < 4; i++)
			{
				A[0][i]->Enabled = false;
				A[1][i]->Enabled = false;
			}
		}
		else if (radioButtonK3_A->Checked)
		{
			for (int i = 3; i < 4; i++)
			{
				A[i][0]->Enabled = false;
				A[i][1]->Enabled = false;
				A[i][2]->Enabled = false;
			}
		}

/*		for (int i = 0; i < 4; i++)
		{
			for (int j = 2; j < 4; j++)
			{
				A[i][j]->Enabled = false;
			}
		}*/
	}
	private: System::Void radioButtonW3_A_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
	}
	private: System::Void radioButtonW4_A_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
	}
};
}
