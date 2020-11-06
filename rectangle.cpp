#include "rectangle.h"

Rectangle::Rectangle(int width, int height) {
    if(width < 0) {
        width *= -1;
    }
    if(height < 0) {
        height *= -1;
    }
    this->width = width;
    this->height = height;
}

int Rectangle::perimeter() {
        return (this->width * 2) + (this->height * 2);
}

void Rectangle::set_width(int w) {
        this->width = w;
}

void Rectangle::set_height(int h) {
        this->height = h;
}
int Rectangle::get_width() {
    return this->width;
}
int Rectangle::get_height() {
    return this->height;
}
int Rectangle::area() {
        return this->width * this->height;
}
