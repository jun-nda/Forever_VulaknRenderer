#pragma once

#include "utils/utils.h"
#include "utils/glfw.h"

namespace engine{

	class Engine{
	protected:

	public:
		static Engine* get( );

		bool init( );
		bool loop(const ApplicationTickData& tickData);
		bool release( );

		bool initGLFWWindowsHook(GLFWWindows& in);


	private:
		struct GLFWWindowsInfo{
			bool isCompleted( ) const; // const �ں����ʾ�����ڲ����޸Ķ���״̬�����ڷ�������ǰ���ʾ����һ������

			// Windows info.
			GLFWWindows* windows = nullptr;

			// Handles of hook.
			DelegateHandle initHookHandle;
			DelegateHandle loopHookHandle;
			DelegateHandle releaseHookHandle;
		} m_windowsInfo; 
	};
}