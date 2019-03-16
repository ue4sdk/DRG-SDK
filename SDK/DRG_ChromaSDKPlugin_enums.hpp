#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ChromaSDKPlugin.EChromaSDKMouseLed
enum class EChromaSDKMouseLed : uint8_t
{
	EChromaSDKMouseLed__ML_SCROLLWHEEL = 0,
	EChromaSDKMouseLed__ML_LOGO    = 1,
	EChromaSDKMouseLed__ML_BACKLIGHT = 2,
	EChromaSDKMouseLed__ML_LEFT_SIDE1 = 3,
	EChromaSDKMouseLed__ML_LEFT_SIDE2 = 4,
	EChromaSDKMouseLed__ML_LEFT_SIDE3 = 5,
	EChromaSDKMouseLed__ML_LEFT_SIDE4 = 6,
	EChromaSDKMouseLed__ML_LEFT_SIDE5 = 7,
	EChromaSDKMouseLed__ML_LEFT_SIDE6 = 8,
	EChromaSDKMouseLed__ML_LEFT_SIDE7 = 9,
	EChromaSDKMouseLed__ML_BOTTOM1 = 10,
	EChromaSDKMouseLed__ML_BOTTOM2 = 11,
	EChromaSDKMouseLed__ML_BOTTOM3 = 12,
	EChromaSDKMouseLed__ML_BOTTOM4 = 13,
	EChromaSDKMouseLed__ML_BOTTOM5 = 14,
	EChromaSDKMouseLed__ML_RIGHT_SIDE1 = 15,
	EChromaSDKMouseLed__ML_RIGHT_SIDE2 = 16,
	EChromaSDKMouseLed__ML_RIGHT_SIDE3 = 17,
	EChromaSDKMouseLed__ML_RIGHT_SIDE4 = 18,
	EChromaSDKMouseLed__ML_RIGHT_SIDE5 = 19,
	EChromaSDKMouseLed__ML_RIGHT_SIDE6 = 20,
	EChromaSDKMouseLed__ML_RIGHT_SIDE7 = 21,
	EChromaSDKMouseLed__ML_MAX     = 22
};


