#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
        private:
            int width;
            int height;
        public:
            Rectangle(int, int);
            int perimeter();
            void set_width(int w);
            void set_height(int h);
            int get_width();
            int get_height();
            int area();
};

#endif /* RECTANGLE_HPP */


