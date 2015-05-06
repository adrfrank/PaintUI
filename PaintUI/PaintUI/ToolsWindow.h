#pragma once

#include "OpenGL.h"
#include "TransparentPanel.h"

namespace PaintUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace OpenGLForm;
	using namespace PaintUI;

	/// <summary>
	/// Summary for ToolsWindow
	/// </summary>
	public ref class ToolsWindow : public System::Windows::Forms::Form
	{
	public:
		ToolsWindow(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			//canvasPanel->BackColor = System::Drawing::Color::FromArgb(0, System::Drawing::Color::Black);
			OpenGL = gcnew COpenGL(this,
				canvasPanel->Location.X,
				canvasPanel->Location.Y,
				canvasPanel->Size.Width,
				canvasPanel->Size.Height);
			/*this->canvasPanel = gcnew TransparentPanel();
			this->canvasPanel->Location = System::Drawing::Point(183, 13);
			this->canvasPanel->Name = L"canvasPanel";
			this->canvasPanel->Size = System::Drawing::Size(639, 436);
			this->canvasPanel->TabIndex = 4;
			this->Controls->Add(this->canvasPanel);*/
			this->canvasPanel->BackColor = System::Drawing::Color::FromArgb(0, System::Drawing::Color::Black);
			this->canvasPanel->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(OpenGL, &COpenGL::PanelMouseDown);
			this->canvasPanel->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(OpenGL, &COpenGL::PanelMouseUp);
			this->canvasPanel->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(OpenGL, &COpenGL::PanelMouseMove);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ToolsWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ColorDialog^  dlgColor;
	protected:
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;


	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
	private: System::Windows::Forms::Button^  btnOpen;
	private: System::Windows::Forms::Button^  btnSave;



	private: System::Windows::Forms::Button^  btnNew;
			//usar para diseñador
	//private: System::Windows::Forms::Panel^  canvasPanel;
			 //usar para que se vea el canvas
	private: TransparentPanel^  canvasPanel;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::OpenFileDialog^ dlgOpenFile;




	public:
		/// <summary>
		/// Required designer variable.
		/// </summary>

		COpenGL^ OpenGL;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->dlgColor = (gcnew System::Windows::Forms::ColorDialog());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btnOpen = (gcnew System::Windows::Forms::Button());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->btnNew = (gcnew System::Windows::Forms::Button());
			//
			//
			this->canvasPanel = (gcnew TransparentPanel());
			//this->canvasPanel = (gcnew System::Windows::Forms::Panel());
			this->dlgOpenFile = (gcnew System::Windows::Forms::OpenFileDialog());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->button1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->button2, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->button3, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->button4, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->button5, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->button6, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->button7, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->button8, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->button9, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->button10, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->button11, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->button12, 1, 5);
			this->tableLayoutPanel1->Controls->Add(this->button13, 0, 6);
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 56);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 7;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28163F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28163F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28163F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28163F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28163F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28163F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.31019F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(164, 204);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(3, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 22);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Linea";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ToolsWindow::button1_OnClick);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(85, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 22);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Circulo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ToolsWindow::button2_OnClick);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(3, 32);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 22);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Elipse";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ToolsWindow::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(85, 32);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 22);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Triangulo";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &ToolsWindow::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(3, 61);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 22);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Cuadrado";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &ToolsWindow::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(85, 61);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 22);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Pentágono";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &ToolsWindow::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(3, 90);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 22);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Hexágono";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &ToolsWindow::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(85, 90);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 22);
			this->button8->TabIndex = 7;
			this->button8->Text = L"Heptágono";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &ToolsWindow::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(3, 119);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 22);
			this->button9->TabIndex = 8;
			this->button9->Text = L"SPLine";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &ToolsWindow::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(85, 119);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 22);
			this->button10->TabIndex = 9;
			this->button10->Text = L"Pencil";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &ToolsWindow::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(3, 148);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 10;
			this->button11->Text = L"Eraser";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &ToolsWindow::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(85, 148);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 23);
			this->button12->TabIndex = 11;
			this->button12->Text = L"Bottle";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &ToolsWindow::butto12_click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(3, 177);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 23);
			this->button13->TabIndex = 12;
			this->button13->Text = L"Spray";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &ToolsWindow::button13_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(15, 283);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 29);
			this->label1->TabIndex = 2;
			this->label1->Click += gcnew System::EventHandler(this, &ToolsWindow::label1_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(94, 283);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 29);
			this->label2->TabIndex = 2;
			this->label2->Click += gcnew System::EventHandler(this, &ToolsWindow::label1_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &ToolsWindow::timer1_Tick);
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 3;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33334F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33334F)));
			this->tableLayoutPanel2->Controls->Add(this->btnOpen, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->btnSave, 2, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(12, 13);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(164, 37);
			this->tableLayoutPanel2->TabIndex = 3;
			// 
			// btnOpen
			// 
			this->btnOpen->Location = System::Drawing::Point(57, 3);
			this->btnOpen->Name = L"btnOpen";
			this->btnOpen->Size = System::Drawing::Size(48, 34);
			this->btnOpen->TabIndex = 1;
			this->btnOpen->Text = L"Abrir";
			this->btnOpen->UseVisualStyleBackColor = true;
			this->btnOpen->Click += gcnew System::EventHandler(this, &ToolsWindow::btnOpen_Click);
			// 
			// btnSave
			// 
			this->btnSave->Location = System::Drawing::Point(111, 3);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(50, 34);
			this->btnSave->TabIndex = 2;
			this->btnSave->Text = L"Guardar";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &ToolsWindow::btnSave_Click);
			// 
			// btnNew
			// 
			this->btnNew->Location = System::Drawing::Point(15, 16);
			this->btnNew->Name = L"btnNew";
			this->btnNew->Size = System::Drawing::Size(48, 34);
			this->btnNew->TabIndex = 0;
			this->btnNew->Text = L"Nuevo";
			this->btnNew->UseVisualStyleBackColor = true;
			this->btnNew->Click += gcnew System::EventHandler(this, &ToolsWindow::btnNew_Click);
			// 
			// canvasPanel
			// 
			this->canvasPanel->Location = System::Drawing::Point(183, 13);
			this->canvasPanel->Name = L"canvasPanel";
			this->canvasPanel->Size = System::Drawing::Size(639, 436);
			this->canvasPanel->TabIndex = 4;
			// 
			// dlgOpenFile
			// 
			this->dlgOpenFile->Filter = L"Archivos bmp (*.bmp)|*.bmp";
			// 
			// ToolsWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(834, 461);
			this->Controls->Add(this->canvasPanel);
			this->Controls->Add(this->btnNew);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(850, 500);
			this->MinimumSize = System::Drawing::Size(850, 500);
			this->Name = L"ToolsWindow";
			this->Text = L"Paint";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 UNREFERENCED_PARAMETER(sender);
				 UNREFERENCED_PARAMETER(e);
				 OpenGL->Render();
				 OpenGL->SwapOpenGLBuffers();
	}

	private: Void PanelMouseDown(Object^ sender, MouseEventArgs^ e){
				 System::Diagnostics::Debug::WriteLine("mouse down");
	}
	private: Void PanelMouseUp(Object^ sender, MouseEventArgs^ e){
				 System::Diagnostics::Debug::WriteLine("mouse up");
	}
			 void button1_OnClick(System::Object ^sender, System::EventArgs ^e);
			 void button2_OnClick(System::Object ^sender, System::EventArgs ^e);
			 void button3_Click(System::Object^  sender, System::EventArgs^  e);
			 void button4_Click(System::Object ^sender, System::EventArgs ^e);
			 void button5_Click(System::Object ^sender, System::EventArgs ^e);
			 void button6_Click(System::Object ^sender, System::EventArgs ^e);
			 void button7_Click(System::Object ^sender, System::EventArgs ^e);
			 void button8_Click(System::Object ^sender, System::EventArgs ^e);
			 void button9_Click(System::Object ^sender, System::EventArgs ^e);
			 void button10_Click(System::Object ^sender, System::EventArgs ^e);
			 void button11_Click(System::Object ^sender, System::EventArgs ^e);
			 void butto12_click(System::Object ^sender, System::EventArgs ^e);
			 void button13_Click(System::Object^  sender, System::EventArgs^  e);
			 void btnNew_Click(System::Object ^sender, System::EventArgs ^e);
			 void btnOpen_Click(System::Object ^sender, System::EventArgs ^e);
			 void btnSave_Click(System::Object ^sender, System::EventArgs ^e);
};
}





