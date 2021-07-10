//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <VCLTee.TeeDraw3D.hpp>
#include <VclTee.TeeGDIPlus.hpp>
#include <VCLTee.TeeProcs.hpp>
#include <Vcl.OleCtnrs.hpp>
//===============================================================
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glaux.h>
#include "KAMT.h"
//---------------------------------------------------------------
#include <windows.h> // Заголовочный файл для Windows
//---------------------------------------------------------------------------
bool bSetupPixelFormat(HDC hdc);
void Draw();

class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TOleContainer *OleContainer1;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall FormResize(TObject *Sender);
	void __fastcall FormPaint(TObject *Sender);
private:	// User declarations
public:	// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
