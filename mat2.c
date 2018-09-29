#include "glmc.h"

inline float glmc_mat2f_determinant(mat2f dest)
{
	float disc;
	disc = (dest[0][0]*dest[1][1] - dest[1][0]*dest[0][1]);
	return disc;
}

inline void glmc_mat2f_add(mat2f dest, mat2f src_a, mat2f src_b)
{
	dest[0][0] = src_a[0][0] + src_b[0][0];
	dest[0][1] = src_a[0][1] + src_b[0][1];
	dest[1][0] = src_a[1][0] + src_b[1][0];
	dest[1][1] = src_a[1][1] + src_b[1][1];
}

inline void glmc_mat2f_add_dest(mat2f dest, mat2f src_b)
{
	dest[0][0] += src_b[0][0];
	dest[0][1] += src_b[0][1];
	dest[1][0] += src_b[1][0];
	dest[1][1] += src_b[1][1];
}

inline void glmc_mat2f_sub(mat2f dest, mat2f src_a, mat2f src_b)
{
	dest[0][0] = src_a[0][0] - src_b[0][0];
	dest[0][1] = src_a[0][1] - src_b[0][1];
	dest[1][0] = src_a[1][0] - src_b[1][0];
	dest[1][1] = src_a[1][1] - src_b[1][1];
}

inline void glmc_mat2f_sub_dest(mat2f dest, mat2f src_b)
{
	dest[0][0] -= src_b[0][0];
	dest[0][1] -= src_b[0][1];
	dest[1][0] -= src_b[1][0];
	dest[1][1] -= src_b[1][1];
}

inline void glmc_mat2f_mul(mat2f dest, mat2f src_a, mat2f src_b)
{
	dest[0][0] = (src_a[0][0]*src_b[0][0] + src_a[1][0]*src_b[0][1]);
	dest[0][1] = (src_a[0][1]*src_b[0][0] + src_a[1][1]*src_b[0][1]);
	dest[1][0] = (src_a[0][0]*src_b[1][0] + src_a[1][0]*src_b[1][1]);
	dest[1][1] = (src_a[0][1]*src_b[1][0] + src_a[1][1]*src_b[1][1]);
}

inline void glmc_mat2f_mul_dest(mat2f dest, mat2f src_b)
{
	mat2f temp;

	temp[0][0] = dest[0][0];
	temp[0][1] = dest[0][1];
	temp[1][0] = dest[1][0];
	temp[1][1] = dest[1][1];

	dest[0][0] = (temp[0][0]*src_b[0][0] + temp[1][0]*src_b[0][1]);
	dest[0][1] = (temp[0][1]*src_b[0][0] + temp[1][1]*src_b[0][1]);
	dest[1][0] = (temp[0][0]*src_b[1][0] + temp[1][0]*src_b[1][1]);
	dest[1][1] = (temp[0][1]*src_b[1][0] + temp[1][1]*src_b[1][1]);
}

inline void glmc_mat2f_mul_s(mat2f dest, mat2f src_a, float src_b)
{
	dest[0][0] = src_a[0][0] * src_b;
	dest[0][1] = src_a[0][1] * src_b;
	dest[1][0] = src_a[1][0] * src_b;
	dest[1][1] = src_a[1][1] * src_b;
}

inline void glmc_mat2f_div(mat2f dest, mat2f src_a, mat2f src_b)
{
	mat2f src_b_inv;
	glmc_mat2f_inverse(src_b_inv, src_b);
	glmc_mat2f_mul(dest, src_a, src_b_inv);
}

inline void glmc_mat2f_div_dest(mat2f dest, mat2f src_b)
{
	mat2f temp;
	temp[0][0] = dest[0][0];
	temp[0][1] = dest[0][1];
	temp[1][0] = dest[1][0];
	temp[1][1] = dest[1][1];

	mat2f inv;
	glmc_mat2f_inverse(inv, src_b);
	glmc_mat2f_mul(dest, temp, inv);	
}

