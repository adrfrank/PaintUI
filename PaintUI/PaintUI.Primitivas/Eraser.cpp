#include "Stdafx.h"
#include "Pencil.h"
#include "Eraser.h"

using namespace PaintUIPrimitivas;

Eraser::Eraser()
{
	//ctor
}

Eraser::~Eraser()
{
	//dtor
}

void Eraser::draw(){
	if (puntos.size() >= 2){
		unsigned int i;
		Punto p0, p1;
		for (i = 0; i < puntos.size() - 1; i++){
			p0 = puntos[i];
			p1 = puntos[i + 1];
			dibujarLineaCuadrados(p0, p1, FALSE);
		}
	}
}

void EraserTool::MouseDown(Punto p){
	pressed = TRUE;
	newLine(p);
}

void EraserTool::MouseMove(Punto p){
	if (pressed){
		nextPoint(p);
	}
}

void EraserTool::MouseUp(Punto p){
	pressed = FALSE;

}


void EraserTool::draw(){
	if (pressed)
		Eraser::draw();
}