#pragma once

#include "utils/utils.h"
#include "utils/glfw.h"

namespace engine{
	static const std::string kShaderCacheFolder = "save/shader/";
	static const std::string kLogCacheFolder = "save/log/";
	static const std::string kConfigCacheFolder = "save/config/";


	void initBasicCVarConfigs();

	class Engine{
	protected:

	public:
		enum class EModuleState
		{
			None = 0,

			Initing,
			Ticking,
			Releasing,
		};

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

		//std::unique_ptr<ThreadPool>

		EModuleState m_moduleState = EModuleState::None;
	};
}