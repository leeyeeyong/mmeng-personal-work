/* Start Header -------------------------------------------------------
Copyright (C) 2011 DigiPen Institute of Technology.
Reproduction or disclosure of this file or its contents without the prior written consent of
DigiPen Institute of Technology is prohibited.

File Name: line.hpp
Purpose: Prototypes for a line class to contain information needed to draw lines.
Language: C++ (MSVC, G++)
Platform: Windows, Linux
Project: marcus.meng_cs200_1
Author: Marcus Meng (marcus.meng) 80002709
Creation date: 2011-05-18
- End Header --------------------------------------------------------*/

#ifndef LINE_H
#define LINE_H

#include "matrix.hpp"

class Line
{
	public:
		Line();
		Line(const Matrix<3, 3, float> &first, const Matrix<3, 3, float> &second);
		~Line();
		
		void draw(const Matrix<3, 3, float>& toViewport);

	private:
		Matrix<3, 3, float> myStart;
		Matrix<3, 3, float> myEnd;
};

#endif // LINE_H