// Enum ChromaSDKPlugin.EChromaSDKKeyboardKey
enum class EChromaSDKKeyboardKey : uint8_t
{
	EChromaSDKKeyboardKey__KK_ESC  = 0,
	EChromaSDKKeyboardKey__KK_F1   = 1,
	EChromaSDKKeyboardKey__KK_F2   = 2,
	EChromaSDKKeyboardKey__KK_F3   = 3,
	EChromaSDKKeyboardKey__KK_F4   = 4,
	EChromaSDKKeyboardKey__KK_F5   = 5,
	EChromaSDKKeyboardKey__KK_F6   = 6,
	EChromaSDKKeyboardKey__KK_F7   = 7,
	EChromaSDKKeyboardKey__KK_F8   = 8,
	EChromaSDKKeyboardKey__KK_F9   = 9,
	EChromaSDKKeyboardKey__KK_F10  = 10,
	EChromaSDKKeyboardKey__KK_F11  = 11,
	EChromaSDKKeyboardKey__KK_F12  = 12,
	EChromaSDKKeyboardKey__KK      = 13,
	EChromaSDKKeyboardKey__KK01    = 14,
	EChromaSDKKeyboardKey__KK02    = 15,
	EChromaSDKKeyboardKey__KK03    = 16,
	EChromaSDKKeyboardKey__KK04    = 17,
	EChromaSDKKeyboardKey__KK05    = 18,
	EChromaSDKKeyboardKey__KK06    = 19,
	EChromaSDKKeyboardKey__KK07    = 20,
	EChromaSDKKeyboardKey__KK08    = 21,
	EChromaSDKKeyboardKey__KK09    = 22,
	EChromaSDKKeyboardKey__KK_A    = 23,
	EChromaSDKKeyboardKey__KK_B    = 24,
	EChromaSDKKeyboardKey__KK_C    = 25,
	EChromaSDKKeyboardKey__KK_D    = 26,
	EChromaSDKKeyboardKey__KK_E    = 27,
	EChromaSDKKeyboardKey__KK_F    = 28,
	EChromaSDKKeyboardKey__KK_G    = 29,
	EChromaSDKKeyboardKey__KK_H    = 30,
	EChromaSDKKeyboardKey__KK_I    = 31,
	EChromaSDKKeyboardKey__KK_J    = 32,
	EChromaSDKKeyboardKey__KK_K    = 33,
	EChromaSDKKeyboardKey__KK_L    = 34,
	EChromaSDKKeyboardKey__KK_M    = 35,
	EChromaSDKKeyboardKey__KK_N    = 36,
	EChromaSDKKeyboardKey__KK_O    = 37,
	EChromaSDKKeyboardKey__KK_P    = 38,
	EChromaSDKKeyboardKey__KK_Q    = 39,
	EChromaSDKKeyboardKey__KK_R    = 40,
	EChromaSDKKeyboardKey__KK_S    = 41,
	EChromaSDKKeyboardKey__KK_T    = 42,
	EChromaSDKKeyboardKey__KK_U    = 43,
	EChromaSDKKeyboardKey__KK_V    = 44,
	EChromaSDKKeyboardKey__KK_W    = 45,
	EChromaSDKKeyboardKey__KK_X    = 46,
	EChromaSDKKeyboardKey__KK_Y    = 47,
	EChromaSDKKeyboardKey__KK_Z    = 48,
	EChromaSDKKeyboardKey__KK_NUMLOCK = 49,
	EChromaSDKKeyboardKey__KK_NUMPAD0 = 50,
	EChromaSDKKeyboardKey__KK_NUMPAD1 = 51,
	EChromaSDKKeyboardKey__KK_NUMPAD2 = 52,
	EChromaSDKKeyboardKey__KK_NUMPAD3 = 53,
	EChromaSDKKeyboardKey__KK_NUMPAD4 = 54,
	EChromaSDKKeyboardKey__KK_NUMPAD5 = 55,
	EChromaSDKKeyboardKey__KK_NUMPAD6 = 56,
	EChromaSDKKeyboardKey__KK_NUMPAD7 = 57,
	EChromaSDKKeyboardKey__KK_NUMPAD8 = 58,
	EChromaSDKKeyboardKey__KK_NUMPAD9 = 59,
	EChromaSDKKeyboardKey__KK_NUMPAD_DIVIDE = 60,
	EChromaSDKKeyboardKey__KK_NUMPAD_MULTIPLY = 61,
	EChromaSDKKeyboardKey__KK_NUMPAD_SUBTRACT = 62,
	EChromaSDKKeyboardKey__KK_NUMPAD_ADD = 63,
	EChromaSDKKeyboardKey__KK_NUMPAD_ENTER = 64,
	EChromaSDKKeyboardKey__KK_NUMPAD_DECIMAL = 65,
	EChromaSDKKeyboardKey__KK_PRINTSCREEN = 66,
	EChromaSDKKeyboardKey__KK_SCROLL = 67,
	EChromaSDKKeyboardKey__KK_PAUSE = 68,
	EChromaSDKKeyboardKey__KK_INSERT = 69,
	EChromaSDKKeyboardKey__KK_HOME = 70,
	EChromaSDKKeyboardKey__KK_PAGEUP = 71,
	EChromaSDKKeyboardKey__KK_DELETE = 72,
	EChromaSDKKeyboardKey__KK_END  = 73,
	EChromaSDKKeyboardKey__KK_PAGEDOWN = 74,
	EChromaSDKKeyboardKey__KK_UP   = 75,
	EChromaSDKKeyboardKey__KK_LEFT = 76,
	EChromaSDKKeyboardKey__KK_DOWN = 77,
	EChromaSDKKeyboardKey__KK_RIGHT = 78,
	EChromaSDKKeyboardKey__KK_TAB  = 79,
	EChromaSDKKeyboardKey__KK_CAPSLOCK = 80,
	EChromaSDKKeyboardKey__KK_BACKSPACE = 81,
	EChromaSDKKeyboardKey__KK_ENTER = 82,
	EChromaSDKKeyboardKey__KK_LCTRL = 83,
	EChromaSDKKeyboardKey__KK_LWIN = 84,
	EChromaSDKKeyboardKey__KK_LALT = 85,
	EChromaSDKKeyboardKey__KK_SPACE = 86,
	EChromaSDKKeyboardKey__KK_RALT = 87,
	EChromaSDKKeyboardKey__KK_FN   = 88,
	EChromaSDKKeyboardKey__KK_RMENU = 89,
	EChromaSDKKeyboardKey__KK_RCTRL = 90,
	EChromaSDKKeyboardKey__KK_LSHIFT = 91,
	EChromaSDKKeyboardKey__KK_RSHIFT = 92,
	EChromaSDKKeyboardKey__KK_MACRO1 = 93,
	EChromaSDKKeyboardKey__KK_MACRO2 = 94,
	EChromaSDKKeyboardKey__KK_MACRO3 = 95,
	EChromaSDKKeyboardKey__KK_MACRO4 = 96,
	EChromaSDKKeyboardKey__KK_MACRO5 = 97,
	EChromaSDKKeyboardKey__KK_OEM  = 98,
	EChromaSDKKeyboardKey__KK_OEM01 = 99,
	EChromaSDKKeyboardKey__KK_OEM02 = 100,
	EChromaSDKKeyboardKey__KK_OEM03 = 101,
	EChromaSDKKeyboardKey__KK_OEM04 = 102,
	EChromaSDKKeyboardKey__KK_OEM05 = 103,
	EChromaSDKKeyboardKey__KK_OEM06 = 104,
	EChromaSDKKeyboardKey__KK_OEM07 = 105,
	EChromaSDKKeyboardKey__KK_OEM08 = 106,
	EChromaSDKKeyboardKey__KK_OEM09 = 107,
	EChromaSDKKeyboardKey__KK_OEM10 = 108,
	EChromaSDKKeyboardKey__KK_EUR  = 109,
	EChromaSDKKeyboardKey__KK_EUR01 = 110,
	EChromaSDKKeyboardKey__KK_JPN  = 111,
	EChromaSDKKeyboardKey__KK_JPN01 = 112,
	EChromaSDKKeyboardKey__KK_JPN02 = 113,
	EChromaSDKKeyboardKey__KK_JPN03 = 114,
	EChromaSDKKeyboardKey__KK_JPN04 = 115,
	EChromaSDKKeyboardKey__KK_KOR  = 116,
	EChromaSDKKeyboardKey__KK_KOR01 = 117,
	EChromaSDKKeyboardKey__KK_KOR02 = 118,
	EChromaSDKKeyboardKey__KK_KOR03 = 119,
	EChromaSDKKeyboardKey__KK_KOR04 = 120,
	EChromaSDKKeyboardKey__KK_KOR05 = 121,
	EChromaSDKKeyboardKey__KK_KOR06 = 122,
	EChromaSDKKeyboardKey__KK_LOGO = 123,
	EChromaSDKKeyboardKey__KK_INVALID = 124,
	EChromaSDKKeyboardKey__KK_MAX  = 125
};


