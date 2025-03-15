#include"GraphManager.h"

GraphManager::GraphManager()
{
	initgraph(800, 800);
}

GraphManager::~GraphManager()
{
	closegraph();
}