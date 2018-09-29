#include "glmc.h"

inline float glmc_mat4f_determinant(mat4f mat)
{
	float disc;
	disc = + mat[0][0]*((mat[1][1]*((mat[2][2]*mat[3][3])-(mat[3][2]*mat[2][3]))) - (mat[2][1]*((mat[1][2]*mat[3][3])-(mat[3][2]*mat[1][3]))) + (mat[3][1]*((mat[1][2]*mat[2][3])-(mat[2][2]*mat[1][3]))))
				- mat[1][0]*((mat[0][1]*((mat[2][2]*mat[3][3])-(mat[3][2]*mat[2][3]))) - (mat[2][1]*((mat[0][2]*mat[3][3])-(mat[3][2]*mat[0][3]))) + (mat[3][1]*((mat[0][2]*mat[2][3])-(mat[2][2]*mat[0][3]))))
				+ mat[2][0]*((mat[0][1]*((mat[1][2]*mat[3][3])-(mat[3][2]*mat[1][3]))) - (mat[1][1]*((mat[0][2]*mat[3][3])-(mat[3][2]*mat[0][3]))) + (mat[3][1]*((mat[0][2]*mat[1][3])-(mat[1][2]*mat[0][3]))))
				- mat[3][0]*((mat[0][1]*((mat[1][2]*mat[2][3])-(mat[2][2]*mat[1][3]))) - (mat[1][1]*((mat[0][2]*mat[2][3])-(mat[2][2]*mat[0][3]))) + (mat[2][1]*((mat[0][2]*mat[1][3])-(mat[1][2]*mat[0][3]))));
	return disc;
}

inline void glmc_mat4f_add(mat4f dest, mat4f src_a, mat4f src_b)
{
	dest[0][0] = src_a[0][0] + src_b[0][0];
	dest[0][1] = src_a[0][1] + src_b[0][1];
	dest[0][2] = src_a[0][2] + src_b[0][2];
	dest[0][3] = src_a[0][3] + src_b[0][3];
	dest[1][0] = src_a[1][0] + src_b[1][0];
	dest[1][1] = src_a[1][1] + src_b[1][1];
	dest[1][2] = src_a[1][2] + src_b[1][2];
	dest[1][3] = src_a[1][3] + src_b[1][3];
	dest[2][0] = src_a[2][0] + src_b[2][0];
	dest[2][1] = src_a[2][1] + src_b[2][1];
	dest[2][2] = src_a[2][2] + src_b[2][2];
	dest[2][3] = src_a[2][3] + src_b[2][3];	
	dest[3][0] = src_a[3][0] + src_b[3][0];
	dest[3][1] = src_a[3][1] + src_b[3][1];
	dest[3][2] = src_a[3][2] + src_b[3][2];
	dest[3][3] = src_a[3][3] + src_b[3][3];
}
inline void glmc_mat4f_add_dest(mat4f src, mat4f src_b)
{
	src[0][0] = src[0][0] + src_b[0][0];
	src[0][1] = src[0][1] + src_b[0][1];
	src[0][2] = src[0][2] + src_b[0][2];
	src[0][3] = src[0][3] + src_b[0][3];
	src[1][0] = src[1][0] + src_b[1][0];
	src[1][1] = src[1][1] + src_b[1][1];
	src[1][2] = src[1][2] + src_b[1][2];
	src[1][3] = src[1][3] + src_b[1][3];
	src[2][0] = src[2][0] + src_b[2][0];
	src[2][1] = src[2][1] + src_b[2][1];
	src[2][2] = src[2][2] + src_b[2][2];
	src[2][3] = src[2][3] + src_b[2][3];	
	src[3][0] = src[3][0] + src_b[3][0];
	src[3][1] = src[3][1] + src_b[3][1];
	src[3][2] = src[3][2] + src_b[3][2];
	src[3][3] = src[3][3] + src_b[3][3];	
}

