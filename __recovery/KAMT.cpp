//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <iostream>
#include <clocale>
#include <windows.h>
#include <fstream>
#include <math.h>
#include <string>
#include <cmath>
#include <vector>

#include "KAMT.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int mode, CheckMode=0, i1 = 0, matMode = 0;
double T0[50][50];
int iii[10], jjj[10];
using namespace std;
//---------------------------------------------------------------------------
double gamm(double Tg)
{
	double rez, k = 0.9;
    rez = k*Tg;
	return rez;
}
double gamm3(double Tg)
{
    double gm = 0.01, rez, k = 0.15;
    rez = k*Tg - gm*pow(Tg,3);
    return rez;
}
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
		  Memo1->Lines->Clear();
		  Timer1->Enabled = false;
		  ProgressBar1->Position = 0;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
	Form1->Memo1->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	Timer1->Enabled = false;
	Form1->Memo1->Clear();
    for (int i = 0; i < 100; i++) {
			ProgressBar1->Position--;
	}
	ofstream output("output.txt");
	double T1[50][50], C, po, Ld, q[50][50], t, po2, C2; //T0[50][50]
    float h, h2;
    double dt, tv, to, it, ep, SelectTime;
	int i,j, n, m, ii, jj, mode, pl = -1;
    double gamT, sumq;
    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1521);
    SetConsoleOutputCP(1521);
	for (i = 0; i <= 42; i++)
			for (j = 0; j <= 42; j++) {
				//T0[i][j] = 0;
				  if (j == 0) {    //верхняя граница
					T0[i][j] = StrToFloat(Form1->Edit9->Text);
					T1[i][j] = T0[i][j];
				  }
				  if (i == 42) {   //правая граница
					T0[i][j] = StrToFloat(Form1->Edit11->Text);
					T1[i][j] = T0[i][j];
				  }
				  if (i == 0) {
					T0[i][j] = StrToFloat(Form1->Edit8->Text);
					T1[i][j] = T0[i][j];
				  }
				  if (j == 42) {
					T0[i][j] = StrToFloat(Form1->Edit10->Text);
					T1[i][j] = T0[i][j];
				  }

				}
	SelectTime = StrToFloat(Form1->Edit7->Text);
	to = StrToFloat(Form1->Edit1->Text);
	//cout << "До: "; cin >> tv;
	tv = StrToFloat(Form1->Edit2->Text);
	if (SelectTime != -1) {
       tv = SelectTime;
	}
	ii = StrToInt(Form1->Edit3->Text);
	jj = StrToInt(Form1->Edit4->Text);
    n = 41; // 0 и 42 элементы - клетки среды
	m = 41;
	T0[ii][jj] = StrToInt(Form1->Edit15->Text); //278
			if ((to == 0)&&(SelectTime==-1)) {
			output << to << " секунда:"<< endl;
			for (i = 0; i <= (n+1); i++)
			{
				for (j = 0; j <= (m+1); j++)
					output << T0[i][j] << " ";
				output << endl;
			}
		}
	Memo1->Lines->Append("Точка ("+IntToStr(ii)+", "+IntToStr(jj)+") поджигается тепловым импульсом и повышает температуру на "+T0[ii][jj]+" градусов.");
	if (SelectTime >= 0 ) {
		Memo1->Lines->Append("Вывод результатов на " + FloatToStr(SelectTime)+ " секунде.");
	}  else
	{
        Memo1->Lines->Append("Вывод результатов на временном промежутке от "+FloatToStr(to)+" до "+FloatToStr(tv)+".");
	}
	dt = 0.005;
	it = 0.0;
	//po = 1500;
	po = StrToFloat(Form1->Edit5->Text);
	//C = 1000;
	C = StrToFloat(Form1->Edit6->Text);
	po2 = StrToFloat(Form1->Edit16->Text);
    C2 = StrToFloat(Form1->Edit17->Text);
	h = 0.001;
    h2 = h*h;
	Ld = 1;
	  if(RadioButton1->Checked){
		mode = 1;
	}
	if(RadioButton2->Checked)
		mode = 2;
	int Ch1, Ch2, Ch3, Ch4;
    bool bleft, bright, dleft, dright;
	//вывод всех элементов матрицы в файлик, надо оформить функцию вывода.
	for (double it = 1.0; it <= tv+dt; it = it + dt)
	{
		pl++;
		for (i = 1; i <= n; i++)
			for (j = 1; j <= m; j++)
			{
				bleft = false;
				bright = false;
				dleft = false;
				dright = false;
				Ch1 = (T0[i-1][j] - T0[i][j])/(h*h);
				Ch2 = (T0[i+1][j] - T0[i][j])/(h*h);
				Ch3 = (T0[i][j-1] - T0[i][j])/(h*h);
				Ch4 = (T0[i][j+1] - T0[i][j])/(h*h);
				if (mode == 1) {
					if ((j > 20) && (matMode == 1)) {
						T1[i][j] = T0[i][j] + (Ld*dt/(C2*po2))*(Ch1+Ch2+Ch3+Ch4+gamm(T0[i][j])/(h*h));
					} else {
						T1[i][j] = T0[i][j] + (Ld*dt/(C*po))*(Ch1+Ch2+Ch3+Ch4+gamm(T0[i][j])/(h*h));
                    }

				}
				if (mode == 2) {
					if ((j > 20) && (matMode == 1)) {
						T1[i][j] = T0[i][j] + (Ld*dt/(C2*po2))*(Ch1+Ch2+Ch3+Ch4+gamm3(T0[i][j])/(h*h));
					} else {
						T1[i][j] = T0[i][j] + (Ld*dt/(C*po))*(Ch1+Ch2+Ch3+Ch4+gamm3(T0[i][j])/(h*h));
                    }
				}
				if (Form1->CheckBox1->Checked || Form1->CheckBox2->Checked || Form1->CheckBox3->Checked || Form1->CheckBox4->Checked) {
					//верх и лево: если выбрано (1, 1), то не выполнять обмен со средой
					if ((Form1->CheckBox1->Checked) && !(Form1->CheckBox2->Checked) && (Form1->CheckBox3->Checked)) {
						if ((i == 1)&&(j == 1))
						{
							T1[i][j] = T0[i][j] + (Ld*dt/(C*po)*(Ch2+Ch4));
						}
					}
					//верх и право
					if ((Form1->CheckBox1->Checked) && (Form1->CheckBox2->Checked) && !(Form1->CheckBox3->Checked))
					{
						if ((i == 1)&&(j == 41))
						{
							if (matMode == 1) {
							   T1[i][j] = T0[i][j] + (Ld*dt/(C2*po2)*(Ch2+Ch3));
							}  else {
								T1[i][j] = T0[i][j] + (Ld*dt/(C*po)*(Ch2+Ch3));
							}
						}
					}
					//низ и лево
					if (!(Form1->CheckBox2->Checked) && (Form1->CheckBox3->Checked) && (Form1->CheckBox4->Checked))
					{
						if ((j == 1)&&(i == 41))
						{
							T1[i][j] = T0[i][j] + (Ld*dt/(C*po)*(Ch1+Ch4));
						}
					}
					//низ и право
					if (!(Form1->CheckBox2->Checked) && (Form1->CheckBox3->Checked) && (Form1->CheckBox4->Checked))
					{
						if ((j == 41)&&(i == 41))
						{
							if (matMode == 1) {
								T1[i][j] = T0[i][j] + (Ld*dt/(C2*po2)*(Ch1+Ch3));
							} else {
								T1[i][j] = T0[i][j] + (Ld*dt/(C*po)*(Ch1+Ch3));
							}
						}
					}
					//верх
					if ((Form1->CheckBox1->Checked) && !(Form1->CheckBox2->Checked) && !(Form1->CheckBox3->Checked)) {
						if (i == 1) {
							if ((j > 20) && (matMode == 1)) {
								T1[i][j] = T0[i][j] + (Ld*dt/(C2*po2)*(Ch2+Ch3+Ch4));
							} else {
								T1[i][j] = T0[i][j] + (Ld*dt/(C*po)*(Ch2+Ch3+Ch4));
							}
					  }
					}
					//низ
					if (!(Form1->CheckBox2->Checked) && !(Form1->CheckBox3->Checked) && (Form1->CheckBox4->Checked)) {
						if (i == 41) {
							if ((j > 20) && (matMode == 1)) {
								T1[i][j] = T0[i][j] + (Ld*dt/(C2*po2)*(Ch1+Ch3+Ch4));
							} else {
								T1[i][j] = T0[i][j] + (Ld*dt/(C*po)*(Ch1+Ch3+Ch4));
							}
					  }
					}
					//лево
					if (!(Form1->CheckBox1->Checked) && (Form1->CheckBox3->Checked) && !(Form1->CheckBox4->Checked)) {
						if (j == 1) {
							T1[i][j] = T0[i][j] + (Ld*dt/(C*po)*(Ch2+Ch1+Ch4));
					    }
					}
					//право
					if (!(Form1->CheckBox1->Checked) && (Form1->CheckBox2->Checked) && !(Form1->CheckBox4->Checked)) {
						if (j == 41) {
							T1[i][j] = T0[i][j] + (Ld*dt/(C2*po2)*(Ch2+Ch1+Ch3));
					  }
					}
				}
					//if (mode == 1)
					 //	T1[i][j] = T1[i][j] + ((dt/(C*po)) * gamm(T0[i][j])/(h*h));
				 //	if (mode == 2)
					 //	T1[i][j] = T1[i][j] + ((dt/(C*po)) * gamm3(T0[i][j]));

			}
		if (pl%200 == 0)
		{
			if (SelectTime != -1) {
				if ((SelectTime <= it+dt)&&(SelectTime >= it-dt)) {
					output << it << " секунда:"<< endl;
					 for (i = 0; i <= (n+1); i++)
					{
						for (j = 0; j <= (m+1); j++)
							output << T1[i][j] << " ";
						output << endl;
					}
				}
			}  else
				{
					if ((to-dt <= it)&&(it <= tv+dt)) {
							output << it << " секунда:"<< endl;
						 for (i = 0; i <= (n+1); i++)
						{
							for (j = 0; j <= (m+1); j++)
								output << T1[i][j] << " ";
							output << endl;
						}
					}
				}
		}
		for (i = 1; i <= n; i++)
			for (j = 1; j <= m; j++)
				T0[i][j] = T1[i][j];
	}
	output.close();
	Timer1->Enabled = true;
	Memo1->Lines->Append("Результаты успешно записаны в файл!");
	//system("output.txt");
