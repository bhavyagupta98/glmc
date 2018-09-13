#include "glmc.h"

// vec2f

void glmc_vec2f_from_3f(vec2f dest, vec3f src)
{
	for(int i=0;i<2;i++){
		dest[i] = src[i];
	}
}
void glmc_vec2f_from_4f(vec2f dest, vec4f src)
{
	for(int i=0;i<2;i++){
		dest[i] = src[i];
	}
}

void glmc_vec2f_copy(vec2f dest, vec2f src)
{
	for(int i=0;i<2;i++){
		dest[i] = src[i];
	}
}

float glmc_vec2f_sqrlength(vec2f vec)
{
	float sqrlength = 0;
	for (int  i=0;i<2;i++){
		sqrlength += (vec[i]*vec[i]);
	}
	return sqrlength;
}

float glmc_vec2f_length(vec2f vec)
{
	return sqrt(glmc_vec2f_sqrlength(vec));
}

int  glmc_vec2f_is_normalized(vec2f src)
{
	int magnitude = (int)glmc_vec2f_length(src);
	return magnitude;
}
void glmc_vec2f_normlize(vec2f dest, vec2f src)
{
	int magnitude = glmc_vec2f_is_normalized(src);
	for (int i=0;i<2;i++){
		dest[i] = src[i]/magnitude;
	}
}

void glmc_vec2f_add(vec2f dest, vec2f src_a, vec2f src_b) // dest = src_a + src_b;
{
	for (int i=0;i<2;i++){
		dest[i] = src_a[i] + src_b[i];
	}
}
void glmc_vec2f_add_dest(vec2f src_dest, vec2f src_b) // dest += src_a;
{
	for (int i=0;i<2;i++){
		src_dest[i] += src_b[i];
	}
}

void glmc_vec2f_sub(vec2f dest, vec2f src_a, vec2f src_b) // dest = src_a - src_b;
{
	for (int i=0;i<2;i++){
		dest[i] = src_a[i] - src_b[i];
	}
}
void glmc_vec2f_sub_dest(vec2f src_dest, vec2f src_b) // dest -= src_a;
{
	for (int i=0;i<2;i++){
		src_dest[i] -= src_b[i];
	}
}

void glmc_vec2f_mul(vec2f dest, vec2f src_a, vec2f src_b) // dest = src_a * src_b;
{
	for (int i=0;i<2;i++){
		dest[i] = src_a[i] * src_b[i];
	}
}
void glmc_vec2f_mul_dest(vec2f src_dest, vec2f src_b) // dest *= src_a;
{
	for (int i=0;i<2;i++){
		src_dest[i] *= src_b[i];
	}
}
void glmc_vec2f_mul_s(vec2f dest, vec2f src_a, float src_b) // dest = src_a * scalar
{
	for (int i=0;i<2;i++){
		dest[i] = src_a[i] * src_b;
	}
}

void glmc_vec2f_div(vec2f dest, vec2f src_a, vec2f src_b) // dest = src_a / src_b;
{
	for (int i=0;i<2;i++){
		dest[i] = src_a[i] / src_b[i];
	}
}
void glmc_vec2f_div_dest(vec2f src_dest, vec2f src_b) // dest /= src_a;
{
	for (int i=0;i<2;i++){
		src_dest[i] /= src_b[i];
	}
}
void glmc_vec2f_div_s(vec2f dest, vec2f src_a, float src_b) // dest = src_a / scalar
{
	for (int i=0;i<2;i++){
		dest[i] = src_a[i] / src_b;
	}
}

void glmc_vec2f_addadd(vec2f dest, vec2f src_a, vec2f src_b) // dest += src_a + src_b;
{
	for (int i=0;i<2;i++){
		dest[i] += (src_a[i]+src_b[i]);
	}
}
void glmc_vec2f_subadd(vec2f dest, vec2f src_a, vec2f src_b) // dest += src_a - src_b;
{
	for (int i=0;i<2;i++){
		dest[i] += (src_a[i]-src_b[i]);
	}
}

void glmc_vec2f_madd(vec2f dest, vec2f src_a, vec2f src_b) // dest += src_a * src_b;
{
	for (int i=0;i<2;i++){
		dest[i] += (src_a[i]*src_b[i]);
	}
}
void glmc_vec2f_msub(vec2f dest, vec2f src_a, vec2f src_b) // dest -= src_a * src_b;
{
	for (int i=0;i<2;i++){
		dest[i] -= (src_a[i]*src_b[i]);
	}
}

float glmc_vec2f_dot(vec2f src_a, vec2f src_b)
{
	float dot_product = 0;
	for (int i=0;i<2;i++){
		dot_product += (src_a[i]*src_b[i]);
	}
	return dot_product;
}