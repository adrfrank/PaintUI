#ifndef PENCIL_H
#define PENCIL_H
#include <vector>
#include "tgraficasbasic.h"
using namespace std;

namespace PaintUIPrimitivas{
	class Pencil {
	protected:
		vector<Punto> puntos;
	public:
		Pencil();
		virtual ~Pencil();
		virtual void draw();
		virtual void nextPoint(Punto p);
		virtual void newLine(Punto p);
	};


	class PencilTool : public Pencil, public ToolControl{
	private:
		bool pressed=FALSE;
	public:
		virtual void MouseDown(Punto p) override;
		virtual void MouseUp(Punto p) override;
		virtual void MouseMove(Punto p) override;
	};
}

#endif // PENCIL_H
