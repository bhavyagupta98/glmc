#include "glmc.h"


inline void glmc_mat3f_add(mat3f dest, mat3f src_a, mat3f src_b)
{
	dest[0][0] = src_a[0][0] + src_b[0][0];
	dest[0][1] = src_a[0][1] + src_b[0][1];
	dest[0][2] = src_a[0][2] + src_b[0][2];
	dest[1][0] = src_a[1][0] + src_b[1][0];
	dest[1][1] = src_a[1][1] + src_b[1][1];
	dest[1][2] = src_a[1][2] + src_b[1][2];
	dest[2][0] = src_a[2][0] + src_b[2][0];
	dest[2][1] = src_a[2][1] + src_b[2][1];
	dest[2][2] = src_a[2][2] + src_b[2][2];
}

inline void glmc_mat3f_add_dest(mat3f dest, mat3f src_b)
{
	dest[0][0] = dest[0][0] + src_b[0][0];
	dest[0][1] = dest[0][1] + src_b[0][1];
	dest[0][2] = dest[0][2] + src_b[0][2];
	dest[1][0] = dest[1][0] + src_b[1][0];
	dest[1][1] = dest[1][1] + src_b[1][1];
	dest[1][2] = dest[1][2] + src_b[1][2];
	dest[2][0] = dest[2][0] + src_b[2][0];
	dest[2][1] = dest[2][1] + src_b[2][1];
	dest[2][2] = dest[2][2] + src_b[2][2];
}

inline void glmc_mat3f_sub(mat3f dest, mat3f src_a, mat3f src_b)
{
	dest[0][0] = src_a[0][0] - src_b[0][0];
	dest[0][1] = src_a[0][1] - src_b[0][1];
	dest[0][2] = src_a[0][2] - src_b[0][2];
	dest[1][0] = src_a[1][0] - src_b[1][0];
	dest[1][1] = src_a[1][1] - src_b[1][1];
	dest[1][2] = src_a[1][2] - src_b[1][2];
	dest[2][0] = src_a[2][0] - src_b[2][0];
	dest[2][1] = src_a[2][1] - src_b[2][1];
	dest[2][2] = src_a[2][2] - src_b[2][2];
}
inline void glmc_mat3f_sub_dest(mat3f dest, mat3f src_b)
{
	dest[0][0] = dest[0][0] - src_b[0][0];
	dest[0][1] = dest[0][1] - src_b[0][1];
	dest[0][2] = dest[0][2] - src_b[0][2];
	dest[1][0] = dest[1][0] - src_b[1][0];
	dest[1][1] = dest[1][1] - src_b[1][1];
	dest[1][2] = dest[1][2] - src_b[1][2];
	dest[2][0] = dest[2][0] - src_b[2][0];
	dest[2][1] = dest[2][1] - src_b[2][1];
	dest[2][2] = dest[2][2] - src_b[2][2];
}

inline void glmc_mat3f_mul(mat3f dest, mat3f src_a, mat3f src_b)
{
	dest[0][0] = (src_a[0][0]*src_b[0][0] + src_a[1][0]*src_b[0][1] + src_a[2][0]*src_b[0][2]);
	dest[0][1] = (src_a[0][1]*src_b[0][0] + src_a[1][1]*src_b[0][1] + src_a[2][1]*src_b[0][2]);
	dest[0][2] = (src_a[0][2]*src_b[0][0] + src_a[1][2]*src_b[0][1] + src_a[2][2]*src_b[0][2]);
	dest[1][0] = (src_a[0][0]*src_b[1][0] + src_a[1][0]*src_b[1][1] + src_a[2][0]*src_b[1][2]);
	dest[1][1] = (src_a[0][1]*src_b[1][0] + src_a[1][1]*src_b[1][1] + src_a[2][1]*src_b[1][2]);
	dest[1][2] = (src_a[0][2]*src_b[1][0] + src_a[1][2]*src_b[1][1] + src_a[2][2]*src_b[1][2]);
	dest[2][0] = (src_a[0][0]*src_b[2][0] + src_a[1][0]*src_b[2][1] + src_a[2][0]*src_b[2][2]);
	dest[2][1] = (src_a[0][1]*src_b[2][0] + src_a[1][1]*src_b[2][1] + src_a[2][1]*src_b[2][2]);
	dest[2][2] = (src_a[0][2]*src_b[2][0] + src_a[1][2]*src_b[2][1] + src_a[2][2]*src_b[2][2]);
}

