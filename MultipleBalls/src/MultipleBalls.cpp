#include "raylib.h"

int main () {

    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow ( screenWidth , screenHeight , "Multiple Balls");

    Vector2 pos1 = {400,300};
    Vector2 pos2 = {200,100};
    int radius1 = 50;
    int radius2 = 50;
    Vector2 velocity1 = {5,3};
    Vector2 velocity2 = {5,3};

    SetTargetFPS(60);

    while (!WindowShouldClose() ){

        pos1.x += velocity1.x;
        pos1.y += velocity1.y;

        pos2.x += velocity2.x;
        pos2.y += velocity2.y;

        if ( pos1.x+radius1 >= screenWidth || pos1.x-radius1 <= 0 ) velocity1.x *= -1;
        if ( pos1.y+radius1 >= screenHeight || pos1.y-radius1 <= 0 ) velocity1.y *= -1;
        if ( pos2.x + radius2 >= screenWidth || pos2.x-radius2 <= 0 ) velocity2.x *= -1;
        if ( pos2.y + radius2 >= screenHeight || pos2.y-radius2 <= 0 ) velocity2.y *= -1;

        BeginDrawing();
        ClearBackground (RAYWHITE);

        DrawCircleV (pos1 , radius1 , BLUE);
        DrawCircleV (pos2 , radius2 , GREEN);

        EndDrawing();
    }
    CloseWindow();

    return 0;
}