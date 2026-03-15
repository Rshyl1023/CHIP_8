#include <iostream>

#include "SDL3/SDL_init.h"
#include "SDL3/SDL_timer.h"

int main() {
    system("chcp 65001");
    system("cls");

    // 初始化
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << "SDL 初始化失败！（" << SDL_GetError() << "）" << std::endl;
    }

    //创建窗体
    SDL_Window* window = SDL_CreateWindow(
        "Chip8",
        640,
        320,
        0
        );

    if (window == nullptr) {
        std::cerr << "窗口创建失败! 错误信息: " << SDL_GetError() << std::endl;
        SDL_Quit();
        return -1;
    }

    bool is_running = true;
    SDL_Event event;

    std::cout << "模拟器已启动，请在弹出的窗口点击右上角 X 关闭。" << std::endl;
    while (is_running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_EVENT_QUIT) {
                is_running = false;
            }
        }
        SDL_Delay(16);
    }

    std::cout << "正在关闭模拟器并清理内存..." << std::endl;
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
