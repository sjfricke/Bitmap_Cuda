#ifndef BMP_DECORDER_H
#define BMP_DECORDER_H

#include "image_util.h"

int decodeBMP(BMP_FILE *bmp_file, char *image_name);

int writeToBMP(BMP_FILE *bmp_file, char *file_name);

#endif