inline void glmc_mat4f_sub(mat4f dest, mat4f src_a, mat4f src_b)
{
	dest[0][0] = src_a[0][0] - src_b[0][0];
	dest[0][1] = src_a[0][1] - src_b[0][1];
	dest[0][2] = src_a[0][2] - src_b[0][2];
	dest[0][3] = src_a[0][3] - src_b[0][3];
	dest[1][0] = src_a[1][0] - src_b[1][0];
	dest[1][1] = src_a[1][1] - src_b[1][1];
	dest[1][2] = src_a[1][2] - src_b[1][2];
	dest[1][3] = src_a[1][3] - src_b[1][3];
	dest[2][0] = src_a[2][0] - src_b[2][0];
	dest[2][1] = src_a[2][1] - src_b[2][1];
	dest[2][2] = src_a[2][2] - src_b[2][2];
	dest[2][3] = src_a[2][3] - src_b[2][3];
	dest[3][0] = src_a[3][0] - src_b[3][0];
	dest[3][1] = src_a[3][1] - src_b[3][1];
	dest[3][2] = src_a[3][2] - src_b[3][2];
	dest[3][3] = src_a[3][3] - src_b[3][3];
}
inline void glmc_mat4f_sub_dest(mat4f dest, mat4f src_b)
{
	dest[0][0] = dest[0][0] - src_b[0][0];
	dest[0][1] = dest[0][1] - src_b[0][1];
	dest[0][2] = dest[0][2] - src_b[0][2];
	dest[0][3] = dest[0][3] - src_b[0][3];
	dest[1][0] = dest[1][0] - src_b[1][0];
	dest[1][1] = dest[1][1] - src_b[1][1];
	dest[1][2] = dest[1][2] - src_b[1][2];
	dest[1][3] = dest[1][3] - src_b[1][3];
	dest[2][0] = dest[2][0] - src_b[2][0];
	dest[2][1] = dest[2][1] - src_b[2][1];
	dest[2][2] = dest[2][2] - src_b[2][2];
	dest[2][3] = dest[2][3] - src_b[2][3];
	dest[3][0] = dest[3][0] - src_b[3][0];
	dest[3][1] = dest[3][1] - src_b[3][1];
	dest[3][2] = dest[3][2] - src_b[3][2];
	dest[3][3] = dest[3][3] - src_b[3][3];		
}

