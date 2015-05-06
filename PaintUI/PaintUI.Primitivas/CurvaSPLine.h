#ifndef CURVASPLINE_H
#define CURVASPLINE_H
#include "tgraficasbasic.h"
namespace PaintUIPrimitivas{
	class CurvaSPLine{
	public:
		int state = 0;
		Punto p0, p1, p2, p3;
		void setPoint(Punto p);
		void setMovePoint(Punto p);
		void draw();
		void reset();
	};

	class CurvaSPLineTool :public CurvaSPLine, public ToolControl{
	private:
		bool pressed;
	public:
		virtual void MouseDown(Punto p) override;
		virtual void MouseUp(Punto p) override;
		virtual void MouseMove(Punto p) override;
	};
}

#endif