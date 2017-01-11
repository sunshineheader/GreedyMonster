#ifndef __BASIC__PLATFORM__H__H__
#define __BASIC__PLATFORM__H__H__

class BasicPlatform {

protected:
	BasicPlatform();
	~BasicPlatform();
protected:
	enum PlatformType
	{
		PLATFORM_ANDROID,
		PLATFORM_APPLE,
		PLATFORM_UNKNOW
	};
protected:
	inline PlatformType getPlatformType(){ return m_type; }
protected:
	PlatformType m_type;
};

#endif