inline void glmc_mat4f_mul(mat4f dest, mat4f src_a, mat4f src_b)
{
	dest[0][0] = (src_a[0][0]*src_b[0][0] + src_a[1][0]*src_b[0][1] + src_a[2][0]*src_b[0][2] + src_a[3][0]*src_b[0][3]);
	dest[0][1] = (src_a[0][1]*src_b[0][0] + src_a[1][1]*src_b[0][1] + src_a[2][1]*src_b[0][2] + src_a[3][1]*src_b[0][3]);
	dest[0][2] = (src_a[0][2]*src_b[0][0] + src_a[1][2]*src_b[0][1] + src_a[2][2]*src_b[0][2] + src_a[3][2]*src_b[0][3]);
	dest[0][3] = (src_a[0][3]*src_b[0][0] + src_a[1][3]*src_b[0][1] + src_a[2][3]*src_b[0][2] + src_a[3][3]*src_b[0][3]);
	dest[1][0] = (src_a[0][0]*src_b[1][0] + src_a[1][0]*src_b[1][1] + src_a[2][0]*src_b[1][2] + src_a[3][0]*src_b[1][3]);
	dest[1][1] = (src_a[0][1]*src_b[1][0] + src_a[1][1]*src_b[1][1] + src_a[2][1]*src_b[1][2] + src_a[3][1]*src_b[1][3]);
	dest[1][2] = (src_a[0][2]*src_b[1][0] + src_a[1][2]*src_b[1][1] + src_a[2][2]*src_b[1][2] + src_a[3][2]*src_b[1][3]);
	dest[1][3] = (src_a[0][3]*src_b[1][0] + src_a[1][3]*src_b[1][1] + src_a[2][3]*src_b[1][2] + src_a[3][3]*src_b[1][3]);
	dest[2][0] = (src_a[0][0]*src_b[2][0] + src_a[1][0]*src_b[2][1] + src_a[2][0]*src_b[2][2] + src_a[3][0]*src_b[2][3]);
	dest[2][1] = (src_a[0][1]*src_b[2][0] + src_a[1][1]*src_b[2][1] + src_a[2][1]*src_b[2][2] + src_a[3][1]*src_b[2][3]);
	dest[2][2] = (src_a[0][2]*src_b[2][0] + src_a[1][2]*src_b[2][1] + src_a[2][2]*src_b[2][2] + src_a[3][2]*src_b[2][3]);
	dest[2][3] = (src_a[0][3]*src_b[2][0] + src_a[1][3]*src_b[2][1] + src_a[2][3]*src_b[2][2] + src_a[3][3]*src_b[2][3]);
	dest[3][0] = (src_a[0][0]*src_b[3][0] + src_a[1][0]*src_b[3][1] + src_a[2][0]*src_b[3][2] + src_a[3][0]*src_b[3][3]);
	dest[3][1] = (src_a[0][1]*src_b[3][0] + src_a[1][1]*src_b[3][1] + src_a[2][1]*src_b[3][2] + src_a[3][1]*src_b[3][3]);
	dest[3][2] = (src_a[0][2]*src_b[3][0] + src_a[1][2]*src_b[3][1] + src_a[2][2]*src_b[3][2] + src_a[3][2]*src_b[3][3]);
	dest[3][3] = (src_a[0][3]*src_b[3][0] + src_a[1][3]*src_b[3][1] + src_a[2][3]*src_b[3][2] + src_a[3][3]*src_b[3][3]);
}
inline void glmc_mat4f_mul_dest(mat4f dest, mat4f src_b)
{
	mat4f temp;

	temp[0][0] = dest[0][0];
	temp[0][1] = dest[0][1];
	temp[0][2] = dest[0][2];
	temp[0][3] = dest[0][3];
	temp[1][0] = dest[1][0];
	temp[1][1] = dest[1][1];
	temp[1][2] = dest[1][2];
	temp[1][3] = dest[1][3];
	temp[2][0] = dest[2][0];
	temp[2][1] = dest[2][1];
	temp[2][2] = dest[2][2];
	temp[2][3] = dest[2][3];
	temp[3][0] = dest[3][0];
	temp[3][1] = dest[3][1];
	temp[3][2] = dest[3][2];
	temp[3][3] = dest[3][3];

	dest[0][0] = (temp[0][0]*src_b[0][0] + temp[1][0]*src_b[0][1] + temp[2][0]*src_b[0][2] + temp[3][0]*src_b[0][3]);
	dest[0][1] = (temp[0][1]*src_b[0][0] + temp[1][1]*src_b[0][1] + temp[2][1]*src_b[0][2] + temp[3][1]*src_b[0][3]);
	dest[0][2] = (temp[0][2]*src_b[0][0] + temp[1][2]*src_b[0][1] + temp[2][2]*src_b[0][2] + temp[3][2]*src_b[0][3]);
	dest[0][3] = (temp[0][3]*src_b[0][0] + temp[1][3]*src_b[0][1] + temp[2][3]*src_b[0][2] + temp[3][3]*src_b[0][3]);
	dest[1][0] = (temp[0][0]*src_b[1][0] + temp[1][0]*src_b[1][1] + temp[2][0]*src_b[1][2] + temp[3][0]*src_b[1][3]);
	dest[1][1] = (temp[0][1]*src_b[1][0] + temp[1][1]*src_b[1][1] + temp[2][1]*src_b[1][2] + temp[3][1]*src_b[1][3]);
	dest[1][2] = (temp[0][2]*src_b[1][0] + temp[1][2]*src_b[1][1] + temp[2][2]*src_b[1][2] + temp[3][2]*src_b[1][3]);
	dest[1][3] = (temp[0][3]*src_b[1][0] + temp[1][3]*src_b[1][1] + temp[2][3]*src_b[1][2] + temp[3][3]*src_b[1][3]);
	dest[2][0] = (temp[0][0]*src_b[2][0] + temp[1][0]*src_b[2][1] + temp[2][0]*src_b[2][2] + temp[3][0]*src_b[2][3]);
	dest[2][1] = (temp[0][1]*src_b[2][0] + temp[1][1]*src_b[2][1] + temp[2][1]*src_b[2][2] + temp[3][1]*src_b[2][3]);
	dest[2][2] = (temp[0][2]*src_b[2][0] + temp[1][2]*src_b[2][1] + temp[2][2]*src_b[2][2] + temp[3][2]*src_b[2][3]);
	dest[2][3] = (temp[0][3]*src_b[2][0] + temp[1][3]*src_b[2][1] + temp[2][3]*src_b[2][2] + temp[3][3]*src_b[2][3]);
	dest[3][0] = (temp[0][0]*src_b[3][0] + temp[1][0]*src_b[3][1] + temp[2][0]*src_b[3][2] + temp[3][0]*src_b[3][3]);
	dest[3][1] = (temp[0][1]*src_b[3][0] + temp[1][1]*src_b[3][1] + temp[2][1]*src_b[3][2] + temp[3][1]*src_b[3][3]);
	dest[3][2] = (temp[0][2]*src_b[3][0] + temp[1][2]*src_b[3][1] + temp[2][2]*src_b[3][2] + temp[3][2]*src_b[3][3]);
	dest[3][3] = (temp[0][3]*src_b[3][0] + temp[1][3]*src_b[3][1] + temp[2][3]*src_b[3][2] + temp[3][3]*src_b[3][3]);
}
inline void glmc_mat4f_mul_s(mat4f dest, mat4f src_a, float src_b)
{
	dest[0][0] = src_a[0][0] * src_b;
	dest[0][1] = src_a[0][1] * src_b;
	dest[0][2] = src_a[0][2] * src_b;
	dest[0][3] = src_a[0][3] * src_b;
	dest[1][0] = src_a[1][0] * src_b;
	dest[1][1] = src_a[1][1] * src_b;
	dest[1][2] = src_a[1][2] * src_b;
	dest[1][3] = src_a[1][3] * src_b;
	dest[2][0] = src_a[2][0] * src_b;
	dest[2][1] = src_a[2][1] * src_b;
	dest[2][2] = src_a[2][2] * src_b;
	dest[2][3] = src_a[2][3] * src_b;
	dest[3][0] = src_a[3][0] * src_b;
	dest[3][1] = src_a[3][1] * src_b;
	dest[3][2] = src_a[3][2] * src_b;
	dest[3][3] = src_a[3][3] * src_b;
}

