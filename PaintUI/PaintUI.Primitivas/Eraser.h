#ifndef ERASER_H
#define ERASER_H

#include "Pencil.h"

namespace PaintUIPrimitivas{
	class Eraser :public Pencil{
	public:
		Eraser();
		virtual ~Eraser();
		int tam = 10;
		virtual void draw();

	};

	class EraserTool : public Eraser, public ToolControl{
		private:
			bool pressed = FALSE;
		public:
			virtual void MouseDown(Punto p) override;
			virtual void MouseUp(Punto p) override;
			virtual void MouseMove(Punto p) override;
			virtual void draw() override;
	};
}


#endif // ERASER_H
