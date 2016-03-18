/*
 * HalfEdge.h
 *
 *  Created on: 18 de mar de 2016
 *      Author: cassiano
 */

#ifndef HALFEDGE_H_
#define HALFEDGE_H_

#include "Vertex.h"
#include "Triangle.h"

class HalfEdge {
public:
	HalfEdge();
	virtual ~HalfEdge();

private:

	Vertex* origin;

	HalfEdge* next;
	HalfEdge* previous;
	HalfEdge* opposite;

	Triangle* triangle;
};

#endif /* HALFEDGE_H_ */
