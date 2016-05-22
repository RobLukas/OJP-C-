#include "stdafx.h"
#include "Macierze.h"

using namespace std;
using namespace System::Windows::Forms;

void WindowsFormApplication1::Macierze::unlockRadio(RadioButton^ RadioBut) {

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