#include "stdafx.h"
#include "Macierze.h"

using namespace std;
using namespace System::Windows::Forms;

void WindowsFormApplication1::Macierze::unlockRadioB(RadioButton^ RadioBut) {

	RadioB[0] = radioButtonK2_B;
	RadioB[1] = radioButtonK3_B;
	RadioB[2] = radioButtonK4_B;
	RadioB[3] = radioButtonW2_B;
	RadioB[4] = radioButtonW3_B;
	RadioB[5] = radioButtonW4_B;

	if (RadioBut->Checked)
	{
		for (int i = 0; i < 6; i++)
		{
			RadioB[i]->Enabled = true;
		}
	}
}

void WindowsFormApplication1::Macierze::unlockRadioA(RadioButton^ RadioBut) {

	RadioA[0] = radioButtonK2_A;
	RadioA[1] = radioButtonK3_A;
	RadioA[2] = radioButtonK4_A;
	RadioA[3] = radioButtonW2_A;
	RadioA[4] = radioButtonW3_A;
	RadioA[5] = radioButtonW4_A;

	if (RadioBut->Checked)
	{
		for (int i = 0; i < 6; i++)
		{
			RadioA[i]->Enabled = true;
		}
	}
}

void WindowsFormApplication1::Macierze::MatrixA() {
	for (int i = 0; i < 4; i++)
	{
		A[i] = gcnew array<TextBox^, 1>(4);
	}

	A[0][0] = this->A11;
	A[0][1] = this->A12;
	A[0][2] = this->A13;
	A[0][3] = this->A14;
	A[1][0] = this->A21;
	A[1][1] = this->A22;
	A[1][2] = this->A23;
	A[1][3] = this->A24;
	A[2][0] = this->A31;
	A[2][1] = this->A32;
	A[2][2] = this->A33;
	A[2][3] = this->A34;
	A[3][0] = this->A41;
	A[3][1] = this->A42;
	A[3][2] = this->A43;
	A[3][3] = this->A44;
}

void WindowsFormApplication1::Macierze::MatrixB() {
	for (int i = 0; i < 4; i++)
	{
		B[i] = gcnew array<TextBox^, 1>(4);
	}

	B[0][0] = this->B11;
	B[0][1] = this->B12;
	B[0][2] = this->B13;
	B[0][3] = this->B14;
	B[1][0] = this->B21;
	B[1][1] = this->B22;
	B[1][2] = this->B23;
	B[1][3] = this->B24;
	B[2][0] = this->B31;
	B[2][1] = this->B32;
	B[2][2] = this->B33;
	B[2][3] = this->B34;
	B[3][0] = this->B41;
	B[3][1] = this->B42;
	B[3][2] = this->B43;
	B[3][3] = this->B44;
}

void WindowsFormApplication1::Macierze::MatrixC() {
	for (int i = 0; i < 4; i++)
	{
		C[i] = gcnew array<TextBox^, 1>(4);
	}

	C[0][0] = this->C11;
	C[0][1] = this->C12;
	C[0][2] = this->C13;
	C[0][3] = this->C14;
	C[1][0] = this->C21;
	C[1][1] = this->C22;
	C[1][2] = this->C23;
	C[1][3] = this->C24;
	C[2][0] = this->C31;
	C[2][1] = this->C32;
	C[2][2] = this->C33;
	C[2][3] = this->C34;
	C[3][0] = this->C41;
	C[3][1] = this->C42;
	C[3][2] = this->C43;
	C[3][3] = this->C44;
}

void WindowsFormApplication1::Macierze::MatrixA(int x, int y) {
	
	for (int j = 0; j < 4; j++)
	{
		for (int i = 0; i < 4; i++)
		{
			A[i][j]->Enabled = false;
		}
	}
	for (int j = 0; j < x; j++)
	{
		for (int i = 0; i < y; i++)
		{
			A[i][j]->Enabled = true;
		}
	}
}

void WindowsFormApplication1::Macierze::MatrixB(int x, int y) {

	for (int j = 0; j < 4; j++)
	{
		for (int i = 0; i < 4; i++)
		{
			B[i][j]->Enabled = false;
		}
	}
	for (int j = 0; j < x; j++)
	{
		for (int i = 0; i < y; i++)
		{
			B[i][j]->Enabled = true;
		}
	}
}