inline void glmc_mat3f_mul_dest(mat3f dest, mat3f src_b)
{
	mat3f temp;

	temp[0][0] = dest[0][0];
	temp[0][1] = dest[0][1];
	temp[0][2] = dest[0][2];
	temp[1][0] = dest[1][0];
	temp[1][1] = dest[1][1];
	temp[1][2] = dest[1][2];
	temp[2][0] = dest[2][0];
	temp[2][1] = dest[2][1];
	temp[2][2] = dest[2][2];

	dest[0][0] = (temp[0][0]*src_b[0][0] + temp[1][0]*src_b[0][1] + temp[2][0]*src_b[0][2]);
	dest[0][1] = (temp[0][1]*src_b[0][0] + temp[1][1]*src_b[0][1] + temp[2][1]*src_b[0][2]);
	dest[0][2] = (temp[0][2]*src_b[0][0] + temp[1][2]*src_b[0][1] + temp[2][2]*src_b[0][2]);
	dest[1][0] = (temp[0][0]*src_b[1][0] + temp[1][0]*src_b[1][1] + temp[2][0]*src_b[1][2]);
	dest[1][1] = (temp[0][1]*src_b[1][0] + temp[1][1]*src_b[1][1] + temp[2][1]*src_b[1][2]);
	dest[1][2] = (temp[0][2]*src_b[1][0] + temp[1][2]*src_b[1][1] + temp[2][2]*src_b[1][2]);
	dest[2][0] = (temp[0][0]*src_b[2][0] + temp[1][0]*src_b[2][1] + temp[2][0]*src_b[2][2]);
	dest[2][1] = (temp[0][1]*src_b[2][0] + temp[1][1]*src_b[2][1] + temp[2][1]*src_b[2][2]);
	dest[2][2] = (temp[0][2]*src_b[2][0] + temp[1][2]*src_b[2][1] + temp[2][2]*src_b[2][2]);
}

inline void glmc_mat3f_mul_s(mat3f dest, mat3f src_a, float src_b)
{
	dest[0][0] = src_a[0][0] * src_b;
	dest[0][1] = src_a[0][1] * src_b;
	dest[0][2] = src_a[0][2] * src_b;
	dest[1][0] = src_a[1][0] * src_b;
	dest[1][1] = src_a[1][1] * src_b;
	dest[1][2] = src_a[1][2] * src_b;
	dest[2][0] = src_a[2][0] * src_b;
	dest[2][1] = src_a[2][1] * src_b;
	dest[2][2] = src_a[2][2] * src_b;
}

inline void glmc_mat3f_div(mat3f dest, mat3f src_a, mat3f src_b)
{
	mat3f inv;
	glmc_mat3f_inverse(inv, src_b);
	glmc_mat3f_mul(dest, src_a, inv);
}
inline void glmc_mat3f_div_dest(mat3f dest, mat3f src_b)
{
	mat3f temp;

	temp[0][0] = dest[0][0];
	temp[0][1] = dest[0][1];
	temp[0][2] = dest[0][2];
	temp[1][0] = dest[1][0];
	temp[1][1] = dest[1][1];
	temp[1][2] = dest[1][2];
	temp[2][0] = dest[2][0];
	temp[2][1] = dest[2][1];
	temp[2][2] = dest[2][2];

	mat3f inv;
	glmc_mat3f_inverse(inv, src_b);
	glmc_mat3f_mul(dest, temp, inv);	
}

inline void glmc_mat3f_div_s(mat3f dest, mat3f src_a, float src_b)
{
	
	dest[0][0] = src_a[0][0] / src_b;
	dest[0][1] = src_a[0][1] / src_b;
	dest[0][2] = src_a[0][2] / src_b;
	dest[1][0] = src_a[1][0] / src_b;
	dest[1][1] = src_a[1][1] / src_b;
	dest[1][2] = src_a[1][2] / src_b;
	dest[2][0] = src_a[2][0] / src_b;
	dest[2][1] = src_a[2][1] / src_b;
	dest[2][2] = src_a[2][2] / src_b;
}

