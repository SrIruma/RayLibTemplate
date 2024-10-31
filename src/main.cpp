#include "raylib.h"
#include "inc/Manager.hpp"

int main(void)
{
    const int WINDOW_WIDTH = 800;
    const int WINDOW_HEIGHT = 450;

    Manager window{WINDOW_WIDTH, WINDOW_HEIGHT, "SrIruma RayLib Template", "Sprites/Icon.png"};
    Texture2D texture = LoadTexture("Sprites/Icon.png");
    while (!WindowShouldClose())
    {
        window.Update();

        BeginDrawing();
        DrawTexture(texture, 100, 10, WHITE);
        ClearBackground(RAYWHITE);
        DrawText("Press F1 to Toggle Fullscreen!", 190, 200, 20, LIGHTGRAY);
        EndDrawing();
    }
    return 0;
}