inline void glmc_mat4f_div(mat4f dest, mat4f src_a, mat4f src_b)
{
	mat4f inv;
	glmc_mat4f_inverse(inv, src_b);
	glmc_mat4f_mul(dest, src_a, inv);
}

inline void glmc_mat4f_div_dest(mat4f dest, mat4f src_b)
{
	mat4f temp;
	for (int i=0;i<4;i++){
		for (int j=0;j<4;j++){
			temp[i][j] = dest[i][j];
		}
	}

	mat4f inv;
	glmc_mat4f_inverse(inv, src_b);
	glmc_mat4f_mul(dest, temp, inv);
}
inline void glmc_mat4f_div_s(mat4f dest, mat4f src_a, float src_b)
{

	dest[0][0] = src_a[0][0] / src_b;
	dest[0][1] = src_a[0][1] / src_b;
	dest[0][2] = src_a[0][2] / src_b;
	dest[0][3] = src_a[0][3] / src_b;
	dest[1][0] = src_a[1][0] / src_b;
	dest[1][1] = src_a[1][1] / src_b;
	dest[1][2] = src_a[1][2] / src_b;
	dest[1][3] = src_a[1][3] / src_b;
	dest[2][0] = src_a[2][0] / src_b;
	dest[2][1] = src_a[2][1] / src_b;
	dest[2][2] = src_a[2][2] / src_b;
	dest[2][3] = src_a[2][3] / src_b;
	dest[3][0] = src_a[3][0] / src_b;
	dest[3][1] = src_a[3][1] / src_b;
	dest[3][2] = src_a[3][2] / src_b;
	dest[3][3] = src_a[3][3] / src_b;
}

