#pragma once
#include "UtilsDefs.h"
#include "Memory.h"

namespace Updates
{
	class Off
	{
	public:
		// Main
		static const uint64 GNames = 0x45b9440;
		static const uint64 FUObjectArray = 0x46130c8;
		//GNames
		static const uint64 chunksize = 0x3e34;
		static const uint64 static_gnames = 0x2CBB0;
		// UObject
		static const uint64 ulcass = 0x10;
		static const uint64 internal_id = 0x8;
		static const uint64 name = 0x20;
		static const uint64 outer = 0x18;
		// FName
		static const uint64 number = 0x0;
		static const uint64 comparison_id = 0x4;
		// UField
		static const uint64 next = 0x30; // Vector.X = *Vector.Y
		// UEnum
		static const uint64 enumNames = 0x48; // ETextGender
		// UStruct
		static const uint64 superfield = 0x90; // Engine.Pawn = *Engine.Actor
		static const uint64 property_size = 0x48; // Vector = 12;
		static const uint64 children = 0x38; // Vector = *Vector.X
		// UFunction
		static const uint64 func = 0xb8; // WasRecentlyRendered 0x7FF6204410A0?
		static const uint64 function_flags = 0xd8; // WasRecentlyRendered = 0x54020401
		// UProperty
		static const uint64 array_dim = 0x38; // Vector.X = 1
		static const uint64 element_size = 0x3c; // Vector.X = 4
		static const uint64 offset = 0x4c; // Vector.Y = 4
		static const uint64 property_flag = 0x40; // Vector.Y = 0x41000205 0x180010

		static const uint64 uproperty_size = 0x78; // UStruct(CoreUObject.Property) = ?
	};

	class Dec
	{
	public:
		// UObject
		static uint64 objobjects(uint64 v7)
		{
			uint64 v17;
			LODWORD(v17) = (~(~(_DWORD)v7 + 966167183) - 1792622972) ^ 0x5DBD4913;
			HIDWORD(v17) = (~HIDWORD(v7) + 121425405) ^ 0xDC32DCF2;
			return v17;
		}
		static int32 internal_id(uint32 v2)
		{
			return __ROR4__(v2 ^ 0x6905E7BD, 5) ^ (__ROR4__(v2 ^ 0x6905E7BD, 5) << 16) ^ 0xB88E0125;
		}
		static uint64 uclass(uint64 v6)
		{
			return __ROR8__(v6 ^ 0x881ADC1EE7C9FCF5ui64, 19) ^ (__ROR8__(v6 ^ 0x881ADC1EE7C9FCF5ui64, 19) << 32) ^ 0xE03245E062305233ui64;
		}
		static uint64 outer(uint64 v18)
		{
			return __ROL8__(v18 ^ 0x418024EB991C6A88i64, 26) ^ (__ROL8__(v18 ^ 0x418024EB991C6A88i64, 26) << 32) ^ 0xB4CF13AB94F33C3Aui64;
		}
		static int32 comparison_id(uint32 v10)
		{
			return __ROL4__(v10 ^ 0x52322230, 1) ^ (__ROL4__(v10 ^ 0x52322230, 1) << 16) ^ 0x1B3CE7C9;
		}
		static int32 number(uint32 v6)
		{
			return __ROL4__(v6 ^ 0x24C5A321, 7) ^ (__ROL4__(v6 ^ 0x24C5A321, 7) << 16) ^ 0x87E424C5;
		}
	};
}