inline void glmc_mat3f_madd(mat3f dest, mat3f src_a, mat3f src_b)
{
	dest[0][0] = dest[0][0] + (src_a[0][0]*src_b[0][0] + src_a[1][0]*src_b[0][1] + src_a[2][0]*src_b[0][2]);
	dest[0][1] = dest[0][1] + (src_a[0][1]*src_b[0][0] + src_a[1][1]*src_b[0][1] + src_a[2][1]*src_b[0][2]);
	dest[0][2] = dest[0][2] + (src_a[0][2]*src_b[0][0] + src_a[1][2]*src_b[0][1] + src_a[2][2]*src_b[0][2]);

	dest[1][0] = dest[1][0] + (src_a[0][0]*src_b[1][0] + src_a[1][0]*src_b[1][1] + src_a[2][0]*src_b[1][2]);
	dest[1][1] = dest[1][1] + (src_a[0][1]*src_b[1][0] + src_a[1][1]*src_b[1][1] + src_a[2][1]*src_b[1][2]);
	dest[1][2] = dest[1][2] + (src_a[0][2]*src_b[1][0] + src_a[1][2]*src_b[1][1] + src_a[2][2]*src_b[1][2]);

	dest[2][0] = dest[2][0] + (src_a[0][0]*src_b[2][0] + src_a[1][0]*src_b[2][1] + src_a[2][0]*src_b[2][2]);
	dest[2][1] = dest[2][1] + (src_a[0][1]*src_b[2][0] + src_a[1][1]*src_b[2][1] + src_a[2][1]*src_b[2][2]);
	dest[2][2] = dest[2][2] + (src_a[0][2]*src_b[2][0] + src_a[1][2]*src_b[2][1] + src_a[2][2]*src_b[2][2]);
}

inline void glmc_mat3f_msub(mat3f dest, mat3f src_a, mat3f src_b)
{
	dest[0][0] = dest[0][0] - (src_a[0][0]*src_b[0][0] + src_a[1][0]*src_b[0][1] + src_a[2][0]*src_b[0][2]);
	dest[0][1] = dest[0][1] - (src_a[0][1]*src_b[0][0] + src_a[1][1]*src_b[0][1] + src_a[2][1]*src_b[0][2]);
	dest[0][2] = dest[0][2] - (src_a[0][2]*src_b[0][0] + src_a[1][2]*src_b[0][1] + src_a[2][2]*src_b[0][2]);
	dest[1][0] = dest[1][0] - (src_a[0][0]*src_b[1][0] + src_a[1][0]*src_b[1][1] + src_a[2][0]*src_b[1][2]);
	dest[1][1] = dest[1][1] - (src_a[0][1]*src_b[1][0] + src_a[1][1]*src_b[1][1] + src_a[2][1]*src_b[1][2]);
	dest[1][2] = dest[1][2] - (src_a[0][2]*src_b[1][0] + src_a[1][2]*src_b[1][1] + src_a[2][2]*src_b[1][2]);
	dest[2][0] = dest[2][0] - (src_a[0][0]*src_b[2][0] + src_a[1][0]*src_b[2][1] + src_a[2][0]*src_b[2][2]);
	dest[2][1] = dest[2][1] - (src_a[0][1]*src_b[2][0] + src_a[1][1]*src_b[2][1] + src_a[2][1]*src_b[2][2]);
	dest[2][2] = dest[2][2] - (src_a[0][2]*src_b[2][0] + src_a[1][2]*src_b[2][1] + src_a[2][2]*src_b[2][2]);
}

inline void glmc_mat3f_transpose(mat3f dest, mat3f src)
{
	dest[0][0] = src[0][0];
	dest[0][1] = src[1][0];
	dest[0][2] = src[2][0];
	dest[1][0] = src[0][1];
	dest[1][1] = src[1][1];
	dest[1][2] = src[2][1];
	dest[2][0] = src[0][2];
	dest[2][1] = src[1][2];
	dest[2][2] = src[2][2];
}

inline void glmc_mat3f_transpose_dest(mat3f dest)
{
	float temp1,temp2,temp3;
	temp1 = dest[0][1];
	temp2 = dest[0][2];
	temp3 = dest[1][2];
	dest[0][1] = dest[1][0];
	dest[1][0] = temp1;
	dest[0][2] = dest[2][0];
	dest[2][0] = temp2;
	dest[1][2] = dest[2][1];
	dest[2][1] = temp3;
}