inline void glmc_mat4f_madd(mat4f dest, mat4f src_a, mat4f src_b)
{
	dest[0][0] = dest[0][0] + (src_a[0][0]*src_b[0][0] + src_a[1][0]*src_b[0][1] + src_a[2][0]*src_b[0][2] + src_a[3][0]*src_b[0][3]);
	dest[0][1] = dest[0][1] + (src_a[0][1]*src_b[0][0] + src_a[1][1]*src_b[0][1] + src_a[2][1]*src_b[0][2] + src_a[3][1]*src_b[0][3]);
	dest[0][2] = dest[0][2] + (src_a[0][2]*src_b[0][0] + src_a[1][2]*src_b[0][1] + src_a[2][2]*src_b[0][2] + src_a[3][2]*src_b[0][3]);
	dest[0][3] = dest[0][3] + (src_a[0][3]*src_b[0][0] + src_a[1][3]*src_b[0][1] + src_a[2][3]*src_b[0][2] + src_a[3][3]*src_b[0][3]);
	dest[1][0] = dest[1][0] + (src_a[0][0]*src_b[1][0] + src_a[1][0]*src_b[1][1] + src_a[2][0]*src_b[1][2] + src_a[3][0]*src_b[1][3]);
	dest[1][1] = dest[1][1] + (src_a[0][1]*src_b[1][0] + src_a[1][1]*src_b[1][1] + src_a[2][1]*src_b[1][2] + src_a[3][1]*src_b[1][3]);
	dest[1][2] = dest[1][2] + (src_a[0][2]*src_b[1][0] + src_a[1][2]*src_b[1][1] + src_a[2][2]*src_b[1][2] + src_a[3][2]*src_b[1][3]);
	dest[1][3] = dest[1][3] + (src_a[0][3]*src_b[1][0] + src_a[1][3]*src_b[1][1] + src_a[2][3]*src_b[1][2] + src_a[3][3]*src_b[1][3]);
	dest[2][0] = dest[2][0] + (src_a[0][0]*src_b[2][0] + src_a[1][0]*src_b[2][1] + src_a[2][0]*src_b[2][2] + src_a[3][0]*src_b[2][3]);
	dest[2][1] = dest[2][1] + (src_a[0][1]*src_b[2][0] + src_a[1][1]*src_b[2][1] + src_a[2][1]*src_b[2][2] + src_a[3][1]*src_b[2][3]);
	dest[2][2] = dest[2][2] + (src_a[0][2]*src_b[2][0] + src_a[1][2]*src_b[2][1] + src_a[2][2]*src_b[2][2] + src_a[3][2]*src_b[2][3]);
	dest[2][3] = dest[2][3] + (src_a[0][3]*src_b[2][0] + src_a[1][3]*src_b[2][1] + src_a[2][3]*src_b[2][2] + src_a[3][3]*src_b[2][3]);
	dest[3][0] = dest[3][0] + (src_a[0][0]*src_b[3][0] + src_a[1][0]*src_b[3][1] + src_a[2][0]*src_b[3][2] + src_a[3][0]*src_b[3][3]);
	dest[3][1] = dest[3][1] + (src_a[0][1]*src_b[3][0] + src_a[1][1]*src_b[3][1] + src_a[2][1]*src_b[3][2] + src_a[3][1]*src_b[3][3]);
	dest[3][2] = dest[3][2] + (src_a[0][2]*src_b[3][0] + src_a[1][2]*src_b[3][1] + src_a[2][2]*src_b[3][2] + src_a[3][2]*src_b[3][3]);
	dest[3][3] = dest[3][3] + (src_a[0][3]*src_b[3][0] + src_a[1][3]*src_b[3][1] + src_a[2][3]*src_b[3][2] + src_a[3][3]*src_b[3][3]);
}

