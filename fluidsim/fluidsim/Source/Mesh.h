/*	
	Make sure faces are triangulated in Maya.
*/

#ifndef MESH_H_INCLUDED
#define MESH_H_INCLUDED

#include <vector>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include "math_headers.h"
#include "openGL_headers.h"

class Mesh
{
public:
	Mesh();
	~Mesh();
	int readOBJ(const char* file);
	int writeOBJ(const char* file);
	void draw(const VBO& vbos);
	void scale(float scale); // for scaling the imported obj file to appropriate size
	void setColor(glm::vec3 color); // set color
private:
	std::vector<glm::vec3> vertices;
	std::vector<glm::vec3> normals;
	std::vector<unsigned short> indices;
	std::vector<glm::vec3> colors;
};

#endif