#include "editor.h"
#include "engine.h"

using namespace engine;

/// <summary>
/// ֻ����һ��
/// </summary>
/// <returns></returns>
Editor* Editor::get( ){
	static Editor editor;
	return &editor;
}

int Editor::run(int argc, char** argv)
{

	Engine::get( )->initGLFWWindowsHook(m_windows);

	return 0;
}