inline void glmc_mat4f_msub(mat4f dest, mat4f src_a, mat4f src_b)
{
	dest[0][0] = dest[0][0] - (src_a[0][0]*src_b[0][0] + src_a[1][0]*src_b[0][1] + src_a[2][0]*src_b[0][2] + src_a[3][0]*src_b[0][3]);
	dest[0][1] = dest[0][1] - (src_a[0][1]*src_b[0][0] + src_a[1][1]*src_b[0][1] + src_a[2][1]*src_b[0][2] + src_a[3][1]*src_b[0][3]);
	dest[0][2] = dest[0][2] - (src_a[0][2]*src_b[0][0] + src_a[1][2]*src_b[0][1] + src_a[2][2]*src_b[0][2] + src_a[3][2]*src_b[0][3]);
	dest[0][3] = dest[0][3] - (src_a[0][3]*src_b[0][0] + src_a[1][3]*src_b[0][1] + src_a[2][3]*src_b[0][2] + src_a[3][3]*src_b[0][3]);
	dest[1][0] = dest[1][0] - (src_a[0][0]*src_b[1][0] + src_a[1][0]*src_b[1][1] + src_a[2][0]*src_b[1][2] + src_a[3][0]*src_b[1][3]);
	dest[1][1] = dest[1][1] - (src_a[0][1]*src_b[1][0] + src_a[1][1]*src_b[1][1] + src_a[2][1]*src_b[1][2] + src_a[3][1]*src_b[1][3]);
	dest[1][2] = dest[1][2] - (src_a[0][2]*src_b[1][0] + src_a[1][2]*src_b[1][1] + src_a[2][2]*src_b[1][2] + src_a[3][2]*src_b[1][3]);
	dest[1][3] = dest[1][3] - (src_a[0][3]*src_b[1][0] + src_a[1][3]*src_b[1][1] + src_a[2][3]*src_b[1][2] + src_a[3][3]*src_b[1][3]);
	dest[2][0] = dest[2][0] - (src_a[0][0]*src_b[2][0] + src_a[1][0]*src_b[2][1] + src_a[2][0]*src_b[2][2] + src_a[3][0]*src_b[2][3]);
	dest[2][1] = dest[2][1] - (src_a[0][1]*src_b[2][0] + src_a[1][1]*src_b[2][1] + src_a[2][1]*src_b[2][2] + src_a[3][1]*src_b[2][3]);
	dest[2][2] = dest[2][2] - (src_a[0][2]*src_b[2][0] + src_a[1][2]*src_b[2][1] + src_a[2][2]*src_b[2][2] + src_a[3][2]*src_b[2][3]);
	dest[2][3] = dest[2][3] - (src_a[0][3]*src_b[2][0] + src_a[1][3]*src_b[2][1] + src_a[2][3]*src_b[2][2] + src_a[3][3]*src_b[2][3]);
	dest[3][0] = dest[3][0] - (src_a[0][0]*src_b[3][0] + src_a[1][0]*src_b[3][1] + src_a[2][0]*src_b[3][2] + src_a[3][0]*src_b[3][3]);
	dest[3][1] = dest[3][1] - (src_a[0][1]*src_b[3][0] + src_a[1][1]*src_b[3][1] + src_a[2][1]*src_b[3][2] + src_a[3][1]*src_b[3][3]);
	dest[3][2] = dest[3][2] - (src_a[0][2]*src_b[3][0] + src_a[1][2]*src_b[3][1] + src_a[2][2]*src_b[3][2] + src_a[3][2]*src_b[3][3]);
	dest[3][3] = dest[3][3] - (src_a[0][3]*src_b[3][0] + src_a[1][3]*src_b[3][1] + src_a[2][3]*src_b[3][2] + src_a[3][3]*src_b[3][3]);	
}

inline void glmc_mat4f_transpose(mat4f dest, mat4f src)
{
	dest[0][0] = src[0][0];
	dest[0][1] = src[1][0];
	dest[0][2] = src[2][0];
	dest[0][3] = src[3][0];
	dest[1][0] = src[0][1];
	dest[1][1] = src[1][1];
	dest[1][2] = src[2][1];
	dest[1][3] = src[3][1];
	dest[2][0] = src[0][2];
	dest[2][1] = src[1][2];
	dest[2][2] = src[2][2];
	dest[2][3] = src[3][2];
	dest[3][0] = src[0][3];
	dest[3][1] = src[1][3];
	dest[3][2] = src[2][3];
	dest[3][3] = src[3][3];	
}
inline void glmc_mat4f_transpose_dest(mat4f dest)
{
	float temp1,temp2,temp3,temp4,temp5,temp6;

	temp1 = dest[0][1];
	temp2 = dest[0][2];
	temp3 = dest[0][3];
	temp4 = dest[1][2];
	temp5 = dest[1][2];
	temp6 = dest[2][3];
	dest[0][1] = dest[1][0];
	dest[1][0] = temp1;
	dest[0][2] = dest[2][0];
	dest[2][0] = temp2;
	dest[0][3] = dest[3][0];
	dest[3][0] = temp3;
	dest[1][2] = dest[2][1];
	dest[2][1] = temp4;
	dest[1][3] = dest[3][1];
	dest[3][1] = temp5;
	dest[2][3] = dest[3][2];
	dest[3][2] = temp6;
}

