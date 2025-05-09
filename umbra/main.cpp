#include <raylib/raylib.h>

#include <iostream>
#include <string>

using std::string;

void CreateWindow(string name, int x, int y, Color color);

int main()
{
	InitWindow(400, 40, "git branch");

	while (!WindowShouldClose())
	{

		BeginDrawing();
		ClearBackground(BROWN);

		if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
		{
			SetWindowPosition(rand() % 800, rand() % 800);
		}

		EndDrawing();
	}	

	CloseWindow();
	return EXIT_SUCCESS;
}