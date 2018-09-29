#include "glmc.h"
// vec4f

inline void glmc_vec4f_from_2f(vec4f dest, vec2f src_a, float src_b, float src_c)
{
	dest[0] = src_a[0];
	dest[1] = src_a[1];
	dest[2] = src_b;
	dest[3] = src_c;
}

inline void glmc_vec4f_from_3f(vec4f dest, vec3f src_a, float src_b)
{
	dest[0] = src_a[0];
	dest[1] = src_a[1];
	dest[2] = src_a[2];
	dest[3] = src_b;
}

inline void glmc_vec4f_copy(vec4f dest, vec4f src)
{
	dest[0] = src[0];
	dest[1] = src[1];
	dest[2] = src[2];
	dest[3] = src[3];
}

inline float glmc_vec4f_sqrlength(vec4f vec)
{
	float sqrlength = 0;
	for (int  i=0;i<4;i++){
		sqrlength += (vec[i]*vec[i]);
	}
	return sqrlength;
}
inline float glmc_vec4f_length(vec4f vec)
{
	return sqrt(glmc_vec4f_sqrlength(vec));
}

inline int  glmc_vec4f_is_normalized(vec4f src){
	int magnitude = (int)glmc_vec4f_length(src);
	return magnitude;
}

inline void glmc_vec4f_normlize(vec4f dest, vec4f src)
{
	int magnitude = glmc_vec4f_is_normalized(src);
	for (int i=0;i<4;i++){
		dest[i] = src[i]/magnitude;
	}
}

inline void glmc_vec4f_add(vec4f dest, vec4f src_a, vec4f src_b) // dest = src_a + src_b;
{
	for (int i=0;i<4;i++){
		dest[i] = src_a[i] + src_b[i];
	}
}

inline void glmc_vec4f_add_dest(vec4f src_dest, vec4f src_b) // dest += src_a;
{
	for (int i=0;i<4;i++){
		src_dest[i] += src_b[i];
	}
}

inline void glmc_vec4f_sub(vec4f dest, vec4f src_a, vec4f src_b) // dest = src_a - src_b;
{
	for (int i=0;i<4;i++){
		dest[i] = src_a[i] - src_b[i];
	}
}

inline void glmc_vec4f_sub_dest(vec4f src_dest, vec4f src_b) // dest -= src_a;
{
	for (int i=0;i<4;i++){
		src_dest[i] -= src_b[i];
	}
}

inline void glmc_vec4f_mul(vec4f dest, vec4f src_a, vec4f src_b) // dest = src_a * src_b;
{
	for (int i=0;i<4;i++){
		dest[i] = src_a[i] * src_b[i];
	}
}

inline void glmc_vec4f_mul_dest(vec4f src_dest, vec4f src_b) // dest *= src_a;
{
	for (int i=0;i<4;i++){
		src_dest[i] *= src_b[i];
	}
}

inline void glmc_vec4f_mul_s(vec4f dest, vec4f src_a, float src_b) // dest = src_a * scalar
{
	for (int i=0;i<4;i++){
		dest[i] = src_a[i] * src_b;
	}
}

inline void glmc_vec4f_div(vec4f dest, vec4f src_a, vec4f src_b) // dest = src_a / src_b;
{
	for (int i=0;i<4;i++){
		dest[i] = src_a[i] / src_b[i];
	}
}

inline void glmc_vec4f_div_dest(vec4f src_dest, vec4f src_b) // dest /= src_a;
{
	for (int i=0;i<4;i++){
		src_dest[i] /= src_b[i];
	}
}

inline void glmc_vec4f_div_s(vec4f dest, vec4f src_a, float src_b) // dest = src_a / scalar
{
	for (int i=0;i<4;i++){
		dest[i] = src_a[i] / src_b;
	}
}

inline void glmc_vec4f_addadd(vec4f dest, vec4f src_a, vec4f src_b) // dest += src_a + src_b;
{
	for (int i=0;i<4;i++){
		dest[i] += (src_a[i]+src_b[i]);
	}
}

inline void glmc_vec4f_subadd(vec4f dest, vec4f src_a, vec4f src_b) // dest += src_a - src_b;
{
	for (int i=0;i<4;i++){
		dest[i] += (src_a[i]-src_b[i]);
	}
}

inline void glmc_vec4f_madd(vec4f dest, vec4f src_a, vec4f src_b) // dest += src_a * src_b;
{
	for (int i=0;i<4;i++){
		dest[i] += (src_a[i]*src_b[i]);
	}
}

inline void glmc_vec4f_msub(vec4f dest, vec4f src_a, vec4f src_b) // dest -= src_a * src_b;
{
	for (int i=0;i<4;i++){
		dest[i] -= (src_a[i]*src_b[i]);
	}
}

inline float glmc_vec4f_dot(vec4f src_a, vec4f src_b)
{
	float dot_product = 0;
	for (int i=0;i<4;i++){
		dot_product += (src_a[i]*src_b[i]);
	}
	return dot_product;
}