inline void glmc_mat4f_inverse(mat4f dest, mat4f src)
{
	float disc;
	disc = glmc_mat4f_determinant(src);
	
	dest[0][0] = ((src[1][1]*((src[2][2]*src[3][3])-(src[3][2]*src[2][3]))) - (src[2][1]*((src[1][2]*src[3][3])-(src[3][2]*src[1][3]))) + (src[3][1]*((src[1][2]*src[2][3])-(src[2][2]*src[1][3]))))/disc;
	dest[0][1] = -1*((src[0][1]*((src[2][2]*src[3][3])-(src[3][2]*src[2][3]))) - (src[2][1]*((src[0][2]*src[3][3])-(src[3][2]*src[0][3]))) + (src[3][1]*((src[0][2]*src[2][3])-(src[2][2]*src[0][3]))))/disc;
	dest[0][2] = ((src[0][1]*((src[1][2]*src[3][3])-(src[3][2]*src[1][3]))) - (src[1][1]*((src[0][2]*src[3][3])-(src[3][2]*src[0][3]))) + (src[3][1]*((src[0][2]*src[1][3])-(src[1][2]*src[0][3]))))/disc;
	dest[0][3] = -1*((src[0][1]*((src[1][2]*src[2][3])-(src[2][2]*src[1][3]))) - (src[1][1]*((src[0][2]*src[2][3])-(src[2][2]*src[0][3]))) + (src[2][1]*((src[0][2]*src[1][3])-(src[1][2]*src[0][3]))))/disc;
	dest[1][0] = -1*((src[1][0]*((src[2][2]*src[3][3])-(src[3][2]*src[2][3]))) - (src[2][0]*((src[1][2]*src[3][3])-(src[3][2]*src[1][3]))) + (src[3][0]*((src[1][2]*src[2][3])-(src[2][2]*src[1][3]))))/disc;
	dest[1][1] = ((src[0][0]*((src[2][2]*src[3][3])-(src[3][2]*src[2][3]))) - (src[2][0]*((src[0][2]*src[3][3])-(src[3][2]*src[0][3]))) + (src[3][0]*((src[0][2]*src[2][3])-(src[2][2]*src[0][3]))))/disc;
	dest[1][2] = -1*((src[0][0]*((src[1][2]*src[3][3])-(src[3][2]*src[1][3]))) - (src[1][0]*((src[0][2]*src[3][3])-(src[3][2]*src[0][3]))) + (src[3][0]*((src[0][2]*src[1][3])-(src[1][2]*src[0][3]))))/disc;
	dest[1][3] = ((src[0][0]*((src[1][2]*src[2][3])-(src[2][2]*src[1][3]))) - (src[1][0]*((src[0][2]*src[2][3])-(src[2][2]*src[0][3]))) + (src[2][0]*((src[0][2]*src[1][3])-(src[1][2]*src[0][3]))))/disc;
	dest[2][0] = ((src[1][0]*((src[2][1]*src[3][3])-(src[3][1]*src[2][3]))) - (src[2][0]*((src[1][1]*src[3][3])-(src[3][1]*src[1][3]))) + (src[3][0]*((src[1][1]*src[2][3])-(src[2][1]*src[1][3]))))/disc;
	dest[2][1] = -1*((src[0][0]*((src[2][1]*src[3][3])-(src[3][1]*src[2][3]))) - (src[2][0]*((src[0][1]*src[3][3])-(src[3][1]*src[0][3]))) + (src[3][0]*((src[0][1]*src[2][3])-(src[2][1]*src[0][3]))))/disc;
	dest[2][2] = ((src[0][0]*((src[1][1]*src[3][3])-(src[3][1]*src[1][3]))) - (src[1][0]*((src[0][1]*src[3][3])-(src[3][1]*src[0][3]))) + (src[3][0]*((src[0][1]*src[1][3])-(src[1][1]*src[0][3]))))/disc;
	dest[2][3] = -1*((src[0][0]*((src[1][1]*src[2][3])-(src[2][1]*src[1][3]))) - (src[1][0]*((src[0][1]*src[2][3])-(src[2][1]*src[0][3]))) + (src[2][0]*((src[0][1]*src[1][3])-(src[1][1]*src[0][3]))))/disc;
	dest[3][0] = -1*((src[1][0]*((src[2][1]*src[3][2])-(src[3][1]*src[2][2]))) - (src[2][0]*((src[1][1]*src[3][2])-(src[3][1]*src[1][2]))) + (src[3][0]*((src[1][1]*src[2][2])-(src[2][1]*src[1][2]))))/disc;
	dest[3][1] = ((src[0][0]*((src[2][1]*src[3][2])-(src[3][1]*src[2][2]))) - (src[2][0]*((src[0][1]*src[3][2])-(src[3][1]*src[0][2]))) + (src[3][0]*((src[0][1]*src[2][2])-(src[2][1]*src[0][2]))))/disc;
	dest[3][2] = -1*((src[0][0]*((src[1][1]*src[3][2])-(src[3][1]*src[1][2]))) - (src[1][0]*((src[0][1]*src[3][2])-(src[3][1]*src[0][2]))) + (src[3][0]*((src[0][1]*src[1][2])-(src[1][1]*src[0][2]))))/disc;
	dest[3][3] = ((src[0][0]*((src[1][1]*src[2][2])-(src[2][1]*src[1][2]))) - (src[1][0]*((src[0][1]*src[2][2])-(src[2][1]*src[0][2]))) + (src[2][0]*((src[0][1]*src[1][2])-(src[1][1]*src[0][2]))))/disc;

}

