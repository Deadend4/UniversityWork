//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
HGLRC hRC=NULL; // указатель на контекст воспроизведения (Rendering Context)
HDC   hDC=NULL; // дескриптор устройства (указатель на окно, в котором будем рисовать)
HWND hWnd=NULL;
HINSTANCE hInstance;
GLuint PixelFormat;
//===========================================================================
static PIXELFORMATDESCRIPTOR pfd = {
	sizeof(PIXELFORMATDESCRIPTOR),
	1,
	PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL | PFD_TYPE_RGBA,
	24,
	0, 0, 0, 0, 0, 0,
	0,
	0,
	0,
	0, 0, 0, 0,
	32,
	0,
	0,
	PFD_MAIN_PLANE,
	0,
	0, 0, 0
};
/*bool bSetupPixelFormat(HDC hdc)
{
	PIXELFORMATDESCRIPTOR pfd, *ppfd;
	int pixelformat;
	ppfd = &pfd;
	ppfd->nSize = sizeof(PIXELFORMATDESCRIPTOR);
	ppfd->nVersion = 1;
	ppfd->dwFlags = PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER;
	ppfd->dwLayerMask = PFD_MAIN_PLANE;
	ppfd->iPixelType = PFD_TYPE_RGBA;
	ppfd->cColorBits = 16;
	ppfd->cDepthBits = 16;
	ppfd->cAccumBits = 0;
	ppfd->cStencilBits = 0;
	if ((pixelformat = ChoosePixelFormat(hdc, ppfd)) == 0)
	{
		MessageBox(NULL, L"ChoosePixelFormat failed", L"Error", MB_OK);
		return FALSE;
	}
	if (SetPixelFormat(hdc, pixelformat, ppfd) == FALSE)
	{
		MessageBox(NULL, L"SetPixelFormat failed", L"Error", MB_OK);
		return FALSE;
	}
	return TRUE;
}        */
void Draw()
	  {
		glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
		glClear(GL_DEPTH_BUFFER_BIT xor GL_COLOR_BUFFER_BIT);
		/*GLUquadricObj *quadObj;
		quadObj = gluNewQuadric();
        gluQuadricDrawStyle(quadObj, GLU_FILL);
        glColor3f(1,0,0);
        gluSphere(quadObj, 2,10,10);
          glRotatef(3, 0,1,0);
        gluDeleteQuadric(quadObj);    */
        //SwapBuffers(hDC);
	  }
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::FormCreate(TObject *Sender)
{
   hDC = GetDC(Form2->Handle);
   PixelFormat = ChoosePixelFormat(hDC, &pfd);
   SetPixelFormat(hDC, PixelFormat, &pfd);
   hRC = wglCreateContext(hDC);
   wglMakeCurrent(hDC, hRC);


   /*	ghDC = GetDC(Handle);
	if (!bSetupPixelFormat(ghDC)) Close(); // устанавливаем формат пикселей
	ghRC = wglCreateContext(ghDC);         // эта и следующая функция нужны для
	wglMakeCurrent(ghDC, ghRC);            // создания контекста воспроизведения (Rendering Context)
	glClearColor(0.85, 0.85, 0.85, 0.0);   // устанавливаем цвет, которым будет заполняться экран при
	// очищении (4 параметра соответствуют выбранной нами при
	// установке пикселей палитре RGBA)
	FormResize(Sender);                 // здесь делаем тоже самое, что и при изменении
	// размеров формы, поэтому так
	// в OpenGL всё включается/выключается (разрешается/запрещается) процедурами glEnable и glDisable
	glEnable(GL_COLOR_MATERIAL);        // разрешаем давать нашим объектам какой-то цвет
	glEnable(GL_DEPTH_TEST);            // разрешаем тест глубины, чтобы изображение было объёмным
	glEnable(GL_LIGHTING);              // разрешаем освещение
	glEnable(GL_LIGHT0);                // включаем "лампочку №0"
	float p[4]={3,3,3,1},
	d[3]={-1,-1,-3};
	glLightfv(GL_LIGHT0,GL_POSITION,p); // устанавливаем свойства "лампочки №0": позицию
	glLightfv(GL_LIGHT0,GL_SPOT_DIRECTION,d); // и направление света
	Draw();
	InvalidateRect(Handle, NULL, false);    */
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
void __fastcall TForm2::FormClose(TObject *Sender, TCloseAction &Action)
{   /*
// удаляем контекст воспроизведения и освобождаем окно, в котором рисовали
if(hRC)
{       wglMakeCurrent(hDC,0);
wglDeleteContext(hRC);
}
if(hDC) ReleaseDC(Handle, hDC);   */
}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormResize(TObject *Sender)
{      /*
  // устанавливаем область вывода - область, в которую OpenGL будет
  // выводить изображение (в нашем случае - вся форма)
	glViewport( 0, 0, Width, Height );

	// устанавливаем режим матрицы видового преобразования
	// если вы меняете тип проецирования, положение или направление
	// камеры, то параметр должен быть GL_PROJECTION
	// после того, как вы завершили изменения, вызовите эту
	// процедуру с параметром GL_MODELVIEW
	glMatrixMode( GL_PROJECTION );

	// заменяем текущую матрицу видового преобразования
	glLoadIdentity();

// устанавливаем режим ортогонального (прямоугольного) проецирования;
// это значит, что изображение будет рисоваться как в изометрии
// 6 параметров типа GLdouble (или просто double): left, right, bottom,
// top, near, far определяют координаты соответственно левой, правой,
// нижней, верхней, ближней и дальней плоскостей отсечения,
// т.е. всё, что окажется за этими пределами, рисоваться не будет (на
// самом деле эта процедура просто устанавливает масштабы координатных осей)
// для того чтобы установить перспективное проецирование, используются
// процедуры glFrustum и gluPerspective

	glOrtho(-5,5, -5,5, 2,12);

// устанавливаем параметры камеры: первая тройка - её координаты,
// вторая - вектор направления, третья - направление оси Y

	gluLookAt(5,5,5, 0,0,0, 0,0,1);

	glMatrixMode( GL_MODELVIEW );     */
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------

void __fastcall TForm2::FormPaint(TObject *Sender)
{
    Draw();
}
//---------------------------------------------------------------------------

