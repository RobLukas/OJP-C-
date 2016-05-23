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

		void unlockRadioA(RadioButton^);
		void unlockRadioB(RadioButton^);
		void MatrixA();
		void MatrixB();
		void MatrixC();
		void MatrixA(int, int);
		void MatrixB(int, int);
		void MatrixC(int, int);
		void MatrixDodaw();
		void Reset(array<array<TextBox^>^> ^ A);
		void MatrixOdej();
		void ResetOkna();
		void MatrixMnoz();
		void ShortMatrixMulti(array<RadioButton^, 1> ^, array<RadioButton^, 1> ^);
		void MatrixTrans();

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


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		array<RadioButton^, 1> ^ RadioA = gcnew array<RadioButton^, 1>(6);
		array<RadioButton^, 1> ^ RadioB = gcnew array<RadioButton^, 1>(6);
		array<array<TextBox^>^> ^ A = gcnew array<array<TextBox^>^>(4);
		array<array<TextBox^>^> ^ B = gcnew array<array<TextBox^>^>(4);
		array<array<TextBox^>^> ^ C = gcnew array<array<TextBox^>^>(4);
		bool rb1 = false;
		bool rb2 = false;
		bool rb3 = false;
		bool rb4 = false;
		bool rb5 = false;
		bool rb6 = false;
private: System::Windows::Forms::Button^  buttonA;

private: System::Windows::Forms::Button^  buttonB;

private: System::Windows::Forms::Label^  LabelAW;
private: System::Windows::Forms::Label^  labelZnak;
private: System::Windows::Forms::GroupBox^  groupBox2;
private: System::Windows::Forms::TextBox^  C44;
private: System::Windows::Forms::TextBox^  C12;
private: System::Windows::Forms::TextBox^  C43;
private: System::Windows::Forms::TextBox^  C11;
private: System::Windows::Forms::TextBox^  C42;
private: System::Windows::Forms::TextBox^  C13;
private: System::Windows::Forms::TextBox^  C41;
private: System::Windows::Forms::TextBox^  C14;
private: System::Windows::Forms::TextBox^  C34;
private: System::Windows::Forms::TextBox^  C21;
private: System::Windows::Forms::TextBox^  C33;
private: System::Windows::Forms::TextBox^  C22;
private: System::Windows::Forms::TextBox^  C32;
private: System::Windows::Forms::TextBox^  C23;
private: System::Windows::Forms::TextBox^  C31;
private: System::Windows::Forms::TextBox^  C24;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::ToolTip^  toolTip1;