// Enum ChromaSDKPlugin.EChromaSDKDevice2DEnum
enum class EChromaSDKDevice2DEnum : uint8_t
{
	EChromaSDKDevice2DEnum__DE_Keyboard = 0,
	EChromaSDKDevice2DEnum__DE_Keypad = 1,
	EChromaSDKDevice2DEnum__DE_Mouse = 2,
	EChromaSDKDevice2DEnum__DE_MAX = 3
};


// Enum ChromaSDKPlugin.EChromaSDKDevice1DEnum
enum class EChromaSDKDevice1DEnum : uint8_t
{
	EChromaSDKDevice1DEnum__DE_ChromaLink = 0,
	EChromaSDKDevice1DEnum__DE_Headset = 1,
	EChromaSDKDevice1DEnum__DE_Mousepad = 2,
	EChromaSDKDevice1DEnum__DE_MAX = 3
};


// Enum ChromaSDKPlugin.EChromaSDKDeviceEnum
enum class EChromaSDKDeviceEnum : uint8_t
{
	EChromaSDKDeviceEnum__DE_ChromaLink = 0,
	EChromaSDKDeviceEnum__DE_Headset = 1,
	EChromaSDKDeviceEnum__DE_Keyboard = 2,
	EChromaSDKDeviceEnum__DE_Keypad = 3,
	EChromaSDKDeviceEnum__DE_Mouse = 4,
	EChromaSDKDeviceEnum__DE_Mousepad = 5,
	EChromaSDKDeviceEnum__DE_MAX   = 6
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