void WindowsFormApplication1::Macierze::MatrixC(int x, int y) {

	for (int j = 0; j < 4; j++)
	{
		for (int i = 0; i < 4; i++)
		{
			C[i][j]->Enabled = false;
		}
	}
	for (int j = 0; j < x; j++)
	{
		for (int i = 0; i < y; i++)
		{
			C[i][j]->Enabled = true;
		}
	}
}

void WindowsFormApplication1::Macierze::MatrixDodaw() {
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (C[i][j]->Enabled)
			{
				C[i][j]->Text = (Double::Parse(A[i][j]->Text) + Double::Parse(B[i][j]->Text)).ToString();
			}
		}
	}
}

void WindowsFormApplication1::Macierze::Reset(array<array<TextBox^>^> ^ A) {
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (A[i][j]->Text == "" && A[i][j]->Enabled)
			{
				A[i][j]->Text = "0";
			}
		}
	}
}

void WindowsFormApplication1::Macierze::MatrixOdej() {
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (C[i][j]->Enabled)
			{
				C[i][j]->Text = (Double::Parse(A[i][j]->Text) - (Double::Parse(B[i][j]->Text))).ToString();
			}
		}
	}
}

void WindowsFormApplication1::Macierze::ResetOkna() {
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (A[i][j]->Text != "" || B[i][j]->Text != "" || C[i][j]->Text != "")
			{
				A[i][j]->Text = "";
				B[i][j]->Text = "";
				C[i][j]->Text = "";
			}
		}
	}
}

void WindowsFormApplication1::Macierze::MatrixMnoz() {
	int s;
	if (radioButtonW2_A->Checked && radioButtonK2_B->Checked)
	{
		for (int i = 0; i < 2; i++)//wiersz
		{
			for (int j = 0; j < 2; j++)//kolumna
			{
				s = 0;
				for (int k = 0; k < 2; k++)
				{
					if (C[i][j]->Enabled)
					{
						s = s + ((Double::Parse(A[i][k]->Text))*(Double::Parse(B[k][j]->Text)));
					}
					C[i][j]->Text = s.ToString();
				}
			}
		}
	}
	else if (radioButtonW2_A->Checked && radioButtonK3_B->Checked)
	{
		for (int i = 0; i < 2; i++)//wiersz
		{
			for (int j = 0; j < 3; j++)//kolumna
			{
				s = 0;
				for (int k = 0; k < 2; k++)
				{
					if (C[i][j]->Enabled)
					{
						s = s + ((Double::Parse(A[i][k]->Text))*(Double::Parse(B[k][j]->Text)));
					}
					C[i][j]->Text = s.ToString();
				}
			}
		}
	}
	else if (radioButtonW2_A->Checked && radioButtonK4_B->Checked)
	{
		for (int i = 0; i < 2; i++)//wiersz
		{
			for (int j = 0; j < 4; j++)//kolumna
			{
				s = 0;
				for (int k = 0; k < 3; k++)
				{
					if (C[i][j]->Enabled)
					{
						s = s + ((Double::Parse(A[i][k]->Text))*(Double::Parse(B[k][j]->Text)));
					}
					C[i][j]->Text = s.ToString();
				}
			}
		}
	}
	else if (radioButtonW3_A->Checked && radioButtonK2_B->Checked)
	{
		for (int i = 0; i < 3; i++)//wiersz
		{
			for (int j = 0; j < 2; j++)//kolumna
			{
				s = 0;
				for (int k = 0; k < 2; k++)
				{
					if (C[i][j]->Enabled)
					{
						s = s + ((Double::Parse(A[i][k]->Text))*(Double::Parse(B[k][j]->Text)));
					}
					C[i][j]->Text = s.ToString();
				}
			}
		}
	}
	else if (radioButtonW3_A->Checked && radioButtonK3_B->Checked)
	{
		for (int i = 0; i < 3; i++)//wiersz
		{
			for (int j = 0; j < 3; j++)//kolumna
			{
				s = 0;
				for (int k = 0; k < 2; k++)
				{
					if (C[i][j]->Enabled)
					{
						s = s + ((Double::Parse(A[i][k]->Text))*(Double::Parse(B[k][j]->Text)));
					}
					C[i][j]->Text = s.ToString();
				}
			}
		}
	}
	else if (radioButtonW3_A->Checked && radioButtonK4_B->Checked)
	{
		for (int i = 0; i < 3; i++)//wiersz
		{
			for (int j = 0; j < 4; j++)//kolumna
			{
				s = 0;
				for (int k = 0; k < 4; k++)
				{
					if (C[i][j]->Enabled)
					{
						s = s + ((Double::Parse(A[i][k]->Text))*(Double::Parse(B[k][j]->Text)));
					}
					C[i][j]->Text = s.ToString();
				}
			}
		}
	}
	else if (radioButtonW4_A->Checked && radioButtonK2_B->Checked)
	{
		for (int i = 0; i < 4; i++)//wiersz
		{
			for (int j = 0; j < 2; j++)//kolumna
			{
				s = 0;
				for (int k = 0; k < 2; k++)
				{
					if (C[i][j]->Enabled)
					{
						s = s + ((Double::Parse(A[i][k]->Text))*(Double::Parse(B[k][j]->Text)));
					}
					C[i][j]->Text = s.ToString();
				}
			}
		}
	}
	else if (radioButtonW4_A->Checked && radioButtonK3_B->Checked)
	{
		for (int i = 0; i < 4; i++)//wiersz
		{
			for (int j = 0; j < 3; j++)//kolumna
			{
				s = 0;
				for (int k = 0; k < 3; k++)
				{
					if (C[i][j]->Enabled)
					{
						s = s + ((Double::Parse(A[i][k]->Text))*(Double::Parse(B[k][j]->Text)));
					}
					C[i][j]->Text = s.ToString();
				}
			}
		}
	}
	else if (radioButtonW4_A->Checked && radioButtonK4_B->Checked)
	{
		for (int i = 0; i < 4; i++)//wiersz
		{
			for (int j = 0; j < 4; j++)//kolumna
			{
				s = 0;
				for (int k = 0; k < 3; k++)
				{
					if (C[i][j]->Enabled)
					{
						s = s + ((Double::Parse(A[i][k]->Text))*(Double::Parse(B[k][j]->Text)));
					}
					C[i][j]->Text = s.ToString();
				}
			}
		}
	}

}

