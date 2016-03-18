/*
 * Vector.h
 *
 *  Created on: 18 de mar de 2016
 *      Author: cassiano
 */

#ifndef VECTOR_H_
#define VECTOR_H_

class Vector3 {
public:
	Vector3() :
			x(0), y(0), z(0) {
	}

	Vector3(float x, float y, float z) :
			x(x), y(y), z(z) {
	}

	friend const Vector3 operator+(const Vector3& lvec, const Vector3& rvec) {
		return Vector3(lvec.x + rvec.x, lvec.y + rvec.y, lvec.z + rvec.z);
	}
	friend const Vector3 operator-(const Vector3& lvec, const Vector3& rvec) {
		return Vector3(lvec.x - rvec.x, lvec.y - rvec.y, lvec.z - rvec.z);
	}
	friend const Vector3 operator*(const Vector3& lvec, float value) {
		return Vector3(lvec.x * value, lvec.y * value, lvec.z * value);
	}

	friend const Vector3 operator+=(Vector3& lvec, const Vector3& rvec) {
		lvec.x += rvec.x, lvec.y += rvec.y, lvec.z += rvec.z;
		return lvec;
	}
	friend const Vector3 operator-=(Vector3& lvec, const Vector3& rvec) {
		lvec.x -= rvec.x, lvec.y -= rvec.y, lvec.z -= rvec.z;
		return lvec;
	}
	friend const Vector3 operator*=(Vector3& lvec, float value) {
		lvec.x *= value, lvec.y *= value, lvec.z *= value;
		return lvec;
	}

	float getX() const {
		return x;
	}
	float getY() const {
		return y;
	}
	float getZ() const {
		return z;
	}

private:
	float x, y, z;
};

#endif /* VECTOR_H_ */
