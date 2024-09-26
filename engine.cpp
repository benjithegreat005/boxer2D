#include <iostream>
#include <string>
#include "./glad/include/glad/glad.h"
#include "./glfw/include/GLFW/glfw3.h"


class Utils {
    public:
        static void init() {
           
        };
        static void createWindow(int x, int y) {
            
        }
        static void destroyWindow() {

        };
};


class Scene {
    private:
        int width;
        int height;
        int gravity;

    public:
        Scene(int x, int y, int g) {
            width = x;
            height = y;
            gravity = g;
        }
};