void WindowsFormApplication1::Macierze::ShortMatrixMulti(array<RadioButton^, 1> ^ RadioAA, array<RadioButton^, 1> ^ RadioBB) {
	int s;
	for (int i = 0; i <= Double::Parse(RadioAA[3]->Text); i++)//wiersz
	{
		for (int j = 0; j <= Double::Parse(RadioBB[0]->Text); j++)//kolumna
		{
			s = 0;
			for (int k = 0; k <= Double::Parse(RadioBB[0]->Text); k++)
			{
				if (C[i][j]->Enabled)
				{
					s = s + ((Double::Parse(A[i][k]->Text))*(Double::Parse(B[k][j]->Text)));
				}
				C[i][j]->Text = s.ToString();
			}
		}
	}
}

void WindowsFormApplication1::Macierze::MatrixTrans() {
	if (radioButtonW3_A->Checked && radioButtonK2_A->Checked)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				C[j][i]->Text = A[i][j]->Text;
			}
		}
	}
	if (radioButtonW4_A->Checked && radioButtonK2_A->Checked)
	{
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				C[j][i]->Text = A[i][j]->Text;
			}
		}
	}
	if (radioButtonW2_A->Checked && radioButtonK3_A->Checked)
	{
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				C[j][i]->Text = A[i][j]->Text;
			}
		}
	}
	if (radioButtonW4_A->Checked && radioButtonK3_A->Checked)
	{
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				C[j][i]->Text = A[i][j]->Text;
			}
		}
	}	
	if (radioButtonW2_A->Checked && radioButtonK4_A->Checked)
	{
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				C[j][i]->Text = A[i][j]->Text;
			}
		}
	}
	if (radioButtonW3_A->Checked && radioButtonK4_A->Checked)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				C[j][i]->Text = A[i][j]->Text;
			}
		}
	}
}

void WindowsFormApplication1::Macierze::ResetOknaEnabFalse() {

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if ((A[i][j]->Text != "" || B[i][j]->Text != "" || C[i][j]->Text != "") && (A[i][j]->Enabled == false || B[i][j]->Enabled == false || C[i][j]->Enabled == false))
			{
				A[i][j]->Text = "";
				B[i][j]->Text = "";
				C[i][j]->Text = "";
			}
		}
	}
}
