#include "ToolsWindow.h"
#include <Windows.h>
#include <GL\glu.h>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <ctime>


using namespace System;
using namespace System::Windows::Forms;
using namespace PaintUIPrimitivas;

#define DEBUG FALSE

using namespace std;


System::Void PaintUI::ToolsWindow::label1_Click(System::Object^  sender, System::EventArgs^  e) {
	dlgColor->ShowDialog();
	System::Drawing::Color color = dlgColor->Color;
	((System::Windows::Forms::Label^)sender)->BackColor = color;
	//actualiza color primario
	primary.r = label1->BackColor.R;
	primary.g = label1->BackColor.G;
	primary.b = label1->BackColor.B;
	//actualiza color secundario
	secondary.r = label2->BackColor.R;
	secondary.g = label2->BackColor.G;
	secondary.b = label2->BackColor.B;
}

[STAThread]
void main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//TestForma es el nombre del proyecto
	//mainglut();
	Application::Run(gcnew PaintUI::ToolsWindow());


}