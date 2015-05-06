#include "Stdafx.h"
#include "Spray.h"

using namespace PaintUIPrimitivas;

Spray::Spray()
{
	//ctor
}

Spray::~Spray()
{
	//dtor
}

void Spray::startPresded(){
	state = 1;
}

void Spray::endPressed(){
	state = 0;
}

void Spray::nextPoint(Punto p){
	if (puntos.empty())
		puntos.push_back(p);
	else
		puntos[0] = p;
}

bool Spray::isPressed(){
	return state == 1;
}

void Spray::draw(){
	if (DEBUG)
		cout << "-";
	if (!puntos.empty() && isPressed()){
		float r, a;
		Punto p, c = puntos[0];
		for (int i = 0; i < density; ++i){
			r = Randomradius((float)radius);
			a = RandomAngle();
			p = polar(c.x, c.y, (int)r, a);
			drawPixel(p);
		}
	}
}

void SprayTool::MouseDown(Punto p){
	startPresded();
	nextPoint(p);
}

void SprayTool::MouseMove(Punto p){
	if (isPressed()){
		nextPoint(p);
	}

}

void SprayTool::MouseUp(Punto p){
	endPressed();
}
