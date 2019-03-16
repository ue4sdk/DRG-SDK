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

// Enum MixerInteractivity.EMixerInteractivityParticipantState
enum class EMixerInteractivityParticipantState : uint8_t
{
	EMixerInteractivityParticipantState__Joined = 0,
	EMixerInteractivityParticipantState__Input_Disabled = 1,
	EMixerInteractivityParticipantState__Left = 2,
	EMixerInteractivityParticipantState__EMixerInteractivityParticipantState_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