void PaintUI::ToolsWindow::button1_OnClick(System::Object ^sender, System::EventArgs ^e)
{
	OpenGL->ChangeTool(LineToolType);
}

void PaintUI::ToolsWindow::button2_OnClick(System::Object ^sender, System::EventArgs ^e)
{
	OpenGL->ChangeTool(CircleToolType);
}

void  PaintUI::ToolsWindow::button3_Click(System::Object^  sender, System::EventArgs^  e) {
	OpenGL->ChangeTool(ElipseToolType);
}

void PaintUI::ToolsWindow::button4_Click(System::Object ^sender, System::EventArgs ^e)
{
	OpenGL->ChangeSidesNumber(3);
	OpenGL->ChangeTool(PolygonToolType);
}


void PaintUI::ToolsWindow::button5_Click(System::Object ^sender, System::EventArgs ^e)
{
	OpenGL->ChangeSidesNumber(4);
	OpenGL->ChangeTool(PolygonToolType);
}


void PaintUI::ToolsWindow::button6_Click(System::Object ^sender, System::EventArgs ^e)
{
	OpenGL->ChangeSidesNumber(5);
	OpenGL->ChangeTool(PolygonToolType);
}


void PaintUI::ToolsWindow::button7_Click(System::Object ^sender, System::EventArgs ^e)
{
	OpenGL->ChangeSidesNumber(6);
	OpenGL->ChangeTool(PolygonToolType);
}