private: System::ComponentModel::IContainer^  components;


		 /// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Macierze::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBoxMA = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonK4_A = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonK3_A = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioButtonK2_A = (gcnew System::Windows::Forms::RadioButton());
			this->groupBoxDzia³ania = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonTransponowanie = (gcnew System::Windows::Forms::RadioButton());
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
			this->buttonA = (gcnew System::Windows::Forms::Button());
			this->buttonB = (gcnew System::Windows::Forms::Button());
			this->LabelAW = (gcnew System::Windows::Forms::Label());
			this->labelZnak = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->C44 = (gcnew System::Windows::Forms::TextBox());
			this->C12 = (gcnew System::Windows::Forms::TextBox());
			this->C43 = (gcnew System::Windows::Forms::TextBox());
			this->C11 = (gcnew System::Windows::Forms::TextBox());
			this->C42 = (gcnew System::Windows::Forms::TextBox());
			this->C13 = (gcnew System::Windows::Forms::TextBox());
			this->C41 = (gcnew System::Windows::Forms::TextBox());
			this->C14 = (gcnew System::Windows::Forms::TextBox());
			this->C34 = (gcnew System::Windows::Forms::TextBox());
			this->C21 = (gcnew System::Windows::Forms::TextBox());
			this->C33 = (gcnew System::Windows::Forms::TextBox());
			this->C22 = (gcnew System::Windows::Forms::TextBox());
			this->C32 = (gcnew System::Windows::Forms::TextBox());
			this->C23 = (gcnew System::Windows::Forms::TextBox());
			this->C31 = (gcnew System::Windows::Forms::TextBox());
			this->C24 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->groupBoxMA->SuspendLayout();
			this->groupBoxDzia³ania->SuspendLayout();
			this->groupBoxB->SuspendLayout();
			this->groupBoxMB->SuspendLayout();
			this->groupBoxA->SuspendLayout();
			this->groupBoxMA2->SuspendLayout();
			this->groupBoxMB2->SuspendLayout();
			this->groupBox2->SuspendLayout();
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
			this->radioButtonK4_A->CheckedChanged += gcnew System::EventHandler(this, &Macierze::radioButtonK4_A_CheckedChanged);
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
			this->radioButtonK3_A->CheckedChanged += gcnew System::EventHandler(this, &Macierze::radioButtonK3_A_CheckedChanged);
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
			this->radioButtonK2_A->CheckedChanged += gcnew System::EventHandler(this, &Macierze::radioButtonK2_A_CheckedChanged);
			// 
			// groupBoxDzia³ania
			// 
			this->groupBoxDzia³ania->Controls->Add(this->radioButtonTransponowanie);
			this->groupBoxDzia³ania->Controls->Add(this->radioButtonMnozenie);
			this->groupBoxDzia³ania->Controls->Add(this->radioButtonOdejmowanie);
			this->groupBoxDzia³ania->Controls->Add(this->radioButtonDodawanie);
			this->groupBoxDzia³ania->Location = System::Drawing::Point(14, 275);
			this->groupBoxDzia³ania->Name = L"groupBoxDzia³ania";
			this->groupBoxDzia³ania->Size = System::Drawing::Size(265, 89);
			this->groupBoxDzia³ania->TabIndex = 9;
			this->groupBoxDzia³ania->TabStop = false;
			this->groupBoxDzia³ania->Text = L"Dzia³ania:";
			this->toolTip1->SetToolTip(this->groupBoxDzia³ania, L"ZatwierŸ macierz aby przejœæ do ustawiania parametrów drugiej macierzy");
			// 
			// radioButtonTransponowanie
			// 
			this->radioButtonTransponowanie->AutoSize = true;
			this->radioButtonTransponowanie->Location = System::Drawing::Point(101, 53);
			this->radioButtonTransponowanie->Name = L"radioButtonTransponowanie";
			this->radioButtonTransponowanie->Size = System::Drawing::Size(163, 17);
			this->radioButtonTransponowanie->TabIndex = 4;
			this->radioButtonTransponowanie->TabStop = true;
			this->radioButtonTransponowanie->Text = L"Transponowanie prostok¹tne";
			this->radioButtonTransponowanie->UseVisualStyleBackColor = true;
			this->radioButtonTransponowanie->CheckedChanged += gcnew System::EventHandler(this, &Macierze::radioButtonTransponowanie_CheckedChanged);
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
			this->radioButtonMnozenie->CheckedChanged += gcnew System::EventHandler(this, &Macierze::radioButtonMnozenie_CheckedChanged);
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
			this->radioButtonOdejmowanie->CheckedChanged += gcnew System::EventHandler(this, &Macierze::radioButtonOdejmowanie_CheckedChanged);
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
			this->groupBoxB->Location = System::Drawing::Point(385, 45);
			this->groupBoxB->Name = L"groupBoxB";
			this->groupBoxB->Size = System::Drawing::Size(243, 173);
			this->groupBoxB->TabIndex = 11;
			this->groupBoxB->TabStop = false;
			// 
			// B44
			// 
			this->B44->Enabled = false;
			this->B44->Location = System::Drawing::Point(172, 117);
			this->B44->Name = L"B44";
			this->B44->Size = System::Drawing::Size(43, 20);
			this->B44->TabIndex = 31;
			this->B44->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// B12
			// 
			this->B12->Enabled = false;
			this->B12->Location = System::Drawing::Point(74, 39);
			this->B12->Name = L"B12";
			this->B12->Size = System::Drawing::Size(43, 20);
			this->B12->TabIndex = 17;
			this->B12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// B43
			// 
			this->B43->Enabled = false;
			this->B43->Location = System::Drawing::Point(123, 117);
			this->B43->Name = L"B43";
			this->B43->Size = System::Drawing::Size(43, 20);
			this->B43->TabIndex = 30;
			this->B43->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// B11
			// 
			this->B11->Enabled = false;
			this->B11->Location = System::Drawing::Point(25, 39);
			this->B11->Name = L"B11";
			this->B11->Size = System::Drawing::Size(43, 20);
			this->B11->TabIndex = 16;
			this->B11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// B42
			// 
			this->B42->Enabled = false;
			this->B42->Location = System::Drawing::Point(74, 117);
			this->B42->Name = L"B42";
			this->B42->Size = System::Drawing::Size(43, 20);
			this->B42->TabIndex = 29;
			this->B42->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// B13
			// 
			this->B13->Enabled = false;
			this->B13->Location = System::Drawing::Point(123, 39);
			this->B13->Name = L"B13";
			this->B13->Size = System::Drawing::Size(43, 20);
			this->B13->TabIndex = 18;
			this->B13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// B41
			// 
			this->B41->Enabled = false;
			this->B41->Location = System::Drawing::Point(25, 117);
			this->B41->Name = L"B41";
			this->B41->Size = System::Drawing::Size(43, 20);
			this->B41->TabIndex = 28;
			this->B41->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// B14
			// 
			this->B14->Enabled = false;
			this->B14->Location = System::Drawing::Point(172, 39);
			this->B14->Name = L"B14";
			this->B14->Size = System::Drawing::Size(43, 20);
			this->B14->TabIndex = 19;
			this->B14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// B34
			// 
			this->B34->Enabled = false;
			this->B34->Location = System::Drawing::Point(172, 91);
			this->B34->Name = L"B34";
			this->B34->Size = System::Drawing::Size(43, 20);
			this->B34->TabIndex = 27;
			this->B34->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// B21
			// 
			this->B21->Enabled = false;
			this->B21->Location = System::Drawing::Point(25, 65);
			this->B21->Name = L"B21";
			this->B21->Size = System::Drawing::Size(43, 20);
			this->B21->TabIndex = 20;
			this->B21->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// B33
			// 
			this->B33->Enabled = false;
			this->B33->Location = System::Drawing::Point(123, 91);
			this->B33->Name = L"B33";
			this->B33->Size = System::Drawing::Size(43, 20);
			this->B33->TabIndex = 26;
			this->B33->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// B22
			// 
			this->B22->Enabled = false;
			this->B22->Location = System::Drawing::Point(74, 65);
			this->B22->Name = L"B22";
			this->B22->Size = System::Drawing::Size(43, 20);
			this->B22->TabIndex = 21;
			this->B22->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// B32
			// 
			this->B32->Enabled = false;
			this->B32->Location = System::Drawing::Point(74, 91);
			this->B32->Name = L"B32";
			this->B32->Size = System::Drawing::Size(43, 20);
			this->B32->TabIndex = 25;
			this->B32->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// B23
			// 
			this->B23->Enabled = false;
			this->B23->Location = System::Drawing::Point(123, 65);
			this->B23->Name = L"B23";
			this->B23->Size = System::Drawing::Size(43, 20);
			this->B23->TabIndex = 22;
			this->B23->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// B31
			// 
			this->B31->Enabled = false;
			this->B31->Location = System::Drawing::Point(25, 91);
			this->B31->Name = L"B31";
			this->B31->Size = System::Drawing::Size(43, 20);
			this->B31->TabIndex = 24;
			this->B31->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// B24
			// 
			this->B24->Enabled = false;
			this->B24->Location = System::Drawing::Point(172, 65);
			this->B24->Name = L"B24";
			this->B24->Size = System::Drawing::Size(43, 20);
			this->B24->TabIndex = 23;
			this->B24->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// groupBoxMB
			// 
			this->groupBoxMB->Controls->Add(this->radioButtonK4_B);
			this->groupBoxMB->Controls->Add(this->radioButtonK3_B);
			this->groupBoxMB->Controls->Add(this->label6);
			this->groupBoxMB->Controls->Add(this->radioButtonK2_B);
			this->groupBoxMB->Location = System::Drawing::Point(634, 44);
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
			this->groupBoxA->Location = System::Drawing::Point(105, 44);
			this->groupBoxA->Name = L"groupBoxA";
			this->groupBoxA->Size = System::Drawing::Size(243, 173);
			this->groupBoxA->TabIndex = 12;
			this->groupBoxA->TabStop = false;
			// 
			// A44
			// 
			this->A44->Enabled = false;
			this->A44->Location = System::Drawing::Point(172, 117);
			this->A44->Name = L"A44";
			this->A44->Size = System::Drawing::Size(43, 20);
			this->A44->TabIndex = 31;
			this->A44->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// A12
			// 
			this->A12->Enabled = false;
			this->A12->Location = System::Drawing::Point(74, 39);
			this->A12->Name = L"A12";
			this->A12->Size = System::Drawing::Size(43, 20);
			this->A12->TabIndex = 17;
			this->A12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// A43
			// 
			this->A43->Enabled = false;
			this->A43->Location = System::Drawing::Point(123, 117);
			this->A43->Name = L"A43";
			this->A43->Size = System::Drawing::Size(43, 20);
			this->A43->TabIndex = 30;
			this->A43->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// A11
			// 
			this->A11->Enabled = false;
			this->A11->Location = System::Drawing::Point(25, 39);
			this->A11->Name = L"A11";
			this->A11->Size = System::Drawing::Size(43, 20);
			this->A11->TabIndex = 16;
			this->A11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// A42
			// 
			this->A42->Enabled = false;
			this->A42->Location = System::Drawing::Point(74, 117);
			this->A42->Name = L"A42";
			this->A42->Size = System::Drawing::Size(43, 20);
			this->A42->TabIndex = 29;
			this->A42->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// A13
			// 
			this->A13->Enabled = false;
			this->A13->Location = System::Drawing::Point(123, 39);
			this->A13->Name = L"A13";
			this->A13->Size = System::Drawing::Size(43, 20);
			this->A13->TabIndex = 18;
			this->A13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// A41
			// 
			this->A41->Enabled = false;
			this->A41->Location = System::Drawing::Point(25, 117);
			this->A41->Name = L"A41";
			this->A41->Size = System::Drawing::Size(43, 20);
			this->A41->TabIndex = 28;
			this->A41->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// A14
			// 
			this->A14->Enabled = false;
			this->A14->Location = System::Drawing::Point(172, 39);
			this->A14->Name = L"A14";
			this->A14->Size = System::Drawing::Size(43, 20);
			this->A14->TabIndex = 19;
			this->A14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// A34
			// 
			this->A34->Enabled = false;
			this->A34->Location = System::Drawing::Point(172, 91);
			this->A34->Name = L"A34";
			this->A34->Size = System::Drawing::Size(43, 20);
			this->A34->TabIndex = 27;
			this->A34->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// A21
			// 
			this->A21->Enabled = false;
			this->A21->Location = System::Drawing::Point(25, 65);
			this->A21->Name = L"A21";
			this->A21->Size = System::Drawing::Size(43, 20);
			this->A21->TabIndex = 20;
			this->A21->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// A33
			// 
			this->A33->Enabled = false;
			this->A33->Location = System::Drawing::Point(123, 91);
			this->A33->Name = L"A33";
			this->A33->Size = System::Drawing::Size(43, 20);
			this->A33->TabIndex = 26;
			this->A33->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// A22
			// 
			this->A22->Enabled = false;
			this->A22->Location = System::Drawing::Point(74, 65);
			this->A22->Name = L"A22";
			this->A22->Size = System::Drawing::Size(43, 20);
			this->A22->TabIndex = 21;
			this->A22->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// A32
			// 
			this->A32->Enabled = false;
			this->A32->Location = System::Drawing::Point(74, 91);
			this->A32->Name = L"A32";
			this->A32->Size = System::Drawing::Size(43, 20);
			this->A32->TabIndex = 25;
			this->A32->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// A23
			// 
			this->A23->Enabled = false;
			this->A23->Location = System::Drawing::Point(123, 65);
			this->A23->Name = L"A23";
			this->A23->Size = System::Drawing::Size(43, 20);
			this->A23->TabIndex = 22;
			this->A23->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// A31
			// 
			this->A31->Enabled = false;
			this->A31->Location = System::Drawing::Point(25, 91);
			this->A31->Name = L"A31";
			this->A31->Size = System::Drawing::Size(43, 20);
			this->A31->TabIndex = 24;
			this->A31->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// A24
			// 
			this->A24->Enabled = false;
			this->A24->Location = System::Drawing::Point(172, 65);
			this->A24->Name = L"A24";
			this->A24->Size = System::Drawing::Size(43, 20);
			this->A24->TabIndex = 23;
			this->A24->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
			this->radioButtonW4_A->CheckedChanged += gcnew System::EventHandler(this, &Macierze::radioButtonW4_A_CheckedChanged);
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
			this->radioButtonW3_A->CheckedChanged += gcnew System::EventHandler(this, &Macierze::radioButtonW3_A_CheckedChanged);
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
			this->radioButtonW2_A->CheckedChanged += gcnew System::EventHandler(this, &Macierze::radioButtonW2_A_CheckedChanged);
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
			this->groupBoxMB2->Location = System::Drawing::Point(634, 155);
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
			// buttonA
			// 
			this->buttonA->Enabled = false;
			this->buttonA->Location = System::Drawing::Point(105, 224);
			this->buttonA->Name = L"buttonA";
			this->buttonA->Size = System::Drawing::Size(85, 45);
			this->buttonA->TabIndex = 15;
			this->buttonA->Text = L"ZatwierdŸ okno";
			this->buttonA->UseVisualStyleBackColor = true;
			this->buttonA->Click += gcnew System::EventHandler(this, &Macierze::button1_Click);
			// 
			// buttonB
			// 
			this->buttonB->Enabled = false;
			this->buttonB->Location = System::Drawing::Point(546, 224);
			this->buttonB->Name = L"buttonB";
			this->buttonB->Size = System::Drawing::Size(82, 45);
			this->buttonB->TabIndex = 16;
			this->buttonB->Text = L"ZatwierdŸ okno";
			this->buttonB->UseVisualStyleBackColor = true;
			this->buttonB->Click += gcnew System::EventHandler(this, &Macierze::button3_Click);
			// 
			// LabelAW
			// 
			this->LabelAW->AutoSize = true;
			this->LabelAW->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->LabelAW->Location = System::Drawing::Point(17, 399);
			this->LabelAW->Name = L"LabelAW";
			this->LabelAW->Size = System::Drawing::Size(0, 18);
			this->LabelAW->TabIndex = 17;
			// 
			// labelZnak
			// 
			this->labelZnak->AutoSize = true;
			this->labelZnak->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelZnak->Location = System::Drawing::Point(354, 124);
			this->labelZnak->Name = L"labelZnak";
			this->labelZnak->Size = System::Drawing::Size(0, 25);
			this->labelZnak->TabIndex = 18;
			this->labelZnak->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->C44);
			this->groupBox2->Controls->Add(this->C12);
			this->groupBox2->Controls->Add(this->C43);
			this->groupBox2->Controls->Add(this->C11);
			this->groupBox2->Controls->Add(this->C42);
			this->groupBox2->Controls->Add(this->C13);
			this->groupBox2->Controls->Add(this->C41);
			this->groupBox2->Controls->Add(this->C14);
			this->groupBox2->Controls->Add(this->C34);
			this->groupBox2->Controls->Add(this->C21);
			this->groupBox2->Controls->Add(this->C33);
			this->groupBox2->Controls->Add(this->C22);
			this->groupBox2->Controls->Add(this->C32);
			this->groupBox2->Controls->Add(this->C23);
			this->groupBox2->Controls->Add(this->C31);
			this->groupBox2->Controls->Add(this->C24);
			this->groupBox2->Location = System::Drawing::Point(297, 263);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(243, 173);
			this->groupBox2->TabIndex = 32;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Wynik";
			// 
			// C44
			// 
			this->C44->Enabled = false;
			this->C44->Location = System::Drawing::Point(172, 117);
			this->C44->Name = L"C44";
			this->C44->ReadOnly = true;
			this->C44->Size = System::Drawing::Size(43, 20);
			this->C44->TabIndex = 31;
			this->C44->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// C12
			// 
			this->C12->Enabled = false;
			this->C12->Location = System::Drawing::Point(74, 39);
			this->C12->Name = L"C12";
			this->C12->ReadOnly = true;
			this->C12->Size = System::Drawing::Size(43, 20);
			this->C12->TabIndex = 17;
			this->C12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// C43
			// 
			this->C43->Enabled = false;
			this->C43->Location = System::Drawing::Point(123, 117);
			this->C43->Name = L"C43";
			this->C43->ReadOnly = true;
			this->C43->Size = System::Drawing::Size(43, 20);
			this->C43->TabIndex = 30;
			this->C43->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// C11
			// 
			this->C11->Enabled = false;
			this->C11->Location = System::Drawing::Point(25, 39);
			this->C11->Name = L"C11";
			this->C11->ReadOnly = true;
			this->C11->Size = System::Drawing::Size(43, 20);
			this->C11->TabIndex = 16;
			this->C11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// C42
			// 
			this->C42->Enabled = false;
			this->C42->Location = System::Drawing::Point(74, 117);
			this->C42->Name = L"C42";
			this->C42->ReadOnly = true;
			this->C42->Size = System::Drawing::Size(43, 20);
			this->C42->TabIndex = 29;
			this->C42->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// C13
			// 
			this->C13->Enabled = false;
			this->C13->Location = System::Drawing::Point(123, 39);
			this->C13->Name = L"C13";
			this->C13->ReadOnly = true;
			this->C13->Size = System::Drawing::Size(43, 20);
			this->C13->TabIndex = 18;
			this->C13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// C41
			// 
			this->C41->Enabled = false;
			this->C41->Location = System::Drawing::Point(25, 117);
			this->C41->Name = L"C41";
			this->C41->ReadOnly = true;
			this->C41->Size = System::Drawing::Size(43, 20);
			this->C41->TabIndex = 28;
			this->C41->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// C14
			// 
			this->C14->Enabled = false;
			this->C14->Location = System::Drawing::Point(172, 39);
			this->C14->Name = L"C14";
			this->C14->ReadOnly = true;
			this->C14->Size = System::Drawing::Size(43, 20);
			this->C14->TabIndex = 19;
			this->C14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// C34
			// 
			this->C34->Enabled = false;
			this->C34->Location = System::Drawing::Point(172, 91);
			this->C34->Name = L"C34";
			this->C34->ReadOnly = true;
			this->C34->Size = System::Drawing::Size(43, 20);
			this->C34->TabIndex = 27;
			this->C34->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// C21
			// 
			this->C21->Enabled = false;
			this->C21->Location = System::Drawing::Point(25, 65);
			this->C21->Name = L"C21";
			this->C21->ReadOnly = true;
			this->C21->Size = System::Drawing::Size(43, 20);
			this->C21->TabIndex = 20;
			this->C21->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// C33
			// 
			this->C33->Enabled = false;
			this->C33->Location = System::Drawing::Point(123, 91);
			this->C33->Name = L"C33";
			this->C33->ReadOnly = true;
			this->C33->Size = System::Drawing::Size(43, 20);
			this->C33->TabIndex = 26;
			this->C33->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// C22
			// 
			this->C22->Enabled = false;
			this->C22->Location = System::Drawing::Point(74, 65);
			this->C22->Name = L"C22";
			this->C22->ReadOnly = true;
			this->C22->Size = System::Drawing::Size(43, 20);
			this->C22->TabIndex = 21;
			this->C22->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// C32
			// 
			this->C32->Enabled = false;
			this->C32->Location = System::Drawing::Point(74, 91);
			this->C32->Name = L"C32";
			this->C32->ReadOnly = true;
			this->C32->Size = System::Drawing::Size(43, 20);
			this->C32->TabIndex = 25;
			this->C32->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// C23
			// 
			this->C23->Enabled = false;
			this->C23->Location = System::Drawing::Point(123, 65);
			this->C23->Name = L"C23";
			this->C23->ReadOnly = true;
			this->C23->Size = System::Drawing::Size(43, 20);
			this->C23->TabIndex = 22;
			this->C23->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// C31
			// 
			this->C31->Enabled = false;
			this->C31->Location = System::Drawing::Point(25, 91);
			this->C31->Name = L"C31";
			this->C31->ReadOnly = true;
			this->C31->Size = System::Drawing::Size(43, 20);
			this->C31->TabIndex = 24;
			this->C31->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// C24
			// 
			this->C24->Enabled = false;
			this->C24->Location = System::Drawing::Point(172, 65);
			this->C24->Name = L"C24";
			this->C24->ReadOnly = true;
			this->C24->Size = System::Drawing::Size(43, 20);
			this->C24->TabIndex = 23;
			this->C24->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(546, 328);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 55);
			this->button1->TabIndex = 33;
			this->button1->Text = L"Pokaz wynik";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Macierze::button1_Click_1);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(196, 223);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 30);
			this->button3->TabIndex = 34;
			this->button3->Text = L"Reset okna";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Macierze::button3_Click_1);
			// 
			// toolTip1
			// 
			this->toolTip1->ToolTipIcon = System::Windows::Forms::ToolTipIcon::Warning;
			// 
			// Macierze
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(742, 448);
			this->ControlBox = false;
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->labelZnak);
			this->Controls->Add(this->LabelAW);
			this->Controls->Add(this->buttonB);
			this->Controls->Add(this->buttonA);
			this->Controls->Add(this->groupBoxMB2);
			this->Controls->Add(this->groupBoxMA2);
			this->Controls->Add(this->groupBoxA);
			this->Controls->Add(this->groupBoxMB);
			this->Controls->Add(this->groupBoxB);
			this->Controls->Add(this->groupBoxDzia³ania);
			this->Controls->Add(this->groupBoxMA);
			this->Controls->Add(this->button2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
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
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
		otherform->Show();
	}

	private: System::Void radioButtonDodawanie_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		groupBoxA->Enabled = true;
		groupBoxB->Enabled = true;
		unlockRadioA(radioButtonDodawanie);
		buttonA->Enabled = true;
		labelZnak->Text = "+";
		LabelAW->Text = "";
		buttonB->Enabled = false;

	}
	private: System::Void radioButtonOdejmowanie_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		groupBoxA->Enabled = true;
		groupBoxB->Enabled = true;
		groupBoxMA->Enabled = true;
		groupBoxMA2->Enabled = true;
		unlockRadioA(radioButtonOdejmowanie);
		labelZnak->Text = "-";
		LabelAW->Text = "";
		buttonB->Enabled = false;
	}
	private: System::Void radioButtonMnozenie_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		groupBoxA->Enabled = true;
		groupBoxB->Enabled = true;
		groupBoxMA->Enabled = true;
		groupBoxMA2->Enabled = true;
		labelZnak->Text = "*";
		buttonB->Enabled = true;
		buttonA->Enabled = true;
		unlockRadioA(radioButtonMnozenie);
		LabelAW->Text = "";

	}
	private: System::Void radioButtonTransponowanie_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		groupBoxA->Enabled = true;
		groupBoxB->Enabled = false;
		groupBoxMA->Enabled = true;
		unlockRadioA(radioButtonTransponowanie);
		buttonA->Enabled = true;
		for (int i = 3; i < 6; i++)
		{
			RadioA[i]->Enabled = false;
		}
		labelZnak->Text = "";
		buttonB->Enabled = false;
		LabelAW->Text = "";
	}
	private: System::Void radioButtonK2_A_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (radioButtonTransponowanie->Checked)
		{
			RadioA[3]->Enabled = false;
			RadioA[3]->Checked = false;
		}
		RadioA[4]->Enabled = true;
		RadioA[5]->Enabled = true;
	}
	private: System::Void radioButtonK3_A_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (radioButtonTransponowanie->Checked)
		{
			RadioA[4]->Enabled = false;
			RadioA[4]->Checked = false;
		}
		RadioA[3]->Enabled = true;
		RadioA[5]->Enabled = true;
	}
	private: System::Void radioButtonK4_A_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (radioButtonTransponowanie->Checked)
		{
			RadioA[5]->Enabled = false;
			RadioA[5]->Checked = false;
		}
		RadioA[3]->Enabled = true;
		RadioA[4]->Enabled = true;
	}
	private: System::Void radioButtonW2_A_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void radioButtonW3_A_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void radioButtonW4_A_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		MatrixA();
		MatrixB();
		MatrixC();
		if (radioButtonDodawanie->Checked || radioButtonOdejmowanie->Checked)
		{
			if (radioButtonK2_A->Checked && radioButtonW2_A->Checked)
			{
				MatrixA(2, 2);
				MatrixB(2, 2);
				MatrixC(2, 2);
			}
			else if (radioButtonW2_A->Checked && radioButtonK3_A->Checked)
			{
				MatrixA(3, 2);
				MatrixB(3, 2);
				MatrixC(3, 2);
			}
			else if (radioButtonW2_A->Checked && radioButtonK4_A->Checked)
			{
				MatrixA(4, 2);
				MatrixB(4, 2);
				MatrixC(4, 2);
			}
			else if (radioButtonW3_A->Checked && radioButtonK2_A->Checked)
			{
				MatrixA(2, 3);
				MatrixB(2, 3);
				MatrixC(2, 3);
			}
			else if (radioButtonW3_A->Checked && radioButtonK3_A->Checked)
			{
				MatrixA(3, 3);
				MatrixB(3, 3);
				MatrixC(2, 3);
			}
			else if (radioButtonW3_A->Checked && radioButtonK4_A->Checked)
			{
				MatrixA(4, 3);
				MatrixB(4, 3);
				MatrixC(4, 2);
			}
			else if (radioButtonW4_A->Checked && radioButtonK2_A->Checked)
			{
				MatrixA(2, 4);
				MatrixB(2, 4);
				MatrixC(2, 4);
			}
			else if (radioButtonW4_A->Checked && radioButtonK3_A->Checked)
			{
				MatrixA(3, 4);
				MatrixB(3, 4);
				MatrixC(3, 4);
			}
			else if (radioButtonW4_A->Checked && radioButtonK4_A->Checked)
			{
				MatrixA(4, 4);
				MatrixB(4, 4);
				MatrixC(4, 4);
			}
		}
		if (radioButtonMnozenie->Checked)
		{
			if (radioButtonK2_A->Checked && radioButtonW2_A->Checked)
			{
				MatrixA(2, 2);
			}
			else if (radioButtonW2_A->Checked && radioButtonK3_A->Checked)
			{
				MatrixA(3, 2);
			}
			else if (radioButtonW2_A->Checked && radioButtonK4_A->Checked)
			{
				MatrixA(4, 2);
			}
			else if (radioButtonW3_A->Checked && radioButtonK2_A->Checked)
			{
				MatrixA(2, 3);
			}
			else if (radioButtonW3_A->Checked && radioButtonK3_A->Checked)
			{
				MatrixA(3, 3);
			}
			else if (radioButtonW3_A->Checked && radioButtonK4_A->Checked)
			{
				MatrixA(4, 3);
			}
			else if (radioButtonW4_A->Checked && radioButtonK2_A->Checked)
			{
				MatrixA(2, 4);
			}
			else if (radioButtonW4_A->Checked && radioButtonK3_A->Checked)
			{
				MatrixA(3, 4);
			}
			else if (radioButtonW4_A->Checked && radioButtonK4_A->Checked)
			{
				MatrixA(4, 4);
			}
			if (!radioButtonK2_B->Enabled && !radioButtonK3_B->Enabled && !radioButtonK4_B->Enabled)
			{
				radioButtonK2_B->Enabled = true;
				radioButtonK3_B->Enabled = true;
				radioButtonK4_B->Enabled = true;
			}
		}
		if (radioButtonTransponowanie->Checked)
		{
			if (radioButtonW3_A->Checked && radioButtonK2_A->Checked)
			{
				MatrixA(2, 3);
				MatrixC(3, 2);
			}
			if (radioButtonW4_A->Checked && radioButtonK2_A->Checked)
			{
				MatrixA(2, 4);
				MatrixC(4, 2);
			}
			if (radioButtonW2_A->Checked && radioButtonK3_A->Checked)
			{
				MatrixA(3, 2);
				MatrixC(2, 3);
			}
			if (radioButtonW4_A->Checked && radioButtonK3_A->Checked)
			{
				MatrixA(3, 4);
				MatrixC(4, 3);
			}
			if (radioButtonW2_A->Checked && radioButtonK4_A->Checked)
			{
				MatrixA(4, 2);
				MatrixC(2, 4);
			}
			if (radioButtonW3_A->Checked && radioButtonK4_A->Checked)
			{
				MatrixA(4, 3);
				MatrixC(3, 4);
			}

		}
	}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	MatrixB();
	if (radioButtonMnozenie->Checked)
	{
		if (radioButtonK2_B->Checked && radioButtonK2_A->Checked)
		{
			MatrixB(2, Double::Parse(RadioA[0]->Text));
		}
		else if (radioButtonK2_A->Checked && radioButtonK3_B->Checked)
		{
			MatrixB(3, Double::Parse(RadioA[0]->Text));
		}
		else if (radioButtonK2_A->Checked && radioButtonK4_B->Checked)
		{
			MatrixB(4, Double::Parse(RadioA[0]->Text));
		}
		else if (radioButtonK3_A->Checked && radioButtonK2_B->Checked)
		{
			MatrixB(2, Double::Parse(RadioA[1]->Text));
		}
		else if (radioButtonK3_A->Checked && radioButtonK3_B->Checked)
		{
			MatrixB(3, Double::Parse(RadioA[1]->Text));
		}
		else if (radioButtonK3_A->Checked && radioButtonK4_B->Checked)
		{
			MatrixB(4, Double::Parse(RadioA[1]->Text));
		}
		else if (radioButtonK4_A->Checked && radioButtonK2_B->Checked)
		{
			MatrixB(2, Double::Parse(RadioA[2]->Text));
		}
		else if (radioButtonK4_A->Checked && radioButtonK3_B->Checked)
		{
			MatrixB(3, Double::Parse(RadioA[2]->Text));
		}
		else if (radioButtonK4_A->Checked && radioButtonK4_B->Checked)
		{
			MatrixB(4, Double::Parse(RadioA[2]->Text));
		}

		//matrixC
		if (radioButtonK2_B->Checked && radioButtonW2_A->Checked)
		{
			MatrixC(2, 2);
		}
		else if (radioButtonW2_A->Checked && radioButtonK3_B->Checked)
		{
			MatrixC(3, 2);
		}
		else if (radioButtonW2_A->Checked && radioButtonK4_B->Checked)
		{
			MatrixC(4, 2);
		}
		else if (radioButtonW3_A->Checked && radioButtonK2_B->Checked)
		{
			MatrixC(2, 3);
		}
		else if (radioButtonW3_A->Checked && radioButtonK3_B->Checked)
		{
			MatrixC(3, 3);
		}
		else if (radioButtonW3_A->Checked && radioButtonK4_B->Checked)
		{
			MatrixC(4, 3);
		}
		else if (radioButtonW4_A->Checked && radioButtonK2_B->Checked)
		{
			MatrixC(2, 4);
		}
		else if (radioButtonW4_A->Checked && radioButtonK3_B->Checked)
		{
			MatrixC(3, 4);
		}
		else if (radioButtonW4_A->Checked && radioButtonK4_B->Checked)
		{
			MatrixC(4, 4);
		}
	}

}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	MatrixA();
	MatrixB();
	MatrixC();
	if (radioButtonDodawanie->Checked || radioButtonOdejmowanie->Checked || radioButtonMnozenie->Checked || radioButtonTransponowanie->Checked)
	{
		if (radioButtonDodawanie->Checked)
		{
			try
			{
				Reset(A);
				Reset(B);
				MatrixDodaw();
			}
			catch (Exception^)
			{
				LabelAW->Text = "Error!";
			}
		}
		if (radioButtonOdejmowanie->Checked)
		{
			try
			{
				Reset(A);
				Reset(B);
				MatrixOdej();
			}
			catch (Exception^)
			{
				LabelAW->Text = "Error!";
			}
		}
		if (radioButtonMnozenie->Checked)
		{
			try
			{
				Reset(A);
				Reset(B);
				MatrixMnoz();
			}
			catch (Exception^)
			{
				LabelAW->Text = "Error: Kliknij ponownie 'zatwierdŸ okno' po lewej i prawej stronie";
			}

		}
		if (radioButtonTransponowanie->Checked)
		{
			try
			{
				Reset(A);
				MatrixTrans();
			}
			catch (Exception^)
			{
				LabelAW->Text = "Error";
			}
		}
	}
	else
	{
		LabelAW->Text = "Wybierz dzia³ania";
	}

}
private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {
	MatrixA();
	MatrixB();
	MatrixC();
	ResetOkna();
}
};
}
