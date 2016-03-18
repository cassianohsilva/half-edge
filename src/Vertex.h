/*
 * Vertex.h
 *
 *  Created on: 18 de mar de 2016
 *      Author: cassiano
 */

#ifndef VERTEX_H_
#define VERTEX_H_

#include "Vector.h"

class Vertex {
public:
	Vertex(const Vector3& position) : position(position) {}
	virtual ~Vertex();

	const Vector3& getPosition() const { return position; }

private:
	Vector3 position;
};

#endif /* VERTEX_H_ */
