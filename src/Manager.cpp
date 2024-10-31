#include "inc/Manager.hpp"

Manager::Manager(int width, int height, const char* title, const char* iconPath)
    : width(width), height(height)
{
    Image icon = LoadImage(iconPath);
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(width, height, title);
    SetWindowIcon(icon);
    UnloadImage(icon);
    SetTargetFPS(60);
}

Manager::~Manager()
{
    CloseWindow();
}

void Manager::Update()
{
    if (IsKeyPressed(KEY_F11))
    {
        Toggle();
    }
}

void Manager::Toggle()
{
    if (IsWindowFullscreen())
    {
        ToggleFullscreen();
        SetWindowSize(width, height);
    }
    else 
    {
        int display = GetCurrentMonitor();
        SetWindowSize(GetMonitorWidth(display), GetMonitorHeight(display));
        ToggleFullscreen();
    }
}
