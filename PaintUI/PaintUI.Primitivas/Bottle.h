#ifndef BOTTLE_H
#define BOTTLE_H
#include "tgraficasbasic.h"
#include <vector>
namespace PaintUIPrimitivas {
	class Bottle
	{
	public:
		int width, height;
		vector<Color> colors;
		Color defaultColor;
		Bottle();
		virtual ~Bottle();
		void Paint(Punto p, Color c);
		void Paint(Punto p);
	protected:
	private:
	};

	class BottleTool : public Bottle, public ToolControl{
	public:
		virtual void MouseUp(Punto p) override;
	};
	

}

#endif // BOTTLE_H