void PaintUI::ToolsWindow::button8_Click(System::Object ^sender, System::EventArgs ^e)
{
	OpenGL->ChangeSidesNumber(7);
	OpenGL->ChangeTool(PolygonToolType);
}


void PaintUI::ToolsWindow::button9_Click(System::Object ^sender, System::EventArgs ^e)
{
	OpenGL->ChangeTool(SPLineToolType);
}


void PaintUI::ToolsWindow::button10_Click(System::Object ^sender, System::EventArgs ^e)
{
	OpenGL->ChangeTool(PencilToolType);
}


void PaintUI::ToolsWindow::button11_Click(System::Object ^sender, System::EventArgs ^e)
{
	OpenGL->ChangeTool(EraserToolType);
}


void PaintUI::ToolsWindow::butto12_click(System::Object ^sender, System::EventArgs ^e)
{
	OpenGL->ChangeTool(BottleToolType);
}

void PaintUI::ToolsWindow::button13_Click(System::Object ^sender, System::EventArgs ^e){ 
	OpenGL->ChangeTool(SprayToolType);
}

void PaintUI::ToolsWindow::btnNew_Click(System::Object ^sender, System::EventArgs ^e)
{
	auto result = System::Windows::Forms::MessageBox::Show("Esto eliminará el dibujo actual. ¿Desea continuar?", "Confirmación", System::Windows::Forms::MessageBoxButtons::YesNo);
	if (result == System::Windows::Forms::DialogResult::Yes)
		OpenGL->CleanCanvas();
}


void PaintUI::ToolsWindow::btnOpen_Click(System::Object ^sender, System::EventArgs ^e)
{
	auto result = this->dlgOpenFile->ShowDialog();
	if (result == System::Windows::Forms::DialogResult::OK){
		String^ filename = dlgOpenFile->FileName;
	}
}


void PaintUI::ToolsWindow::btnSave_Click(System::Object ^sender, System::EventArgs ^e)
{
	auto result = this->dlgOpenFile->ShowDialog();
	if (result == System::Windows::Forms::DialogResult::OK){
		String^ filename = dlgOpenFile->FileName;
	}
}