inline void glmc_mat2f_div_s(mat2f dest, mat2f src_a, float src_b)
{
	dest[1][1] = src_a[1][1] / src_b;
	dest[1][0] = src_a[1][0] / src_b;
	dest[0][1] = src_a[0][1] / src_b;
	dest[0][0] = src_a[0][0] / src_b;
}

inline void glmc_mat2f_madd(mat2f dest, mat2f src_a, mat2f src_b)
{
	dest[0][0] = dest[0][0] + (src_a[0][0]*src_b[0][0] + src_a[1][0]*src_b[0][1]);
	dest[0][1] = dest[0][1] + (src_a[0][1]*src_b[0][0] + src_a[1][1]*src_b[0][1]);

	dest[1][0] = dest[1][0] + (src_a[0][0]*src_b[1][0] + src_a[1][0]*src_b[1][1]);
	dest[1][1] = dest[1][1] + (src_a[0][1]*src_b[1][0] + src_a[1][1]*src_b[1][1]);
}

inline void glmc_mat2f_msub(mat2f dest, mat2f src_a, mat2f src_b)
{
	dest[0][0] = dest[0][0] - (src_a[0][0]*src_b[0][0] + src_a[1][0]*src_b[0][1]);
	dest[0][1] = dest[0][1] - (src_a[0][1]*src_b[0][0] + src_a[1][1]*src_b[0][1]);
	dest[1][0] = dest[1][0] - (src_a[0][0]*src_b[1][0] + src_a[1][0]*src_b[1][1]);
	dest[1][1] = dest[1][1] - (src_a[0][1]*src_b[1][0] + src_a[1][1]*src_b[1][1]);
}

inline void glmc_mat2f_transpose(mat2f dest, mat2f src)
{
	dest[0][0] = src[0][0];
	dest[0][1] = src[1][0];
	dest[1][0] = src[0][1];
	dest[1][1] = src[1][1];
}

inline void glmc_mat2f_transpose_dest(mat2f dest)
{
	float temp;
	temp = dest[0][1];
	dest[0][1] = dest[1][0];
	dest[1][0] = temp;
}

inline void glmc_mat2f_inverse(mat2f dest, mat2f src)
{
	float inv;
	inv = 1.0f/(glmc_mat2f_determinant(src));
	dest[0][0] = src[1][1]*inv;
	dest[0][1] = -1.0f*src[0][1]*inv;
	dest[1][0] = -1.0f*src[1][0]*inv;
	dest[1][1] = src[0][0]*inv;;	
}

inline void glmc_mat2f_normlize(mat2f dest, mat2f src)
{
	float inv;
	inv = glmc_mat2f_determinant(src);

	dest[0][0] = src[0][0]/inv;
	dest[0][1] = src[0][1]/inv;
	dest[1][0] = src[1][0]/inv;
	dest[1][1] = src[1][1]/inv;
}

inline void glmc_mat2f_normlize_dest(mat2f dest)
{
	float inv;
	inv = glmc_mat2f_determinant(dest);

	dest[0][0] = dest[0][0]*inv;
	dest[0][1] = dest[0][1]*inv;
	dest[1][0] = dest[1][0]*inv;
	dest[1][1] = dest[1][1]*inv;
}

inline void glmc_mat2f_translation(mat2f dest, float t)
{
	dest[0][0] = 1.0;
	dest[0][1] = 0;
	dest[1][0] = t;
	dest[1][1] = 1.0;
}

inline void glmc_mat2f_rotation(mat2f dest, float theta)
{
	float c = cos(theta);
	float s = sin(theta);

	dest[0][0] = c;
	dest[0][1] = s;
	dest[1][0] = -1*s;
	dest[1][1] = c;
}

inline void glmc_mat2f_scale(mat2f dest, float x)
{
	dest[0][0] = x ;
	dest[0][1] = 0;
	dest[1][0] = 0;
	dest[1][1] = 1;
}