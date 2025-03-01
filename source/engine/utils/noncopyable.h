#pragma once

/// <summary>
/// ����д����������Ҫ���༰��Աȫ��֧�ֿ�������
/// </summary>
namespace engine
{
	class NonCopyable{
	protected:
		NonCopyable( ) = default;
		~NonCopyable( ) = default;
	private:
		NonCopyable(const NonCopyable&) = delete;
		const NonCopyable& operator=(const NonCopyable&) = delete;
	};
}