#include "glmc.h"

inline void glmc_mat2f_vec2f(vec2f dest, mat2f src_a, vec2f src_b)
{
	dest[0] = src_a[0][0]*src_b[0] + src_a[1][0]*src_b[1];
	dest[1] = src_a[0][1]*src_b[0] + src_a[1][1]*src_b[1];
}

inline void glmc_mat3f_vec3f(vec3f dest, mat3f src_a, vec3f src_b)
{
	dest[0] = src_a[0][0]*src_b[0] + src_a[1][0]*src_b[1] + src_a[2][0]*src_b[2];
	dest[1] = src_a[0][1]*src_b[0] + src_a[1][1]*src_b[1] + src_a[2][1]*src_b[2];
	dest[2] = src_a[0][2]*src_b[0] + src_a[1][2]*src_b[2] + src_a[2][2]*src_b[2];
	
}

inline void glmc_mat4f_vec4f(vec4f dest, mat4f src_a, vec4f src_b)
{
	dest[0] = src_a[0][0]*src_b[0] + src_a[1][0]*src_b[1] + src_a[2][0]*src_b[2] + src_a[3][0]*src_b[3];
	dest[1] = src_a[0][1]*src_b[0] + src_a[1][1]*src_b[1] + src_a[2][1]*src_b[2] + src_a[3][1]*src_b[3];
	dest[2] = src_a[0][2]*src_b[0] + src_a[1][2]*src_b[2] + src_a[2][2]*src_b[2] + src_a[3][2]*src_b[3];
	dest[3] = src_a[0][3]*src_b[0] + src_a[1][3]*src_b[3] + src_a[2][3]*src_b[2] + src_a[3][3]*src_b[3];
}

