#include "stdafx.h"
#include "Bottle.h"
#include <queue>
#include <GL\GL.h>

using namespace PaintUIPrimitivas;

Bottle::Bottle()
{
	//ctor
	width = height = 400;
	defaultColor.r = 255;
	defaultColor.g = 0;
	defaultColor.b = 0;
}

Bottle::~Bottle()
{
	//dtor
}

void Bottle::Paint(Punto p, Color c){
	defaultColor = c;
	Paint(p);
}

void Bottle::Paint(Punto p){
	p.y = height - p.y -1;
	//width = 600;
	Color colors[300000l];
	long len = width*height, ind;
	/*colors = new Color[len];*/
	glReadPixels(0, 0, width, height, GL_RGB, GL_UNSIGNED_BYTE, colors);
	ind = (long)p.y*(long)width + (long)p.x;
	Color fondo = colors[ind];
	queue<Punto> colapuntos;
	colapuntos.push(p);

	while (colapuntos.size() > 0){
		Punto punto = colapuntos.front();
		colapuntos.pop();
		long ind = (long)punto.y*(long)width + (long)punto.x;
		Color c = colors[ind];
		if (fondo == c && c != defaultColor){
			colors[ind] = defaultColor;//pintar
			punto.x++;
			if (punto.x >= 0 && punto.x < width && punto.y < height && punto.y >= 0){
				colapuntos.push(punto);
			}
			punto.x -= 2;
			if (punto.x >= 0 && punto.x < width && punto.y < height && punto.y >= 0){
				colapuntos.push(punto);
			}
			punto.x++;
			punto.y++;
			if (punto.x >= 0 && punto.x < width  && punto.y < height && punto.y >= 0){
				colapuntos.push(punto);
			}
			punto.y -= 2;
			if (punto.x >= 0 && punto.x < width  && punto.y < height && punto.y >= 0){
				colapuntos.push(punto);
			}
		}
	}
	glDrawPixels(width, height, GL_RGB, GL_UNSIGNED_BYTE, colors);
}


void BottleTool::MouseUp(Punto p){
	Paint(p);
}