inline void glmc_mat4f_normlize(mat4f dest, mat4f src)
{
	float disc;
	disc = glmc_mat4f_determinant(src);

	dest[0][0] = src[0][0] / disc;
	dest[0][1] = src[0][1] / disc;
	dest[0][2] = src[0][2] / disc;
	dest[0][3] = src[0][3] / disc;
	dest[1][0] = src[1][0] / disc;
	dest[1][1] = src[1][1] / disc;
	dest[1][2] = src[1][2] / disc;
	dest[1][3] = src[1][3] / disc;
	dest[2][0] = src[2][0] / disc;
	dest[2][1] = src[2][1] / disc;
	dest[2][2] = src[2][2] / disc;
	dest[2][3] = src[2][3] / disc;
	dest[3][0] = src[3][0] / disc;
	dest[3][1] = src[3][1] / disc;
	dest[3][2] = src[3][2] / disc;
	dest[3][3] = src[3][3] / disc;
}
inline void glmc_mat4f_normlize_dest(mat4f dest)
{
	float disc;
	disc = glmc_mat4f_determinant(dest);

	dest[0][0] = dest[0][0] / disc;
	dest[0][1] = dest[0][1] / disc;
	dest[0][2] = dest[0][2] / disc;
	dest[0][3] = dest[0][3] / disc;
	dest[1][0] = dest[1][0] / disc;
	dest[1][1] = dest[1][1] / disc;
	dest[1][2] = dest[1][2] / disc;
	dest[1][3] = dest[1][3] / disc;
	dest[2][0] = dest[2][0] / disc;
	dest[2][1] = dest[2][1] / disc;
	dest[2][2] = dest[2][2] / disc;
	dest[2][3] = dest[2][3] / disc;
	dest[3][0] = dest[3][0] / disc;
	dest[3][1] = dest[3][1] / disc;
	dest[3][2] = dest[3][2] / disc;
	dest[3][3] = dest[3][3] / disc;
}

inline void glmc_mat4f_translation(mat4f dest, float t1, float t2, float t3)
{
	dest[0][0] = 1.0;
	dest[0][1] = 0;
	dest[0][2] = 0;
	dest[0][3] = 0;
	dest[1][0] = 0;
	dest[1][1] = 1.0;
	dest[1][2] = 0;
	dest[1][3] = 0;
	dest[2][0] = 0;
	dest[2][1] = 0;
	dest[2][2] = 1.0;
	dest[2][3] = 0;
	dest[3][0] = t1;
	dest[3][1] = t2;
	dest[3][2] = t3;
	dest[3][3] = 1.0;
}

inline void glmc_mat4f_rotation(mat4f dest, float x, float y, float z, float theta)
{
	float c = cos(theta);
	float s = sin(theta);

	dest[0][0] = c + x*x*(1-c);
	dest[0][1] = y*x*(1-c) + z*s;
	dest[0][2] = z*x*(1-c) - y*s;
	dest[0][3] = 0;

	dest[1][0] = x*y*(1-c) - z*s;
	dest[1][1] = c + y*y*(1-c);
	dest[1][2] = z*y*(1-c) + x*(s);
	dest[1][3] = 0;

	dest[2][0] = x*z*(1-c) + y*s;
	dest[2][1] = y*z*(1-c) - x*s;
	dest[2][2] = c + z*z*(1-c);
	dest[2][3] = 0;

	dest[3][0] = 0;
	dest[3][1] = 0;
	dest[3][2] = 0;
	dest[3][3] = 1;
}

inline void glmc_mat4_scale(mat4f dest , float x, float y, float z)
{
	dest[0][0] = x;
	dest[0][1] = 0;
	dest[0][2] = 0;
	dest[0][3] = 0;
	dest[1][0] = 0;
	dest[1][1] = y;
	dest[1][2] = 0;
	dest[1][3] = 0;
	dest[2][0] = 0;
	dest[2][1] = 0;
	dest[2][2] = z;
	dest[2][3] = 0;
	dest[3][0] = 0;
	dest[3][1] = 0;
	dest[3][2] = 0;
	dest[3][3] = 1;
}