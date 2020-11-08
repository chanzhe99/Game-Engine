#pragma once
#include <GLFW/glfw3.h>
#include <Windows.h>
#include <gl/GLU.h>
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include "Matrix.h"

class Application
{
private:
	int ResolutionX, ResolutionY;
	GLFWwindow* Window;
	double LastFrameTime, ThisFrameTime;
	double MaxFPS;
	double DeltaTime, MinDeltaTime;
	int SleepTime, MinSleepTimeTH;
	float FPS;
	char FPSDisplay[32];

public:
	Application();
	Application(int WindowResolutionX, int WindowResolutionY, double TargetMaxFPS);
	~Application();

	int MakeWindow();
	void Update();

	GLFWwindow* GetWindow() { return Window; }
	double GetDeltaTime() { return DeltaTime; }
};

