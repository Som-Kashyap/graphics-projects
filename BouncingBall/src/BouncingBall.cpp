#include "raylib.h"

int main () {

    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow ( screenWidth , screenHeight , "Bouncing Ball");

    Vector2 pos = {400,300};
    Vector2 velocity = {5,3};
    float radius = 20;

    SetTargetFPS(60);

    while ( !WindowShouldClose() ){

        pos.x += velocity.x;
        pos.y += velocity.y;

        if ( pos.x+radius >= screenWidth || pos.x-radius<= 0){
         velocity.x*=-1;
        DrawText ("Collision!" , 190 ,200,20,BLACK);
        }
        
        if ( pos.y+radius >= screenHeight || pos.y-radius <= 0 ) {
            velocity.y*=-1;
        DrawText ("Collision!" , 190 ,200,20,BLACK);
        }
        BeginDrawing();

        ClearBackground (RAYWHITE);

        DrawCircleV ( pos , radius , PINK);

        EndDrawing();
    }
    CloseWindow();

    return 0;
}