inline float glmc_mat3f_determinant(mat3f dest)
{
	float disc;
	disc = + (dest[0][0]*((dest[1][1]*dest[2][2])-(dest[2][1]*dest[1][2]))) 
				- (dest[1][0]*((dest[0][1]*dest[2][2])-(dest[2][1]*dest[0][2]))) 
				+ (dest[2][0]*((dest[0][1]*dest[1][2])-(dest[1][1]*dest[0][2])));
	return disc;
}

inline void glmc_mat3f_inverse(mat3f dest, mat3f src)
{
	float disc;
	disc = 1.0f/(glmc_mat3f_determinant(src));

	dest[0][0] = (src[1][1]*src[2][2] - src[2][1]*src[1][2])*disc;
	dest[0][1] = -1.0f*(src[0][1]*src[2][2] - src[2][1]*src[0][2])*disc;
	dest[0][2] = (src[0][1]*src[1][2] - src[1][1]*src[0][2])*disc;
	dest[1][0] = -1.0f*(src[1][0]*src[2][2] - src[2][0]*src[1][2])*disc;
	dest[1][1] = (src[0][0]*src[2][2] - src[2][0]*src[0][2])*disc;
	dest[1][2] = -1.0f*(src[0][0]*src[1][2] - src[1][0]*src[0][2])*disc;
	dest[2][0] = (src[1][0]*src[2][1] - src[2][0]*src[1][1])*disc;
	dest[2][1] = -1.0f*(src[0][0]*src[2][1] - src[2][0]*src[0][1])*disc;
	dest[2][2] = (src[0][0]*src[1][1] - src[1][0]*src[0][1])*disc;	
}

inline void glmc_mat3f_normlize(mat3f dest, mat3f src)
{
	float disc;
	disc = glmc_mat3f_determinant(src);

	dest[0][0] = src[0][0]/disc;
	dest[0][1] = src[0][1]/disc;
	dest[0][2] = src[0][2]/disc;
	dest[1][0] = src[1][0]/disc;
	dest[1][1] = src[1][1]/disc;
	dest[1][2] = src[1][2]/disc;
	dest[2][0] = src[2][0]/disc;
	dest[2][1] = src[2][1]/disc;
	dest[2][2] = src[2][2]/disc;
}

inline void glmc_mat3f_normlize_dest(mat3f dest)
{
	float disc;
	disc = glmc_mat3f_determinant(dest);

	dest[0][0] = dest[0][0]/disc;
	dest[0][1] = dest[0][1]/disc;
	dest[0][2] = dest[0][2]/disc;
	dest[1][0] = dest[1][0]/disc;
	dest[1][1] = dest[1][1]/disc;
	dest[1][2] = dest[1][2]/disc;
	dest[2][0] = dest[2][0]/disc;
	dest[2][1] = dest[2][1]/disc;
	dest[2][2] = dest[2][2]/disc;
}


inline void glmc_mat3f_translation(mat3f dest, float t1, float t2)
{
	dest[0][0] = 1.0;
	dest[0][1] = 0;
	dest[0][2] = 0;
	dest[1][0] = 0;
	dest[1][1] = 1.0;
	dest[1][2] = 0;
	dest[2][0] = t1;
	dest[2][1] = t2;
	dest[2][2] = 1.0;
}
inline void glmc_mat3f_rotation(mat3f dest, float x, float y, float z, float theta)
{
	float c = cos(theta);
	float s = sin(theta);

	dest[0][0] = c + x*x*(1-c);
	dest[0][1] = y*x*(1-c) + z*s;
	dest[0][2] = z*x*(1-c) - y*s;
	dest[1][0] = x*y*(1-c) - z*s;
	dest[1][1] = c + y*y*(1-c);
	dest[1][2] = z*y*(1-c) + x*(s);
	dest[2][0] = x*z*(1-c) + y*s;
	dest[2][1] = y*z*(1-c) - x*s;
	dest[2][2] = c + z*z*(1-c);
}

inline void glmc_mat3f_scale(mat3f dest, float x, float y)
{
	dest[0][0] = x;
	dest[0][1] = 0;
	dest[0][2] = 0;
	dest[1][0] = 0;
	dest[1][1] = y;
	dest[1][2] = 0;
	dest[2][0] = 0;
	dest[2][1] = 0;
	dest[2][2] = 1;
}