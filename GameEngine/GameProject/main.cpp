#include "Game.h"

int main(void)
{
	Application App;
	App.MakeWindow();

	Game MyGame;

	while (!glfwWindowShouldClose(App.GetWindow()))
	{
		/* Render here */
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		App.Update();
		MyGame.Update(App.GetDeltaTime());
		MyGame.Draw();

		glfwSwapBuffers(App.GetWindow());
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}