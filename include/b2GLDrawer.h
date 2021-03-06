/*
  ==============================================================================

   This file is part of the LUBYK project (http://lubyk.org)
   Copyright (c) 2007-2011 by Gaspard Bucher (http://teti.ch).

  ------------------------------------------------------------------------------

   Permission is hereby granted, free of charge, to any person obtaining a copy
   of this software and associated documentation files (the "Software"), to deal
   in the Software without restriction, including without limitation the rights
   to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
   copies of the Software, and to permit persons to whom the Software is
   furnished to do so, subject to the following conditions:

   The above copyright notice and this permission notice shall be included in
   all copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
   OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
   THE SOFTWARE.

  ==============================================================================
*/
#ifndef LUBYK_INCLUDE_B2_DRAWER_H_
#define LUBYK_INCLUDE_B2_DRAWER_H_

#include "Box2D/Box2D.h"


class b2GLDrawer : public b2Draw
{
	public:
		void DrawPolygon(const b2Vec2* vertices,
		                 int32 vertexCount,
		                 const b2Color& color);

		void DrawSolidPolygon(const b2Vec2* vertices,
		                      int32 vertexCount,
		                      const b2Color& color);

		void DrawCircle(const b2Vec2& center,
		                float32 radius,
		                const b2Color& color);

		void DrawSolidCircle(const b2Vec2& center,
		                     float32 radius,
		                     const b2Vec2& axis,
		                     const b2Color& color);

		void DrawSegment(const b2Vec2& p1,
		                 const b2Vec2& p2,
		                 const b2Color& color);

		void DrawTransform(const b2Transform& xf);
};

#endif // LUBYK_INCLUDE_B2_DRAWER_H_


