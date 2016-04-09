#include "painter_opengl.h"
#include "halley_gl.h"
#include "../../core/src/graphics/material.h"

void Halley::PainterOpenGL::startRender()
{
	glClear(GL_COLOR_BUFFER_BIT);
}

void Halley::PainterOpenGL::endRender()
{
	
}

void Halley::PainterOpenGL::drawSprite(Material& material, Vector2f pos)
{
	material.bind();

	// TODO
}

void Halley::PainterOpenGL::clear(Colour colour)
{
	glClearColor(colour.r, colour.g, colour.b, colour.a);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_ACCUM_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);
}