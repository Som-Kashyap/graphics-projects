#include "raylib.h"

int main () {

    const int screnWidth = 800;
    const int screenHeight = 450;

    InitWindow (screnWidth , screenHeight , "Moving Ball");

    SetTargetFPS(60);

    while (!WindowShouldClose() ){

        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Hello , raylib in C++ " , 190 ,200 ,20 ,LIGHTGRAY);
        EndDrawing();
    }

    CloseWindow();
    
    return 0;
}