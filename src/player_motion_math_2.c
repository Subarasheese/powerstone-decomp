/* @unit 0c09b68a-0c09b6ae */
void math_vec3_sub_scaled(float *d, float *b, float *c, float s) { d[0] = (c[0] - b[0]) * s; d[1] = (c[1] - b[1]) * s; d[2] = (c[2] - b[2]) * s; }
