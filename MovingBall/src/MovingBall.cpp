#include "raylib.h"

int main () {

    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow (screenWidth , screenHeight , "Moving Ball");

    int x = 400;
    int y = 300;
    int radius = 50;
    int speed = 2;

    while (!WindowShouldClose() ){

        if (IsKeyDown(KEY_RIGHT)) x+=speed;

        if ( IsKeyDown(KEY_LEFT)) x-=speed;

        if ( IsKeyDown(KEY_UP)) y+=speed;

        if( IsKeyDown(KEY_DOWN)) y-=speed;

        BeginDrawing();

        ClearBackground (RAYWHITE);

        DrawCircle ( x , y , radius , RED);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}