//---------------------------------------------------------------------------

}
void __fastcall TForm1::RadioButton1Click(TObject *Sender)
{
  if(RadioButton1->Checked){
	mode = 1;
  }
  if(RadioButton2->Checked){
	mode = 2;
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
	Form2->Show();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button4Click(TObject *Sender)
{
    system("output.txt");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
	ProgressBar1->Position += 10;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox1Click(TObject *Sender)
{
	   if (CheckBox1->Checked) {
		   CheckMode = 1;
	   } else {
		   CheckMode = 0;
	   }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox2Click(TObject *Sender)
{
	if (CheckBox2->Checked) {
		   CheckMode = 2;
	   } else {
		   CheckMode = 0;
	   }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox4Click(TObject *Sender)
{
		if (CheckBox4->Checked) {
		   CheckMode = 4;
	   } else {
		   CheckMode = 0;
	   }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox3Click(TObject *Sender)
{
	if (CheckBox3->Checked) {
		   CheckMode = 3;
	   } else {
		   CheckMode = 0;
	   }
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button5Click(TObject *Sender)
{
	iii[i1] = StrToFloat(Form1->Edit12->Text);
	jjj[i1] = StrToFloat(Form1->Edit13->Text);
	T0[iii[i1]][jjj[i1]] = StrToFloat(Form1->Edit14->Text);
	Memo1->Lines->Append("Вы добавили источник в точке ("+FloatToStr(iii[i1])+", "+FloatToStr(jjj[i1])+") c температурой равной "+FloatToStr(T0[iii[i1]][jjj[i1]]) + ".");
	if (i1 == 9) {
		ShowMessage("Вы добавили слишком много источников. Со следующим добавлением начнется перезапись данных об источниках.");
		//Memo1->Lines->Append("Вы добавили слишком много источников. Со следующим добавлением начнется перезапись данных о источниках.");
	}
	if (i1 < 9) {
		i1++;
	} else {
		i1 = 0;
	}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::RadioButton3Click(TObject *Sender)
{
	Panel7->Visible = false;
    matMode = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton4Click(TObject *Sender)
{
	Panel7->Visible = true;
    matMode = 1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit17Change(TObject *Sender)
{

}
//---------------------------------------------------------------------------

