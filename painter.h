//
// Created by Always Not on 2021/11/17.
//

#ifndef DATASTRUCTURE_PAINTER_H
#define DATASTRUCTURE_PAINTER_H

#include <stdio.h>

#define GREEN "\e[1;32m"
#define NONE "\e[0m"
#define CLEAR "e[1;1He[2J"

void draw(int Matrix[10][10]);

void clear();

#endif //DATASTRUCTURE_PAINTER_H